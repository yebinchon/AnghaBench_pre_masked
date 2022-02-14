
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
struct v4l2_pix_format {int field; scalar_t__ pixelformat; scalar_t__ bytesperline; int sizeimage; int height; int width; } ;
struct TYPE_9__ {int height; int width; } ;
struct TYPE_10__ {TYPE_3__ pix; } ;
struct TYPE_11__ {TYPE_4__ fmt; } ;
struct common_obj {scalar_t__ memory; TYPE_5__ fmt; } ;
struct TYPE_7__ {int width; int height; } ;
struct TYPE_8__ {TYPE_1__ std_info; } ;
struct channel_obj {size_t channel_id; TYPE_2__ vpifparams; struct common_obj* common; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_12__ {int* channel_bufsize; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 size_t VAR_3 ;
 TYPE_6__ VAR_4 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct channel_obj*) ;

__attribute__((used)) static int FUNC_4(struct channel_obj *VAR_5,
        struct v4l2_pix_format *VAR_6)
{
 struct common_obj *VAR_7 = &VAR_5->common[VAR_3];
 enum v4l2_field VAR_8 = VAR_6->field;
 u32 VAR_9, VAR_10, VAR_11;

 if (VAR_6->pixelformat != VAR_2)
  goto invalid_fmt_exit;

 if (!(FUNC_1(VAR_8)))
  goto invalid_fmt_exit;

 if (VAR_6->bytesperline <= 0)
  goto invalid_pitch_exit;

 if (VAR_1 == VAR_7->memory)
  VAR_9 = VAR_6->sizeimage;
 else
  VAR_9 = VAR_4.channel_bufsize[VAR_5->channel_id];

 if (FUNC_3(VAR_5)) {
  FUNC_2("Error getting the standard info\n");
  return -VAR_0;
 }

 VAR_10 = VAR_6->bytesperline;
 VAR_11 = VAR_9 / (VAR_10 * 2);


 if ((VAR_10 < VAR_5->vpifparams.std_info.width) ||
     (VAR_11 < VAR_5->vpifparams.std_info.height))
  goto invalid_pitch_exit;


 if (!FUNC_0(VAR_10)) {
  FUNC_2("invalid pitch alignment\n");
  return -VAR_0;
 }
 VAR_6->width = VAR_7->fmt.fmt.pix.width;
 VAR_6->height = VAR_7->fmt.fmt.pix.height;

 return 0;

invalid_fmt_exit:
 FUNC_2("invalid field format\n");
 return -VAR_0;

invalid_pitch_exit:
 FUNC_2("invalid pitch\n");
 return -VAR_0;
}
