
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lck_mtx_t ;
typedef scalar_t__ boolean_t ;


 uintptr_t VAR_0 ;
 uintptr_t VAR_1 ;
 uintptr_t VAR_2 ;
 scalar_t__ FUNC_0 (uintptr_t) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 () ;
 uintptr_t FUNC_6 (int *) ;
 int FUNC_7 (int *,uintptr_t) ;
 int FUNC_8 (char*,int *) ;

__attribute__((used)) static inline void
FUNC_9(lck_mtx_t *VAR_5, boolean_t VAR_6)
{
 uintptr_t VAR_7;

 FUNC_3(VAR_5);
 VAR_7 = FUNC_6(VAR_5);
 if (FUNC_0(VAR_7)) {
  if (VAR_6)
   FUNC_4(VAR_5, FUNC_2(), VAR_4);
  else



   FUNC_8("Attempting to block on a lock taken as spin-always %p", VAR_5);
  return;
 }
 VAR_7 &= VAR_0;
 VAR_7 |= (VAR_2 | VAR_1);
 FUNC_7(VAR_5, VAR_7);
 FUNC_5();




}
