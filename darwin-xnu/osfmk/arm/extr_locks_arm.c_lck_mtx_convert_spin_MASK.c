
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ thread_t ;
typedef int lck_mtx_t ;


 uintptr_t VAR_0 ;
 uintptr_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (uintptr_t) ;
 uintptr_t VAR_3 ;
 uintptr_t FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 uintptr_t FUNC_6 (int *) ;
 int FUNC_7 (int *,uintptr_t) ;
 int FUNC_8 (char*,int *) ;

void
FUNC_9(lck_mtx_t *VAR_4)
{
 thread_t VAR_5 = FUNC_2();
 uintptr_t VAR_6;
 int VAR_7;

 VAR_6 = FUNC_6(VAR_4);
 if (FUNC_0(VAR_6) == VAR_5)
  return;
 if ((VAR_6 & VAR_1) == 0 || (FUNC_0(VAR_6) != (thread_t)VAR_2))
  FUNC_8("lck_mtx_convert_spin: Not held as spinlock (%p)", VAR_4);
 VAR_6 &= ~(VAR_3);
 FUNC_7(VAR_4, VAR_6);
 VAR_7 = FUNC_5(VAR_4);
 VAR_6 = FUNC_1(VAR_5);
 if (VAR_7 != 0)
  VAR_6 |= VAR_0;





 FUNC_7(VAR_4, VAR_6);
 FUNC_3();

}
