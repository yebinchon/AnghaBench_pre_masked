
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpif_fh {struct channel_obj* channel; } ;
struct v4l2_fmtdesc {scalar_t__ index; int pixelformat; int description; void* type; } ;
struct file {int dummy; } ;
struct TYPE_3__ {scalar_t__ if_type; } ;
struct TYPE_4__ {TYPE_1__ iface; } ;
struct channel_obj {TYPE_2__ vpifparams; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,int ,char*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_6, void *VAR_7,
     struct v4l2_fmtdesc *VAR_8)
{
 struct vpif_fh *VAR_9 = VAR_7;
 struct channel_obj *VAR_10 = VAR_9->channel;

 if (VAR_8->index != 0) {
  FUNC_1(1, VAR_5, "Invalid format index\n");
  return -VAR_0;
 }


 if (VAR_10->vpifparams.iface.if_type == VAR_4) {
  VAR_8->type = VAR_1;
  FUNC_0(VAR_8->description, "Raw Mode -Bayer Pattern GrRBGb");
  VAR_8->pixelformat = VAR_2;
 } else {
  VAR_8->type = VAR_1;
  FUNC_0(VAR_8->description, "YCbCr4:2:2 YC Planar");
  VAR_8->pixelformat = VAR_3;
 }
 return 0;
}
