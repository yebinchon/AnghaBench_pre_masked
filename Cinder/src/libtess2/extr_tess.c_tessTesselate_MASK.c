
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int userData; int (* memfree ) (int ,int *) ;} ;
struct TYPE_8__ {int windingRule; scalar_t__ outOfMemory; int * mesh; TYPE_4__ alloc; int env; int * normal; int * elements; int * vertices; } ;
typedef TYPE_1__ TESStesselator ;
typedef int TESSreal ;
typedef int TESSmesh ;


 int FUNC_0 (TYPE_1__*,int *,int) ;
 int FUNC_1 (TYPE_1__*,int *,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*,int *) ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*) ;

int FUNC_12( TESStesselator *VAR_2, int VAR_3, int VAR_4,
      int VAR_5, int VAR_6, const TESSreal* VAR_7 )
{
 TESSmesh *VAR_8;
 int VAR_9 = 1;

 if (VAR_2->vertices != ((void*)0)) {
  VAR_2->alloc.memfree( VAR_2->alloc.userData, VAR_2->vertices );
  VAR_2->vertices = 0;
 }
 if (VAR_2->elements != ((void*)0)) {
  VAR_2->alloc.memfree( VAR_2->alloc.userData, VAR_2->elements );
  VAR_2->elements = 0;
 }

 if (VAR_7)
 {
  VAR_2->normal[0] = VAR_7[0];
  VAR_2->normal[1] = VAR_7[1];
  VAR_2->normal[2] = VAR_7[2];
 }

 VAR_2->windingRule = VAR_3;

 if (VAR_6 < 2)
  VAR_6 = 2;
 if (VAR_6 > 3)
  VAR_6 = 3;

 if (FUNC_3(VAR_2->env) != 0) {

  return 0;
 }

 if (!VAR_2->mesh)
 {
  return 0;
 }




 FUNC_11( VAR_2 );







 if ( !FUNC_6( VAR_2 ) ) {
  FUNC_2(VAR_2->env,1);
 }

 VAR_8 = VAR_2->mesh;





 if (VAR_4 == VAR_0) {
  VAR_9 = FUNC_9( VAR_8, 1, VAR_1 );
 } else {
  VAR_9 = FUNC_10( VAR_8 );
 }
 if (VAR_9 == 0) FUNC_2(VAR_2->env,1);

 FUNC_7( VAR_8 );

 if (VAR_4 == VAR_0) {
  FUNC_0( VAR_2, VAR_8, VAR_6 );
 }
 else
 {
  FUNC_1( VAR_2, VAR_8, VAR_4, VAR_5, VAR_6 );
 }

 FUNC_8( &VAR_2->alloc, VAR_8 );
 VAR_2->mesh = ((void*)0);

 if (VAR_2->outOfMemory)
  return 0;
 return 1;
}
