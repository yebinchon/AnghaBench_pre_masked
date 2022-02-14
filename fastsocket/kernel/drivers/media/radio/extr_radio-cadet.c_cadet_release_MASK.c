
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct cadet {scalar_t__ users; scalar_t__ rdsstat; int readtimer; } ;


 int FUNC_0 (int *) ;
 struct cadet* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0)
{
 struct cadet *VAR_1 = FUNC_1(VAR_0);

 VAR_1->users--;
 if (0 == VAR_1->users) {
  FUNC_0(&VAR_1->readtimer);
  VAR_1->rdsstat = 0;
 }
 return 0;
}
