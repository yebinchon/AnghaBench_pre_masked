
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vpif_fh {struct channel_obj* channel; } ;
struct v4l2_pix_format {int sizeimage; int width; int height; } ;
struct TYPE_4__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_5__ {struct v4l2_pix_format pix; } ;
struct TYPE_6__ {TYPE_2__ fmt; } ;
struct common_obj {TYPE_3__ fmt; } ;
struct channel_obj {struct common_obj* common; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct channel_obj*,struct v4l2_pix_format*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
    struct v4l2_format *VAR_3)
{
 struct vpif_fh *VAR_4 = VAR_2;
 struct channel_obj *VAR_5 = VAR_4->channel;
 struct common_obj *VAR_6 = &VAR_5->common[VAR_0];
 struct v4l2_pix_format *VAR_7 = &VAR_3->fmt.pix;
 int VAR_8 = 0;

 VAR_8 = FUNC_0(VAR_5, VAR_7);
 if (VAR_8) {
  *VAR_7 = VAR_6->fmt.fmt.pix;
  VAR_7->sizeimage = VAR_7->width * VAR_7->height * 2;
 }

 return VAR_8;
}
