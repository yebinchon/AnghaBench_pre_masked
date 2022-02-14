
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpif_fh {struct channel_obj* channel; } ;
struct TYPE_4__ {int width; int height; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_3__ {int width; int height; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_cropcap {scalar_t__ type; TYPE_2__ bounds; TYPE_1__ defrect; } ;
struct file {int dummy; } ;
struct common_obj {int width; int height; } ;
struct channel_obj {struct common_obj* common; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_3, void *VAR_4,
   struct v4l2_cropcap *VAR_5)
{
 struct vpif_fh *VAR_6 = VAR_4;
 struct channel_obj *VAR_7 = VAR_6->channel;
 struct common_obj *VAR_8 = &VAR_7->common[VAR_2];
 if (VAR_1 != VAR_5->type)
  return -VAR_0;

 VAR_5->bounds.left = VAR_5->bounds.top = 0;
 VAR_5->defrect.left = VAR_5->defrect.top = 0;
 VAR_5->defrect.height = VAR_5->bounds.height = VAR_8->height;
 VAR_5->defrect.width = VAR_5->bounds.width = VAR_8->width;

 return 0;
}
