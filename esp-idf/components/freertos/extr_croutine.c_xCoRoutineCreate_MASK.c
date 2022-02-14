
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int crCOROUTINE_CODE ;
typedef scalar_t__ UBaseType_t ;
typedef scalar_t__ TickType_t ;
struct TYPE_5__ {int xEventListItem; int xGenericListItem; int pxCoRoutineFunction; scalar_t__ uxIndex; scalar_t__ uxPriority; int uxState; } ;
typedef TYPE_1__ CRCB_t ;
typedef int BaseType_t ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_6 (int *) ;

BaseType_t FUNC_7( crCOROUTINE_CODE VAR_5, UBaseType_t VAR_6, UBaseType_t VAR_7 )
{
BaseType_t VAR_8;
CRCB_t *VAR_9;

 FUNC_0();

 VAR_9 = ( CRCB_t * ) FUNC_5( sizeof( CRCB_t ) );
 if( VAR_9 )
 {


  if( VAR_4 == ((void*)0) )
  {
   VAR_4 = VAR_9;
   FUNC_4();
  }


  if( VAR_6 >= VAR_0 )
  {
   VAR_6 = VAR_0 - 1;
  }


  VAR_9->uxState = VAR_1;
  VAR_9->uxPriority = VAR_6;
  VAR_9->uxIndex = VAR_7;
  VAR_9->pxCoRoutineFunction = VAR_5;


  FUNC_6( &( VAR_9->xGenericListItem ) );
  FUNC_6( &( VAR_9->xEventListItem ) );




  FUNC_1( &( VAR_9->xGenericListItem ), VAR_9 );
  FUNC_1( &( VAR_9->xEventListItem ), VAR_9 );


  FUNC_2( &( VAR_9->xEventListItem ), ( ( TickType_t ) VAR_0 - ( TickType_t ) VAR_6 ) );



  FUNC_3( VAR_9 );

  VAR_8 = VAR_3;
 }
 else
 {
  VAR_8 = VAR_2;
 }

 return VAR_8;
}
