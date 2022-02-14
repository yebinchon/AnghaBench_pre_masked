
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int lck_rw_type_t ;
struct TYPE_6__ {scalar_t__ lck_rw_owner; int lck_rw_data; } ;
typedef TYPE_1__ lck_rw_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int,char*,int ,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int*,int ) ;
 scalar_t__ FUNC_3 (int *,int,int,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_11 ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;
 int FUNC_9 (char*,...) ;

lck_rw_type_t FUNC_10(lck_rw_t *VAR_12)
{
 uint32_t VAR_13, VAR_14;
 boolean_t VAR_15 = VAR_0;

 for ( ; ; ) {
  VAR_13 = FUNC_2(&VAR_12->lck_rw_data, &VAR_14, VAR_11);
  if (VAR_13 & VAR_1) {





   FUNC_9("lck_rw_done(): Interlock locked (%p): %x", VAR_12, VAR_13);

  }
  if (VAR_13 & VAR_4) {
   FUNC_0(VAR_12->lck_rw_owner == VAR_9, "state=0x%x, owner=%p", VAR_12->lck_rw_data, VAR_12->lck_rw_owner);
   VAR_13 -= VAR_5;
   if ((VAR_13 & VAR_4) == 0)
    goto check_waiters;
  } else {
   if (VAR_13 & VAR_7) {
    VAR_13 &= ~(VAR_7);
   } else {
    if (VAR_13 & VAR_6)
     VAR_13 &= ~(VAR_6);
    else
     FUNC_9("Releasing non-exclusive RW lock without a reader refcount!");
   }
   if (!VAR_15) {

    FUNC_0(VAR_12->lck_rw_owner == FUNC_5(), "state=0x%x, owner=%p", VAR_12->lck_rw_data, VAR_12->lck_rw_owner);
    FUNC_8(VAR_12, VAR_9);
    VAR_15 = VAR_10;
   }
check_waiters:







   if (VAR_14 & VAR_8) {
    VAR_13 &= ~(VAR_8);
    if ((VAR_14 & VAR_2) == 0)
     VAR_13 &= ~(VAR_3);
   } else
    VAR_13 &= ~(VAR_3);
  }
  if (FUNC_3(&VAR_12->lck_rw_data, VAR_14, VAR_13, VAR_11))
   break;
  FUNC_4();
 }
 return FUNC_6(VAR_12, VAR_14);
}
