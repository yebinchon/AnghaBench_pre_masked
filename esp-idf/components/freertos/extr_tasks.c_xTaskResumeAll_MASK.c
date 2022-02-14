
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UBaseType_t ;
struct TYPE_5__ {scalar_t__ uxPriority; } ;
struct TYPE_4__ {scalar_t__ uxPriority; int xCoreID; int xGenericListItem; int xEventListItem; } ;
typedef TYPE_1__ TCB_t ;
typedef scalar_t__ BaseType_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_2__** VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__* VAR_6 ;
 int * VAR_7 ;
 size_t FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 int VAR_8 ;
 scalar_t__* VAR_9 ;

BaseType_t FUNC_13( void )
{
TCB_t *VAR_10;
BaseType_t VAR_11 = VAR_0;



 FUNC_0( FUNC_11() != VAR_3 );






 FUNC_5(&VAR_8);
 {
  --VAR_6[ FUNC_10() ];

  if( VAR_6[ FUNC_10() ] == ( UBaseType_t ) VAR_0 )
  {
   if( VAR_4 > ( UBaseType_t ) 0U )
   {


    while( FUNC_2( &VAR_7[ FUNC_10() ] ) == VAR_0 )
    {
     VAR_10 = ( TCB_t * ) FUNC_1( ( &VAR_7[ FUNC_10() ] ) );
     ( void ) FUNC_9( &( VAR_10->xEventListItem ) );
     ( void ) FUNC_9( &( VAR_10->xGenericListItem ) );
     FUNC_4( VAR_10 );



     if ( FUNC_8(VAR_10->xCoreID) && VAR_10->uxPriority >= VAR_2[ FUNC_10() ]->uxPriority )
     {

      VAR_9[FUNC_10()] = VAR_1;
     }
     else
     {
      FUNC_3();
     }
    }





    if( VAR_5 > ( UBaseType_t ) 0U )
    {
     while( VAR_5 > ( UBaseType_t ) 0U )
     {
      if( FUNC_12() != VAR_0 )
      {
       VAR_9[ FUNC_10() ] = VAR_1;
      }
      else
      {
       FUNC_3();
      }
      --VAR_5;
     }
    }
    else
    {
     FUNC_3();
    }

    if( VAR_9[ FUNC_10() ] == VAR_1 )
    {





     FUNC_7();
    }
    else
    {
     FUNC_3();
    }
   }
  }
  else
  {
   FUNC_3();
  }
 }
 FUNC_6(&VAR_8);

 return VAR_11;
}
