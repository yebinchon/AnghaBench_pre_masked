
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
struct TYPE_11__ {int lck_rw_want_upgrade; int lck_rw_shared_count; } ;
typedef TYPE_2__ lck_rw_t ;
typedef int boolean_t ;
struct TYPE_10__ {int sched_flags; int rwlock_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int VAR_7 ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (char*,TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static boolean_t
FUNC_9(
 lck_rw_t *VAR_8,
 uint32_t VAR_9)
{
 thread_t VAR_10 = FUNC_4();
 uint32_t VAR_11;


 VAR_11 = VAR_10->rwlock_count--;





 if ((VAR_9 & VAR_6) &&
  ((VAR_9 & VAR_4) == VAR_5)) {





  FUNC_7(FUNC_1(VAR_8));
 }

 if ((VAR_11 == 1 ) && (VAR_10->sched_flags & VAR_7)) {

  FUNC_5(VAR_10, FUNC_8(VAR_8));
 }

 FUNC_0(FUNC_2(VAR_1, VAR_3) | VAR_0,
       FUNC_3(VAR_8), VAR_8->lck_rw_shared_count, VAR_8->lck_rw_want_upgrade, 0, 0);

 return (VAR_2);
}
