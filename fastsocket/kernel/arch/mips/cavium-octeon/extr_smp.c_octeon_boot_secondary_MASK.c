
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,int ) ;
 scalar_t__ FUNC_5 (struct task_struct*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(int VAR_3, struct task_struct *VAR_4)
{
 int VAR_5;

 FUNC_4("SMP: Booting CPU%02d (CoreId %2d)...\n", VAR_3,
  FUNC_1(VAR_3));

 VAR_2 = FUNC_0(VAR_4);
 VAR_1 = (unsigned long)(FUNC_5(VAR_4));
 VAR_0 = FUNC_1(VAR_3);
 FUNC_2();

 VAR_5 = 10000;
 while (VAR_2 && VAR_5) {

  FUNC_6(1);
  VAR_5--;
 }
 if (VAR_5 == 0)
  FUNC_3("Secondary boot timeout\n");
}
