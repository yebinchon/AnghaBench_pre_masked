
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpif_fh {struct channel_obj* channel; } ;
struct v4l2_format {scalar_t__ type; } ;
struct file {int dummy; } ;
struct common_obj {int lock; struct v4l2_format fmt; } ;
struct channel_obj {struct common_obj* common; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
    struct v4l2_format *VAR_5)
{
 struct vpif_fh *VAR_6 = VAR_4;
 struct channel_obj *VAR_7 = VAR_6->channel;
 struct common_obj *VAR_8 = &VAR_7->common[VAR_2];


 if (VAR_8->fmt.type != VAR_5->type)
  return -VAR_0;


 if (FUNC_0(&VAR_8->lock))
  return -VAR_1;

 *VAR_5 = VAR_8->fmt;
 FUNC_1(&VAR_8->lock);
 return 0;
}
