
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ thread_t ;
struct TYPE_11__ {int lck_mtx_owner; int lck_mtx_state; } ;
typedef TYPE_2__ lck_mtx_t ;
struct TYPE_10__ {int mutex_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int,int,int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 void FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 void FUNC_7 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*,int) ;

__attribute__((noinline))
void
FUNC_11(
 lck_mtx_t *VAR_7)
{
 uint32_t VAR_8, VAR_9;

 VAR_9 = FUNC_8(VAR_7);

 if (VAR_9 & VAR_4)
  return FUNC_7(VAR_7);
 VAR_8 = VAR_9 & ~(VAR_1 | VAR_5 | VAR_3);
 VAR_8 |= VAR_2;

 VAR_9 = VAR_8 | VAR_1;
 VAR_9 &= ~VAR_2;

 FUNC_3();


 if (!FUNC_1(&VAR_7->lck_mtx_state, VAR_8, VAR_9, VAR_6, VAR_0)) {
  FUNC_4();
  return FUNC_7(VAR_7);
 }
 FUNC_9(VAR_7, 0);

 VAR_9 &= ~VAR_1;
 FUNC_10(VAR_7, VAR_9);
 FUNC_6(VAR_7, VAR_0);
}
