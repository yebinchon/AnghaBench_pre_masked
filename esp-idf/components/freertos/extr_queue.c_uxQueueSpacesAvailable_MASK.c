
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UBaseType_t ;
struct TYPE_3__ {int mux; scalar_t__ uxMessagesWaiting; scalar_t__ uxLength; } ;
typedef TYPE_1__ Queue_t ;
typedef scalar_t__ QueueHandle_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

UBaseType_t FUNC_3( const QueueHandle_t VAR_0 )
{
UBaseType_t VAR_1;
Queue_t *VAR_2;

 VAR_2 = ( Queue_t * ) VAR_0;
 FUNC_0( VAR_2 );

 FUNC_1(&VAR_2->mux);
 {
  VAR_1 = VAR_2->uxLength - VAR_2->uxMessagesWaiting;
 }
 FUNC_2(&VAR_2->mux);

 return VAR_1;
}
