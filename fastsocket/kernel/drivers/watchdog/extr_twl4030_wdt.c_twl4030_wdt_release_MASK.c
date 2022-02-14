
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct twl4030_wdt {int state; TYPE_1__ miscdev; } ;
struct inode {int dummy; } ;
struct file {struct twl4030_wdt* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct twl4030_wdt*) ;
 int FUNC_3 (struct twl4030_wdt*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{
 struct twl4030_wdt *VAR_5 = VAR_4->private_data;
 if (VAR_2) {
  FUNC_1(VAR_5->miscdev.parent,
         "Unexpected close, watchdog still running!\n");
  FUNC_3(VAR_5);
 } else {
  if (FUNC_2(VAR_5))
   return -VAR_0;
  VAR_5->state &= ~VAR_1;
 }

 FUNC_0(0, &VAR_5->state);
 return 0;
}
