
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
struct TYPE_10__ {int lck_mtx_state; } ;
typedef TYPE_2__ lck_mtx_t ;
typedef int boolean_t ;
struct TYPE_9__ {int mutex_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int,int,int ,int ) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,uintptr_t) ;

__attribute__((noinline))
boolean_t
FUNC_8(
 lck_mtx_t *VAR_7)
{
 uint32_t VAR_8, VAR_9;

 VAR_9 = FUNC_6(VAR_7);
 VAR_8 = VAR_9 & ~(VAR_1 | VAR_2);
 VAR_9 = VAR_8 | VAR_1 | VAR_3;

 FUNC_3();
 if (!FUNC_1(&VAR_7->lck_mtx_state, VAR_8, VAR_9, VAR_6, VAR_0)) {
  FUNC_4();
  return FUNC_5(VAR_7);
 }



 thread_t VAR_10 = FUNC_2();

 FUNC_7(VAR_7, (uintptr_t)VAR_10);
 return VAR_5;
}
