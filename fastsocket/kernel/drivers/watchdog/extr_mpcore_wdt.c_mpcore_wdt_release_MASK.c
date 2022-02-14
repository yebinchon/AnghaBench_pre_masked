
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpcore_wdt {int expect_close; int timer_alive; int dev; } ;
struct inode {int dummy; } ;
struct file {struct mpcore_wdt* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (struct mpcore_wdt*) ;
 int FUNC_3 (struct mpcore_wdt*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, struct file *VAR_2)
{
 struct mpcore_wdt *VAR_3 = VAR_2->private_data;





 if (VAR_3->expect_close == 42)
  FUNC_3(VAR_3);
 else {
  FUNC_1(VAR_0, VAR_3->dev,
    "unexpected close, not stopping watchdog!\n");
  FUNC_2(VAR_3);
 }
 FUNC_0(0, &VAR_3->timer_alive);
 VAR_3->expect_close = 0;
 return 0;
}
