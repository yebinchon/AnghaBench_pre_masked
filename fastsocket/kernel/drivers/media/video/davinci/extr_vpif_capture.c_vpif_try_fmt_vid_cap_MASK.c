
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpif_fh {struct channel_obj* channel; } ;
struct v4l2_pix_format {int dummy; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct channel_obj {int dummy; } ;


 int FUNC_0 (struct channel_obj*,struct v4l2_pix_format*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
    struct v4l2_format *VAR_2)
{
 struct vpif_fh *VAR_3 = VAR_1;
 struct channel_obj *VAR_4 = VAR_3->channel;
 struct v4l2_pix_format *VAR_5 = &VAR_2->fmt.pix;

 return FUNC_0(VAR_4, VAR_5, 1);
}
