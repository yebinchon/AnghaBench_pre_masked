
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


typedef int u32 ;
struct TYPE_7__ {int width; int height; } ;
struct TYPE_11__ {scalar_t__ if_type; } ;
struct vpif_params {TYPE_1__ std_info; TYPE_5__ iface; } ;
struct v4l2_pix_format {int field; scalar_t__ pixelformat; int bytesperline; int sizeimage; int height; int width; } ;
struct TYPE_8__ {int height; int width; } ;
struct TYPE_9__ {TYPE_2__ pix; } ;
struct TYPE_10__ {TYPE_3__ fmt; } ;
struct common_obj {scalar_t__ memory; TYPE_4__ fmt; } ;
struct channel_obj {size_t channel_id; struct vpif_params vpifparams; struct common_obj* common; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_12__ {int* channel_bufsize; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 size_t VAR_6 ;
 TYPE_6__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int,int ,char*) ;
 int FUNC_3 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_4(struct channel_obj *VAR_9,
        struct v4l2_pix_format *VAR_10,
        int VAR_11)
{
 struct common_obj *VAR_12 = &(VAR_9->common[VAR_6]);
 struct vpif_params *VAR_13 = &VAR_9->vpifparams;
 enum v4l2_field VAR_14 = VAR_10->field;
 u32 VAR_15, VAR_16, VAR_17;
 int VAR_18 = -VAR_0;

 FUNC_2(2, VAR_8, "vpif_check_format\n");





 if (VAR_13->iface.if_type == VAR_5) {
  if (VAR_10->pixelformat != VAR_3) {
   if (!VAR_11) {
    FUNC_2(2, VAR_8, "invalid pix format\n");
    goto exit;
   }
   VAR_10->pixelformat = VAR_3;
  }
 } else {
  if (VAR_10->pixelformat != VAR_4) {
   if (!VAR_11) {
    FUNC_2(2, VAR_8, "invalid pixel format\n");
    goto exit;
   }
   VAR_10->pixelformat = VAR_4;
  }
 }

 if (!(FUNC_1(VAR_14))) {
  if (!VAR_11) {
   FUNC_2(2, VAR_8, "invalid field format\n");
   goto exit;
  }




  VAR_14 = FUNC_3(&VAR_13->iface);
 } else if (VAR_14 == VAR_1)

  VAR_14 = FUNC_3(&VAR_13->iface);


 VAR_16 = VAR_10->bytesperline;
 if (VAR_16 < VAR_13->std_info.width) {
  if (!VAR_11) {
   FUNC_2(2, VAR_8, "invalid hpitch\n");
   goto exit;
  }
  VAR_16 = VAR_13->std_info.width;
 }

 if (VAR_2 == VAR_12->memory)
  VAR_15 = VAR_10->sizeimage;
 else
  VAR_15 = VAR_7.channel_bufsize[VAR_9->channel_id];

 VAR_17 = VAR_15 / (VAR_16 * 2);


 if (VAR_17 < VAR_13->std_info.height) {
  if (!VAR_11) {
   FUNC_2(2, VAR_8, "Invalid vpitch\n");
   goto exit;
  }
  VAR_17 = VAR_13->std_info.height;
 }


 if (!FUNC_0(VAR_16, 8)) {
  if (!VAR_11) {
   FUNC_2(2, VAR_8, "invalid pitch alignment\n");
   goto exit;
  }

  VAR_16 = (((VAR_16 + 7) / 8) * 8);
 }

 if (VAR_11) {
  VAR_10->bytesperline = VAR_16;
  VAR_10->sizeimage = VAR_16 * VAR_17 * 2;
 }




 VAR_10->width = VAR_12->fmt.fmt.pix.width;
 VAR_10->height = VAR_12->fmt.fmt.pix.height;
 return 0;
exit:
 return VAR_18;
}
