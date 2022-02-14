
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UBaseType_t ;
struct TYPE_4__ {scalar_t__ pcReadFrom; } ;
struct TYPE_5__ {int uxLength; int uxItemSize; int uxMessagesWaiting; int mux; int xTasksWaitingToReceive; int xTasksWaitingToSend; scalar_t__ pcHead; TYPE_1__ u; scalar_t__ pcWriteTo; scalar_t__ pcTail; } ;
typedef TYPE_2__ Queue_t ;
typedef scalar_t__ QueueHandle_t ;
typedef scalar_t__ BaseType_t ;


 int FUNC_0 (TYPE_2__* const) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

BaseType_t FUNC_9( QueueHandle_t VAR_3, BaseType_t VAR_4 )
{
Queue_t * const VAR_5 = ( Queue_t * ) VAR_3;

 FUNC_0( VAR_5 );

 if ( VAR_4 == VAR_2 )
 {
  FUNC_7(&VAR_5->mux);
 }
 FUNC_4(&VAR_5->mux);
 {
  VAR_5->pcTail = VAR_5->pcHead + ( VAR_5->uxLength * VAR_5->uxItemSize );
  VAR_5->uxMessagesWaiting = ( UBaseType_t ) 0U;
  VAR_5->pcWriteTo = VAR_5->pcHead;
  VAR_5->u.pcReadFrom = VAR_5->pcHead + ( ( VAR_5->uxLength - ( UBaseType_t ) 1U ) * VAR_5->uxItemSize );

  if( VAR_4 == VAR_0 )
  {





   if( FUNC_1( &( VAR_5->xTasksWaitingToSend ) ) == VAR_0 )
   {
    if( FUNC_8( &( VAR_5->xTasksWaitingToSend ) ) == VAR_2 )
    {
     FUNC_3();
    }
    else
    {
     FUNC_2();
    }
   }
   else
   {
    FUNC_2();
   }
  }
  else
  {

   FUNC_6( &( VAR_5->xTasksWaitingToSend ) );
   FUNC_6( &( VAR_5->xTasksWaitingToReceive ) );
  }
 }
 FUNC_5(&VAR_5->mux);



 return VAR_1;
}
