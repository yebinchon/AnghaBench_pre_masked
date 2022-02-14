
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lg_cpu {int hrt; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(struct lg_cpu *VAR_1, unsigned long VAR_2)
{
 ktime_t VAR_3;

 if (FUNC_4(VAR_2 == 0)) {

  FUNC_0(&VAR_1->hrt);
  return;
 }






 VAR_3 = FUNC_2(FUNC_3(), VAR_2);
 FUNC_1(&VAR_1->hrt, VAR_3, VAR_0);
}
