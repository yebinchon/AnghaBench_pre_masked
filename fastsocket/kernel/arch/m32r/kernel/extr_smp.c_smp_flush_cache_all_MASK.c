
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpumask_t ;
typedef int atomic_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long,int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 unsigned long* FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(void)
{
 cpumask_t VAR_4;
 unsigned long *VAR_5;

 FUNC_5();
 VAR_4 = VAR_1;
 FUNC_2(FUNC_8(), VAR_4);
 FUNC_9(&VAR_3);
 VAR_5=FUNC_3(VAR_4);
 FUNC_1(*VAR_5, (atomic_t *)&VAR_2);
 FUNC_7(&VAR_4, VAR_0, 0);
 FUNC_0();
 while (VAR_2)
  FUNC_4();
 FUNC_10(&VAR_3);
 FUNC_6();
}
