
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UBaseType_t ;
struct TYPE_3__ {scalar_t__ uxPriority; } ;
typedef TYPE_1__ TCB_t ;
typedef size_t BaseType_t ;


 size_t VAR_0 ;
 TYPE_1__** VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (size_t) ;
 size_t FUNC_1 () ;

void FUNC_2( BaseType_t VAR_3, UBaseType_t VAR_4 )
{
 TCB_t *VAR_5 = VAR_1[VAR_3];
 BaseType_t VAR_6;

 if (VAR_3 != VAR_2) {
  if ( VAR_5->uxPriority < VAR_4 ) {
   FUNC_0( VAR_3 );
  }
 }
 else
 {

  for (VAR_6=0; VAR_6<VAR_0; VAR_6++) {
   if (VAR_6 != FUNC_1() && VAR_1[ VAR_6 ]->uxPriority < VAR_4)
   {
    FUNC_0( VAR_6 );
    break;
   }
  }
 }
}
