
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
struct TYPE_16__ {int lck_rw_data; } ;
typedef TYPE_2__ lck_rw_t ;
typedef int boolean_t ;
struct TYPE_15__ {int rwlock_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,char*,int ,TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int*,int ) ;
 scalar_t__ FUNC_4 (int *,int,int,int ) ;
 int FUNC_5 () ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_9 ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_1__* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_11 (char*,TYPE_2__*,int) ;

boolean_t FUNC_12(lck_rw_t *VAR_10)
{
 uint32_t VAR_11, VAR_12;
 thread_t VAR_13;

 for ( ; ; ) {
  VAR_11 = FUNC_3(&VAR_10->lck_rw_data, &VAR_12, VAR_9);
  if (VAR_11 & VAR_2) {





   FUNC_11("lck_rw_try_lock_exclusive(): Interlock locked (%p): %x", VAR_10, VAR_11);

  }
  if (VAR_11 & (VAR_3 | VAR_4 | VAR_5)) {
   FUNC_2();
   return VAR_1;
  }
  VAR_11 |= VAR_4;
  if (FUNC_4(&VAR_10->lck_rw_data, VAR_12, VAR_11, VAR_9))
   break;
  FUNC_5();
 }
 VAR_13 = FUNC_6();
 VAR_13->rwlock_count++;




 FUNC_10(VAR_10, VAR_13);



 return VAR_8;
}
