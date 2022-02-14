
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int data; } ;
typedef TYPE_1__ lck_rw_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int*,int ) ;
 scalar_t__ FUNC_3 (int *,int,int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_7 ;

boolean_t
FUNC_8(lck_rw_t *VAR_8)
{
 uint32_t VAR_9, VAR_10;

 for ( ; ; ) {
  VAR_9 = FUNC_2(&VAR_8->data, &VAR_10, VAR_7);
  if (VAR_9 & VAR_0) {
   FUNC_1();
   FUNC_5(VAR_8);
   continue;
  }
  if (VAR_9 & VAR_3) {
   VAR_9 -= VAR_2;
   if ((VAR_9 & VAR_1) == 0)
    VAR_9 &= ~(VAR_4);
   if (FUNC_3(&VAR_8->data, VAR_10, VAR_9, VAR_7))
    return FUNC_6(VAR_8, VAR_10);
  } else {
   VAR_9 |= VAR_3;
   VAR_9 -= VAR_2;
   if (FUNC_3(&VAR_8->data, VAR_10, VAR_9, VAR_7))
    break;
  }
  FUNC_4();
 }

 if (VAR_9 & VAR_1)
  FUNC_7(VAR_8);



 return VAR_6;
}
