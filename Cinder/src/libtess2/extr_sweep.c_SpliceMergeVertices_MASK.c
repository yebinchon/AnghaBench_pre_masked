
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int Org; } ;
struct TYPE_9__ {int env; int mesh; } ;
typedef TYPE_1__ TESStesselator ;
typedef double TESSreal ;
typedef TYPE_2__ TESShalfEdge ;


 int FUNC_0 (TYPE_1__*,int ,double*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3( TESStesselator *VAR_1, TESShalfEdge *VAR_2,
        TESShalfEdge *VAR_3 )




{
 TESSreal VAR_4[4] = { 0.5, 0.5, 0.0, 0.0 };

 FUNC_0( VAR_1, VAR_2->Org, VAR_4, VAR_0 );
 if ( !FUNC_2( VAR_1->mesh, VAR_2, VAR_3 ) ) FUNC_1(VAR_1->env,1);
}
