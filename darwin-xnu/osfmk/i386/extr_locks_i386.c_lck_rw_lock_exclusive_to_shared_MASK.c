
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int data; } ;
typedef TYPE_1__ lck_rw_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int*,int ) ;
 scalar_t__ FUNC_2 (int *,int,int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 void FUNC_5 (TYPE_1__*,int) ;
 int VAR_6 ;

void FUNC_6(lck_rw_t *VAR_7)
{
 uint32_t VAR_8, VAR_9;

 for ( ; ; ) {
  VAR_8 = FUNC_1(&VAR_7->data, &VAR_9, VAR_6);
  if (VAR_8 & VAR_0) {
   FUNC_0();
   FUNC_4(VAR_7);
   continue;
  }
  VAR_8 += VAR_2;
  if (VAR_8 & VAR_4)
   VAR_8 &= ~(VAR_4);
  else
   VAR_8 &= ~(VAR_3);
  if (!((VAR_9 & VAR_5) && (VAR_9 & VAR_1)))
   VAR_8 &= ~(VAR_5);
  if (FUNC_2(&VAR_7->data, VAR_9, VAR_8, VAR_6))
   break;
  FUNC_3();
 }
 return FUNC_5(VAR_7, VAR_9);
}
