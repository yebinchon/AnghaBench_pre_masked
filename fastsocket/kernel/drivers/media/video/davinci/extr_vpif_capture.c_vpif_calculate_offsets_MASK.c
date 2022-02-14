
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int frm_fmt; int stdid; } ;
struct TYPE_10__ {int storage_mode; int hpitch; int stdid; } ;
struct vpif_params {TYPE_5__ std_info; TYPE_4__ video_params; } ;
struct video_obj {scalar_t__ buf_field; } ;
struct TYPE_7__ {int field; unsigned int sizeimage; unsigned int bytesperline; } ;
struct TYPE_8__ {TYPE_1__ pix; } ;
struct TYPE_9__ {TYPE_2__ fmt; } ;
struct common_obj {scalar_t__ memory; unsigned int ytop_off; unsigned int ybtm_off; unsigned int ctop_off; unsigned int cbtm_off; TYPE_3__ fmt; } ;
struct channel_obj {size_t channel_id; struct vpif_params vpifparams; struct common_obj* common; struct video_obj video; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_12__ {unsigned int* channel_bufsize; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 TYPE_6__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int ,char*) ;

__attribute__((used)) static void FUNC_1(struct channel_obj *VAR_9)
{
 unsigned int VAR_10, VAR_11, VAR_12;
 struct video_obj *VAR_13 = &(VAR_9->video);
 struct vpif_params *VAR_14 = &VAR_9->vpifparams;
 struct common_obj *VAR_15 = &VAR_9->common[VAR_6];
 enum v4l2_field VAR_16 = VAR_15->fmt.fmt.pix.field;

 FUNC_0(2, VAR_8, "vpif_calculate_offsets\n");

 if (VAR_0 == VAR_16) {
  if (VAR_14->std_info.frm_fmt)
   VAR_13->buf_field = VAR_2;
  else
   VAR_13->buf_field = VAR_1;
 } else
  VAR_13->buf_field = VAR_15->fmt.fmt.pix.field;

 if (VAR_5 == VAR_15->memory)
  VAR_12 = VAR_15->fmt.fmt.pix.sizeimage;
 else
  VAR_12 = VAR_7.channel_bufsize[VAR_9->channel_id];

 VAR_10 = VAR_15->fmt.fmt.pix.bytesperline;
 VAR_11 = VAR_12 / (VAR_10 * 2);

 if ((VAR_2 == VAR_13->buf_field) ||
     (VAR_1 == VAR_13->buf_field)) {

  VAR_15->ytop_off = 0;
  VAR_15->ybtm_off = VAR_10;
  VAR_15->ctop_off = VAR_12 / 2;
  VAR_15->cbtm_off = VAR_12 / 2 + VAR_10;
 } else if (VAR_4 == VAR_13->buf_field) {

  VAR_15->ytop_off = 0;
  VAR_15->ybtm_off = VAR_12 / 4;
  VAR_15->ctop_off = VAR_12 / 2;
  VAR_15->cbtm_off = VAR_15->ctop_off + VAR_12 / 4;
 } else if (VAR_3 == VAR_13->buf_field) {

  VAR_15->ybtm_off = 0;
  VAR_15->ytop_off = VAR_12 / 4;
  VAR_15->cbtm_off = VAR_12 / 2;
  VAR_15->ctop_off = VAR_15->cbtm_off + VAR_12 / 4;
 }
 if ((VAR_2 == VAR_13->buf_field) ||
     (VAR_1 == VAR_13->buf_field))
  VAR_14->video_params.storage_mode = 1;
 else
  VAR_14->video_params.storage_mode = 0;

 if (1 == VAR_14->std_info.frm_fmt)
  VAR_14->video_params.hpitch =
      VAR_15->fmt.fmt.pix.bytesperline;
 else {
  if ((VAR_16 == VAR_0)
      || (VAR_16 == VAR_1))
   VAR_14->video_params.hpitch =
       VAR_15->fmt.fmt.pix.bytesperline * 2;
  else
   VAR_14->video_params.hpitch =
       VAR_15->fmt.fmt.pix.bytesperline;
 }

 VAR_9->vpifparams.video_params.stdid = VAR_14->std_info.stdid;
}
