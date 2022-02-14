
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_wdt {int state; } ;
struct inode {int dummy; } ;
struct file {void* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,struct file*) ;
 struct twl4030_wdt* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int FUNC_3 (struct twl4030_wdt*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{
 struct twl4030_wdt *VAR_5 = FUNC_1(VAR_2);


 if (FUNC_2(0, &VAR_5->state))
  return -VAR_0;

 VAR_5->state |= VAR_1;
 VAR_4->private_data = (void *) VAR_5;

 FUNC_3(VAR_5);
 return FUNC_0(VAR_3, VAR_4);
}
