
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pvContainer; } ;
struct TYPE_5__ {TYPE_2__ xEventListItem; TYPE_2__ xGenericListItem; } ;
typedef int List_t ;
typedef TYPE_1__ CRCB_t ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static void FUNC_8( void )
{
CRCB_t *VAR_6;

 VAR_5 = FUNC_7() - VAR_4;
 while( VAR_5 )
 {
  VAR_3++;
  VAR_5--;


  if( VAR_3 == 0 )
  {
   List_t * VAR_7;



   VAR_7 = VAR_1;
   VAR_1 = VAR_2;
   VAR_2 = VAR_7;
  }


  while( FUNC_2( VAR_1 ) == VAR_0 )
  {
   VAR_6 = ( CRCB_t * ) FUNC_1( VAR_1 );

   if( VAR_3 < FUNC_0( &( VAR_6->xGenericListItem ) ) )
   {

    break;
   }

   FUNC_3();
   {





    ( void ) FUNC_6( &( VAR_6->xGenericListItem ) );


    if( VAR_6->xEventListItem.pvContainer )
    {
     ( void ) FUNC_6( &( VAR_6->xEventListItem ) );
    }
   }
   FUNC_4();

   FUNC_5( VAR_6 );
  }
 }

 VAR_4 = VAR_3;
}
