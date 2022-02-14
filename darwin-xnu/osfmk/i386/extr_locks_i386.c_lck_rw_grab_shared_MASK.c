
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int data; } ;
typedef TYPE_1__ lck_rw_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int*,int ) ;
 int FUNC_2 (int *,int,int,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_7 ;

__attribute__((used)) static boolean_t
FUNC_4(lck_rw_t *VAR_8)
{
 uint32_t VAR_9, VAR_10;

 for ( ; ; ) {
  VAR_9 = FUNC_1(&VAR_8->data, &VAR_10, VAR_7);
  if ((VAR_9 & VAR_1) == 0)
   break;
  FUNC_0();
  FUNC_3(VAR_8);
 }
 if (VAR_9 & (VAR_6 | VAR_5)) {
  if (((VAR_9 & VAR_3) == 0) || (VAR_9 & VAR_2)) {
   FUNC_0();
   return VAR_0;
  }
 }
 VAR_9 += VAR_4;
 return FUNC_2(&VAR_8->data, VAR_10, VAR_9, VAR_7);
}
