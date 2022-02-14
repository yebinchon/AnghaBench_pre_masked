
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ TickType_t ;
struct TYPE_2__ {int xEventListItem; int xGenericListItem; } ;
typedef int List_t ;
typedef int ListItem_t ;


 int FUNC_0 (int *,scalar_t__) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ VAR_3 ;

void FUNC_3( TickType_t VAR_4, List_t *VAR_5 )
{
TickType_t VAR_6;



 VAR_6 = VAR_3 + VAR_4;




 ( void ) FUNC_1( ( ListItem_t * ) &( VAR_0->xGenericListItem ) );


 FUNC_0( &( VAR_0->xGenericListItem ), VAR_6 );

 if( VAR_6 < VAR_3 )
 {


  FUNC_2( ( List_t * ) VAR_2, ( ListItem_t * ) &( VAR_0->xGenericListItem ) );
 }
 else
 {


  FUNC_2( ( List_t * ) VAR_1, ( ListItem_t * ) &( VAR_0->xGenericListItem ) );
 }

 if( VAR_5 )
 {


  FUNC_2( VAR_5, &( VAR_0->xEventListItem ) );
 }
}
