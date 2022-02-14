
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_sync_data {int in_sync; int fixup_cc; int cpus; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct clock_sync_data *VAR_0)
{
 FUNC_1(&VAR_0->cpus);
 FUNC_4();






 while (VAR_0->in_sync == 0) {
  FUNC_0(1);




  FUNC_2();
 }
 if (VAR_0->in_sync != 1)

  FUNC_3(((void*)0));




 FUNC_5(VAR_0->fixup_cc);
}
