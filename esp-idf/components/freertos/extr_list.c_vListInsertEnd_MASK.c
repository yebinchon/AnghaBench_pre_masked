
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {void* pvContainer; struct TYPE_8__* pxPrevious; struct TYPE_8__* pxNext; } ;
struct TYPE_7__ {int uxNumberOfItems; TYPE_2__* pxIndex; } ;
typedef TYPE_1__ List_t ;
typedef TYPE_2__ ListItem_t ;


 int FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (TYPE_2__* const) ;

void FUNC_2( List_t * const VAR_0, ListItem_t * const VAR_1 )
{
ListItem_t * const VAR_2 = VAR_0->pxIndex;




 FUNC_0( VAR_0 );
 FUNC_1( VAR_1 );




 VAR_1->pxNext = VAR_2;
 VAR_1->pxPrevious = VAR_2->pxPrevious;
 VAR_2->pxPrevious->pxNext = VAR_1;
 VAR_2->pxPrevious = VAR_1;


 VAR_1->pvContainer = ( void * ) VAR_0;

 ( VAR_0->uxNumberOfItems )++;
}
