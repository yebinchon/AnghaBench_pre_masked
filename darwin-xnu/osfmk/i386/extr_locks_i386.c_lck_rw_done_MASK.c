
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int lck_rw_type_t ;
struct TYPE_5__ {int data; } ;
typedef TYPE_1__ lck_rw_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int*,int ) ;
 scalar_t__ FUNC_2 (int *,int,int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_9 ;
 int FUNC_6 (char*) ;

lck_rw_type_t FUNC_7(lck_rw_t *VAR_10)
{
 uint32_t VAR_11, VAR_12;

 for ( ; ; ) {
  VAR_11 = FUNC_1(&VAR_10->data, &VAR_12, VAR_9);
  if (VAR_11 & VAR_0) {
   FUNC_0();
   FUNC_5(VAR_10);
   continue;
  }
  if (VAR_11 & VAR_3) {
   VAR_11 -= VAR_4;
   if ((VAR_11 & VAR_3) == 0)
    goto check_waiters;
  } else {
   if (VAR_11 & VAR_6) {
    VAR_11 &= ~(VAR_6);
   } else {
    if (VAR_11 & VAR_7)
     VAR_11 &= ~(VAR_5);
    else
     FUNC_6("Releasing non-exclusive RW lock without a reader refcount!");
   }
check_waiters:
   if (VAR_12 & VAR_8) {
    VAR_11 &= ~(VAR_8);
    if ((VAR_12 & VAR_1) == 0)
     VAR_11 &= ~(VAR_2);
   } else
    VAR_11 &= ~(VAR_2);
  }
  if (FUNC_2(&VAR_10->data, VAR_12, VAR_11, VAR_9))
   break;
  FUNC_3();
 }
 return FUNC_4(VAR_10, VAR_12);
}
