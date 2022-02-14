
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350 {int dev; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*) ;
 struct wm8350* FUNC_2 () ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct wm8350*) ;
 int FUNC_4 (struct wm8350*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 struct wm8350 *VAR_4 = FUNC_2();

 if (VAR_0)
  FUNC_4(VAR_4);
 else {
  FUNC_1(VAR_4->dev, "Watchdog device closed uncleanly\n");
  FUNC_3(VAR_4);
 }

 FUNC_0(0, &VAR_1);

 return 0;
}
