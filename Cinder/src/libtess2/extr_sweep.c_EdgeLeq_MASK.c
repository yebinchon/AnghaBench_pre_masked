
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* eUp; } ;
struct TYPE_8__ {int * Org; int * Dst; } ;
struct TYPE_7__ {int * event; } ;
typedef int TESSvertex ;
typedef TYPE_1__ TESStesselator ;
typedef scalar_t__ TESSreal ;
typedef TYPE_2__ TESShalfEdge ;
typedef TYPE_3__ ActiveRegion ;


 scalar_t__ FUNC_0 (int *,int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3( TESStesselator *VAR_0, ActiveRegion *VAR_1, ActiveRegion *VAR_2 )
{
 TESSvertex *VAR_3 = VAR_0->event;
 TESShalfEdge *VAR_4, *VAR_5;
 TESSreal VAR_6, VAR_7;

 VAR_4 = VAR_1->eUp;
 VAR_5 = VAR_2->eUp;

 if( VAR_4->Dst == VAR_3 ) {
  if( VAR_5->Dst == VAR_3 ) {



   if( FUNC_2( VAR_4->Org, VAR_5->Org )) {
    return FUNC_1( VAR_5->Dst, VAR_4->Org, VAR_5->Org ) <= 0;
   }
   return FUNC_1( VAR_4->Dst, VAR_5->Org, VAR_4->Org ) >= 0;
  }
  return FUNC_1( VAR_5->Dst, VAR_3, VAR_5->Org ) <= 0;
 }
 if( VAR_5->Dst == VAR_3 ) {
  return FUNC_1( VAR_4->Dst, VAR_3, VAR_4->Org ) >= 0;
 }


 VAR_6 = FUNC_0( VAR_4->Dst, VAR_3, VAR_4->Org );
 VAR_7 = FUNC_0( VAR_5->Dst, VAR_3, VAR_5->Org );
 return (VAR_6 >= VAR_7);
}
