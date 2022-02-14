
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ thread_t ;
typedef int lck_mtx_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (uintptr_t) ;
 scalar_t__ FUNC_1 () ;
 uintptr_t FUNC_2 (int *) ;
 int FUNC_3 (char*,unsigned int) ;

void
FUNC_4(lck_mtx_t *VAR_3, unsigned int VAR_4)
{
 thread_t VAR_5, VAR_6;
 uintptr_t VAR_7;

 VAR_7 = FUNC_2(VAR_3);
 VAR_6 = FUNC_0(VAR_7);
 if (VAR_6 == (thread_t)VAR_2) {

  return;
 }
 VAR_5 = FUNC_1();
 if (VAR_4 == VAR_1) {
  if (VAR_5 != VAR_6)
   FUNC_3("lck_mtx_assert(): mutex (%p) owned", VAR_3);
 } else if (VAR_4 == VAR_0) {
  if (VAR_5 == VAR_6)
   FUNC_3("lck_mtx_assert(): mutex (%p) not owned", VAR_3);
 } else
  FUNC_3("lck_mtx_assert(): invalid arg (%u)", VAR_4);
}
