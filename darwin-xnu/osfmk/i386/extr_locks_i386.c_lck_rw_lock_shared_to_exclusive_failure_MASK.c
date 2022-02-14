
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
struct TYPE_11__ {int lck_rw_shared_count; int lck_rw_want_upgrade; scalar_t__ lck_w_waiting; } ;
typedef TYPE_2__ lck_rw_t ;
typedef int boolean_t ;
struct TYPE_10__ {int sched_flags; int rwlock_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (char*,TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static boolean_t
FUNC_9(
 lck_rw_t *VAR_5,
 uint32_t VAR_6)
{
 lck_rw_t *VAR_7;
 thread_t VAR_8 = FUNC_4();
 uint32_t VAR_9;


 VAR_9 = VAR_8->rwlock_count--;





 VAR_7 = (lck_rw_t *)&VAR_6;

 if (VAR_7->lck_w_waiting && VAR_7->lck_rw_shared_count == 1) {





  FUNC_7(FUNC_2(VAR_5));
 }

 if ((VAR_9 == 1 ) && (VAR_8->sched_flags & VAR_4)) {

  FUNC_5(VAR_8, FUNC_8(VAR_5));
 }

 FUNC_0(FUNC_1(VAR_1, VAR_3) | VAR_0,
       FUNC_3(VAR_5), VAR_5->lck_rw_shared_count, VAR_5->lck_rw_want_upgrade, 0, 0);

 return (VAR_2);
}
