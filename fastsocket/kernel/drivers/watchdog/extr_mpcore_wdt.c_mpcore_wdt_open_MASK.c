
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpcore_wdt {int timer_alive; } ;
struct inode {int dummy; } ;
struct file {struct mpcore_wdt* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct mpcore_wdt*) ;
 int FUNC_2 (struct inode*,struct file*) ;
 scalar_t__ VAR_3 ;
 struct mpcore_wdt* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_4, struct file *VAR_5)
{
 struct mpcore_wdt *VAR_6 = FUNC_3(VAR_2);

 if (FUNC_4(0, &VAR_6->timer_alive))
  return -VAR_0;

 if (VAR_3)
  FUNC_0(VAR_1);

 VAR_5->private_data = VAR_6;




 FUNC_1(VAR_6);

 return FUNC_2(VAR_4, VAR_5);
}
