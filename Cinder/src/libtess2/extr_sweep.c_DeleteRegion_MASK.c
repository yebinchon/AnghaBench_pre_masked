
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int nodeUp; TYPE_1__* eUp; scalar_t__ fixUpperEdge; } ;
struct TYPE_8__ {int regionPool; int dict; } ;
struct TYPE_7__ {scalar_t__ winding; int * activeRegion; } ;
typedef TYPE_2__ TESStesselator ;
typedef TYPE_3__ ActiveRegion ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3( TESStesselator *VAR_0, ActiveRegion *VAR_1 )
{
 if( VAR_1->fixUpperEdge ) {




  FUNC_0( VAR_1->eUp->winding == 0 );
 }
 VAR_1->eUp->activeRegion = ((void*)0);
 FUNC_2( VAR_0->dict, VAR_1->nodeUp );
 FUNC_1( VAR_0->regionPool, VAR_1 );
}
