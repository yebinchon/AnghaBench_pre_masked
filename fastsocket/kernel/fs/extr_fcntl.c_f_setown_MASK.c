
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid {int dummy; } ;
struct file {int dummy; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,struct pid*,int,int) ;
 struct pid* FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int FUNC_4(struct file *VAR_2, unsigned long VAR_3, int VAR_4)
{
 enum pid_type VAR_5;
 struct pid *VAR_6;
 int VAR_7 = VAR_3;
 int VAR_8;
 VAR_5 = VAR_1;
 if (VAR_7 < 0) {
  VAR_5 = VAR_0;
  VAR_7 = -VAR_7;
 }
 FUNC_2();
 VAR_6 = FUNC_1(VAR_7);
 VAR_8 = FUNC_0(VAR_2, VAR_6, VAR_5, VAR_4);
 FUNC_3();
 return VAR_8;
}
