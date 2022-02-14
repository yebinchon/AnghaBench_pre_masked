
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ thread_t ;
struct TYPE_8__ {scalar_t__ lck_mtx_owner; } ;
typedef TYPE_1__ lck_mtx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,TYPE_1__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (TYPE_1__**,int*) ;
 scalar_t__ FUNC_5 () ;
 void FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((noinline))
void
FUNC_9(
 lck_mtx_t *VAR_5)
{
 uint32_t VAR_6;

 VAR_6 = FUNC_8(VAR_5);


 if (FUNC_0(VAR_6 == VAR_3)) {

  FUNC_4(&VAR_5, &VAR_6);
 }

 FUNC_2((thread_t)VAR_5->lck_mtx_owner == FUNC_3(), "lock %p not owned by thread %p (current owner %p)", VAR_5, FUNC_3(), (thread_t)VAR_5->lck_mtx_owner );

 if (FUNC_0(VAR_6 & VAR_1)) {

  return;
 }

 FUNC_1(FUNC_5() > 0);
 FUNC_1(VAR_6 & VAR_0);
 FUNC_1(VAR_6 & VAR_2);





 if (FUNC_0(VAR_6 & VAR_4)) {
  return FUNC_6(VAR_5);
 }

 FUNC_7(VAR_5, FUNC_8(VAR_5));

 return;
}
