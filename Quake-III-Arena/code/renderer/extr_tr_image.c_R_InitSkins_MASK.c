
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int numSurfaces; int shader; struct TYPE_6__** surfaces; int name; } ;
typedef TYPE_1__ skin_t ;
struct TYPE_8__ {TYPE_1__* (* Hunk_Alloc ) (int,int ) ;} ;
struct TYPE_7__ {int numSkins; int defaultShader; TYPE_1__** skins; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 TYPE_1__* FUNC_1 (int,int ) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 TYPE_2__ VAR_2 ;

void FUNC_3( void ) {
 skin_t *VAR_3;

 VAR_2.numSkins = 1;


 VAR_3 = VAR_2.skins[0] = VAR_1.Hunk_Alloc( sizeof( skin_t ), VAR_0 );
 FUNC_0( VAR_3->name, "<default skin>", sizeof( VAR_3->name ) );
 VAR_3->numSurfaces = 1;
 VAR_3->surfaces[0] = VAR_1.Hunk_Alloc( sizeof( *VAR_3->surfaces ), VAR_0 );
 VAR_3->surfaces[0]->shader = VAR_2.defaultShader;
}
