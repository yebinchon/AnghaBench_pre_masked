
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ lck_rw_owner; int lck_rw_data; } ;
typedef TYPE_1__ lck_rw_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,int ,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int*,int ) ;
 scalar_t__ FUNC_3 (int *,int,int,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 void FUNC_7 (TYPE_1__*,int) ;
 int VAR_7 ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (char*,TYPE_1__*,int) ;

void FUNC_10(lck_rw_t *VAR_8)
{
 uint32_t VAR_9, VAR_10;

 FUNC_0(VAR_8->lck_rw_owner == FUNC_5(), "state=0x%x, owner=%p", VAR_8->lck_rw_data, VAR_8->lck_rw_owner);
 FUNC_8(VAR_8, VAR_6);
 for ( ; ; ) {
  VAR_9 = FUNC_2(&VAR_8->lck_rw_data, &VAR_10, VAR_7);
  if (VAR_9 & VAR_0) {





   FUNC_9("lck_rw_lock_exclusive_to_shared(): Interlock locked (%p): %x", VAR_8, VAR_9);

  }
  VAR_9 += VAR_2;
  if (VAR_9 & VAR_4)
   VAR_9 &= ~(VAR_4);
  else
   VAR_9 &= ~(VAR_3);
  if (!((VAR_10 & VAR_5) && (VAR_10 & VAR_1)))
   VAR_9 &= ~(VAR_5);
  if (FUNC_3(&VAR_8->lck_rw_data, VAR_10, VAR_9, VAR_7))
   break;
  FUNC_4();
 }
 return FUNC_7(VAR_8, VAR_10);
}
