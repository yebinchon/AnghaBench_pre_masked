
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* callCombine ) (int *,int *) ;} ;
struct TYPE_5__ {int * coords; } ;
typedef TYPE_1__ TESSvertex ;
typedef TYPE_2__ TESStesselator ;
typedef int TESSreal ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1( TESStesselator *VAR_0, TESSvertex *VAR_1,
      TESSreal VAR_2[4], int VAR_3 )
{
 TESSreal VAR_4[3];


 VAR_4[0] = VAR_1->coords[0];
 VAR_4[1] = VAR_1->coords[1];
 VAR_4[2] = VAR_1->coords[2];

 (*VAR_0->callCombine)( VAR_4, VAR_2 );
}
