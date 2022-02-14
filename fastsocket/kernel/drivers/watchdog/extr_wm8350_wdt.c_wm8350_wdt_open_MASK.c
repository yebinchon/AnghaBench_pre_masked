
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350 {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wm8350* FUNC_0 () ;
 int FUNC_1 (struct inode*,struct file*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (struct wm8350*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{
 struct wm8350 *VAR_5 = FUNC_0();
 int VAR_6;

 if (!VAR_5)
  return -VAR_1;

 if (FUNC_2(0, &VAR_2))
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6 != 0)
  return VAR_6;

 return FUNC_1(VAR_3, VAR_4);
}
