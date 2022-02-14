
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
struct TYPE_9__ {int mutex_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int,int ,int ) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,int,int ) ;
 void FUNC_6 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,uintptr_t) ;

__attribute__((noinline))
void
FUNC_9(
 lck_mtx_t *VAR_5)
{
 uint32_t VAR_6, VAR_7;

 FUNC_4();
 VAR_7 = FUNC_7(VAR_5);
 VAR_6 = VAR_7 & ~(VAR_1 | VAR_2 | VAR_3);
 VAR_7 = VAR_6 | VAR_1 | VAR_2;

 FUNC_2();
 if (!FUNC_0(&VAR_5->lck_mtx_state, VAR_6, VAR_7, VAR_4, VAR_0)) {
  FUNC_3();
  return FUNC_6(VAR_5);
 }



 thread_t VAR_8 = FUNC_1();

 FUNC_8(VAR_5, (uintptr_t)VAR_8);
 FUNC_5(VAR_5, VAR_7, VAR_0);
}
