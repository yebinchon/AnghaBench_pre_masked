
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
typedef scalar_t__ lck_rw_type_t ;
struct TYPE_12__ {int lck_rw_shared_count; scalar_t__ lck_r_waiting; scalar_t__ lck_w_waiting; scalar_t__ lck_rw_priv_excl; } ;
typedef TYPE_2__ lck_rw_t ;
struct TYPE_11__ {int sched_flags; int rwlock_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*,int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (char*,TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static lck_rw_type_t
FUNC_8(
 lck_rw_t *VAR_4,
 uint32_t VAR_5)
{
 lck_rw_t *VAR_6;
 lck_rw_type_t VAR_7;
 thread_t VAR_8;
 uint32_t VAR_9;







 VAR_6 = (lck_rw_t *)&VAR_5;

 if (VAR_6->lck_rw_shared_count <= 1) {
  if (VAR_6->lck_w_waiting)
   FUNC_6(FUNC_2(VAR_4));

  if (!(VAR_6->lck_rw_priv_excl && VAR_6->lck_w_waiting) && VAR_6->lck_r_waiting)
   FUNC_6(FUNC_1(VAR_4));
 }
 if (VAR_6->lck_rw_shared_count)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_0;


 VAR_8 = FUNC_3();
 VAR_9 = VAR_8->rwlock_count--;





 if ((VAR_9 == 1 ) && (VAR_8->sched_flags & VAR_3)) {

  FUNC_4(VAR_8, FUNC_7(VAR_4));
 }





 return(VAR_7);
}
