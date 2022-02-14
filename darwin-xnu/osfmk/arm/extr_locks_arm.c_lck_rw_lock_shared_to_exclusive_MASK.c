
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ thread_t ;
struct TYPE_10__ {int lck_rw_data; } ;
typedef TYPE_1__ lck_rw_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,char*,int ,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int*,int ) ;
 scalar_t__ FUNC_4 (int *,int,int,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_8 ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int ) ;

boolean_t
FUNC_13(lck_rw_t *VAR_9)
{
 uint32_t VAR_10, VAR_11;

 for ( ; ; ) {
  VAR_10 = FUNC_3(&VAR_9->lck_rw_data, &VAR_11, VAR_8);
  if (VAR_10 & VAR_0) {
   FUNC_2();
   FUNC_7(VAR_9);
   continue;
  }
  if (VAR_10 & VAR_3) {
   VAR_10 -= VAR_2;
   if ((VAR_10 & VAR_1) == 0)
    VAR_10 &= ~(VAR_4);
   if (FUNC_4(&VAR_9->lck_rw_data, VAR_11, VAR_10, VAR_8))
    return FUNC_8(VAR_9, VAR_11);
  } else {
   VAR_10 |= VAR_3;
   VAR_10 -= VAR_2;
   if (FUNC_4(&VAR_9->lck_rw_data, VAR_11, VAR_10, VAR_8))
    break;
  }
  FUNC_5();
 }

 if (VAR_10 & VAR_1)
  FUNC_9(VAR_9);




 FUNC_12(VAR_9, FUNC_6());



 return VAR_7;
}
