
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct imon_context {int display_isopen; int lock; int dev_present_intf0; int dev; int display_supported; } ;
struct file {struct imon_context* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct imon_context*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 struct imon_context *VAR_4 = ((void*)0);
 int VAR_5 = 0;

 VAR_4 = VAR_3->private_data;

 if (!VAR_4) {
  FUNC_4("no context for device\n");
  return -VAR_1;
 }

 FUNC_2(&VAR_4->lock);

 if (!VAR_4->display_supported) {
  FUNC_4("display not supported by device\n");
  VAR_5 = -VAR_1;
 } else if (!VAR_4->display_isopen) {
  FUNC_4("display is not open\n");
  VAR_5 = -VAR_0;
 } else {
  VAR_4->display_isopen = 0;
  FUNC_0(VAR_4->dev, "display port closed\n");
  if (!VAR_4->dev_present_intf0) {





   FUNC_3(&VAR_4->lock);
   FUNC_1(VAR_4);
   return VAR_5;
  }
 }

 FUNC_3(&VAR_4->lock);
 return VAR_5;
}
