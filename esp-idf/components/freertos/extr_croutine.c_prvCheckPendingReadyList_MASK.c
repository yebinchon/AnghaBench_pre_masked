
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xGenericListItem; int xEventListItem; } ;
typedef TYPE_1__ CRCB_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6( void )
{



 while( FUNC_1( &VAR_1 ) == VAR_0 )
 {
  CRCB_t *VAR_2;


  FUNC_2();
  {
   VAR_2 = ( CRCB_t * ) FUNC_0( (&VAR_1) );
   ( void ) FUNC_5( &( VAR_2->xEventListItem ) );
  }
  FUNC_3();

  ( void ) FUNC_5( &( VAR_2->xGenericListItem ) );
  FUNC_4( VAR_2 );
 }
}
