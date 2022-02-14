
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UBaseType_t ;
typedef scalar_t__ TickType_t ;
struct TYPE_2__ {int xGenericListItem; int uxPriority; int xEventListItem; } ;
typedef int List_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__ const) ;
 int FUNC_2 () ;
 scalar_t__ const VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__,...) ;
 TYPE_1__** VAR_1 ;
 int FUNC_5 (int *) ;
 scalar_t__ const VAR_2 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int *,int *) ;
 size_t FUNC_9 () ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ const VAR_7 ;

void FUNC_10( List_t * VAR_8, const TickType_t VAR_9, const TickType_t VAR_10 )
{
TickType_t VAR_11;

 FUNC_0( *VAR_8 );

 FUNC_5(&VAR_6);



 FUNC_0( VAR_3[ FUNC_9() ] != 0 );




 FUNC_1( &( VAR_1[ FUNC_9() ]->xEventListItem ), VAR_9 | VAR_2 );






 FUNC_8( VAR_8, &( VAR_1[ FUNC_9() ]->xEventListItem ) );




 if( FUNC_7( &( VAR_1[ FUNC_9() ]->xGenericListItem ) ) == ( UBaseType_t ) 0 )
 {


  FUNC_3( VAR_1[ FUNC_9() ]->uxPriority, VAR_4 );
 }
 else
 {
  FUNC_2();
 }
 {



   VAR_11 = VAR_7 + VAR_10;
   FUNC_4( VAR_11 );
 }


 FUNC_6(&VAR_6);
}
