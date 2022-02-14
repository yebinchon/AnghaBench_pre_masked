
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UBaseType_t ;
struct TYPE_6__ {int * pxPrevious; int * pxNext; int xItemValue; } ;
struct TYPE_7__ {scalar_t__ uxNumberOfItems; TYPE_1__ xListEnd; int * pxIndex; } ;
typedef TYPE_2__ List_t ;
typedef int ListItem_t ;


 int FUNC_0 (TYPE_2__* const) ;
 int FUNC_1 (TYPE_2__* const) ;
 int VAR_0 ;

void FUNC_2( List_t * const VAR_1 )
{



 VAR_1->pxIndex = ( ListItem_t * ) &( VAR_1->xListEnd );



 VAR_1->xListEnd.xItemValue = VAR_0;



 VAR_1->xListEnd.pxNext = ( ListItem_t * ) &( VAR_1->xListEnd );
 VAR_1->xListEnd.pxPrevious = ( ListItem_t * ) &( VAR_1->xListEnd );

 VAR_1->uxNumberOfItems = ( UBaseType_t ) 0U;



 FUNC_0( VAR_1 );
 FUNC_1( VAR_1 );
}
