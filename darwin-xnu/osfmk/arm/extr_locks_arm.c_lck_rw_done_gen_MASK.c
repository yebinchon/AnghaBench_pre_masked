
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
struct TYPE_7__ {int data; int shared_count; scalar_t__ r_waiting; scalar_t__ w_waiting; scalar_t__ priv_excl; } ;
typedef TYPE_2__ lck_rw_word_t ;
typedef scalar_t__ lck_rw_type_t ;
typedef int lck_rw_t ;
struct TYPE_6__ {int sched_flags; int rwlock_count; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (char*,TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static lck_rw_type_t
FUNC_8(
 lck_rw_t *VAR_4,
 uint32_t VAR_5)
{
 lck_rw_word_t VAR_6;
 lck_rw_type_t VAR_7;
 thread_t VAR_8;
 uint32_t VAR_9;







 VAR_6.data = VAR_5;

 if (VAR_6.shared_count <= 1) {
  if (VAR_6.w_waiting)
   FUNC_6(FUNC_1(VAR_4));

  if (!(VAR_6.priv_excl && VAR_6.w_waiting) && VAR_6.r_waiting)
   FUNC_6(FUNC_0(VAR_4));
 }
 if (VAR_6.shared_count)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_0;


 VAR_8 = FUNC_3();
 VAR_9 = VAR_8->rwlock_count--;




 if ((VAR_9 == 1 ) && (VAR_8->sched_flags & VAR_3)) {

  FUNC_4(VAR_8, FUNC_7(VAR_4));
 }



 return VAR_7;
}
