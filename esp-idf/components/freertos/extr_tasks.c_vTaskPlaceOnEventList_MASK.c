
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UBaseType_t ;
typedef scalar_t__ TickType_t ;
struct TYPE_3__ {int xGenericListItem; int uxPriority; int xEventListItem; } ;
typedef int List_t ;


 int FUNC_0 (int * const) ;
 int FUNC_1 () ;
 scalar_t__ const VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,...) ;
 TYPE_1__** VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_2 ;
 int FUNC_8 (int * const,int *) ;
 int FUNC_9 (int *,int *) ;
 size_t FUNC_10 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ const VAR_5 ;

void FUNC_11( List_t * const VAR_6, const TickType_t VAR_7 )
{
TickType_t VAR_8;

 FUNC_0( VAR_6 );

 FUNC_4(&VAR_4);





 FUNC_8( VAR_6, &( VAR_1[ FUNC_10() ]->xEventListItem ) );




 if( FUNC_7( &( VAR_1[ FUNC_10() ]->xGenericListItem ) ) == ( UBaseType_t ) 0 )
 {


  FUNC_2( VAR_1[ FUNC_10() ]->uxPriority, VAR_2 );
 }
 else
 {
  FUNC_1();
 }
 {



   VAR_8 = VAR_5 + VAR_7;
   FUNC_3( VAR_8 );
 }


 FUNC_5(&VAR_4);

}
