
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
 int FUNC_0 () ;
 int FUNC_1 (int *,int*,int ) ;
 int FUNC_2 (int *,int,int,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static boolean_t
FUNC_4(lck_rw_t *VAR_4)
{
 uint32_t VAR_5, VAR_6;

 for ( ; ; ) {
  VAR_5 = FUNC_1(&VAR_4->data, &VAR_6, VAR_3);
  if ((VAR_5 & VAR_1) == 0)
   break;
  FUNC_0();
  FUNC_3(VAR_4);
 }
 if (VAR_5 & VAR_2) {
  FUNC_0();
  return VAR_0;
 }
 VAR_5 |= VAR_2;
 return FUNC_2(&VAR_4->data, VAR_6, VAR_5, VAR_3);
}
