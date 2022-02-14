
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ thread_t ;
struct TYPE_6__ {scalar_t__ lck_mtx_owner; } ;
typedef TYPE_1__ lck_mtx_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_1__**,int*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,TYPE_1__*) ;

__attribute__((noinline))
void
FUNC_5(
 lck_mtx_t *VAR_5,
 unsigned int VAR_6)
{
 thread_t VAR_7, VAR_8;
 uint32_t VAR_9;

 VAR_7 = FUNC_1();
 VAR_9 = FUNC_3(VAR_5);

 if (VAR_9 == VAR_4) {
  FUNC_2(&VAR_5, &VAR_9);
 }

 VAR_8 = (thread_t)VAR_5->lck_mtx_owner;

 if (VAR_6 == VAR_1) {
  if (VAR_8 != VAR_7 || !(VAR_9 & (VAR_2 | VAR_3)))
   FUNC_4("mutex (%p) not owned\n", VAR_5);
 } else {
  FUNC_0 (VAR_6 == VAR_0);
  if (VAR_8 == VAR_7)
   FUNC_4("mutex (%p) owned\n", VAR_5);
 }
}
