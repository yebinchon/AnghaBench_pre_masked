
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UBaseType_t ;
struct TYPE_2__ {scalar_t__ uxMessagesWaiting; int mux; } ;
typedef TYPE_1__ Queue_t ;
typedef scalar_t__ QueueHandle_t ;
typedef int BaseType_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

BaseType_t FUNC_3( QueueHandle_t VAR_2 )
{
BaseType_t VAR_3;
Queue_t * const VAR_4 = ( Queue_t * ) VAR_2;

 FUNC_0( VAR_2 );
 FUNC_1(&VAR_4->mux);
 if( ( ( Queue_t * ) VAR_2 )->uxMessagesWaiting == ( UBaseType_t ) 0 )
 {
  VAR_3 = VAR_1;
 }
 else
 {
  VAR_3 = VAR_0;
 }
 FUNC_2(&VAR_4->mux);

 return VAR_3;
}
