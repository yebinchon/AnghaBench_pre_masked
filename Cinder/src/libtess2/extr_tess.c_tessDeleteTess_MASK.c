
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TESSalloc {int userData; int (* memfree ) (int ,TYPE_1__*) ;} ;
struct TYPE_6__ {struct TYPE_6__* elements; struct TYPE_6__* vertices; int * mesh; int regionPool; struct TESSalloc alloc; } ;
typedef TYPE_1__ TESStesselator ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (struct TESSalloc*,int *) ;

void FUNC_5( TESStesselator *VAR_0 )
{

 struct TESSalloc VAR_1 = VAR_0->alloc;

 FUNC_0( VAR_0->regionPool );

 if( VAR_0->mesh != ((void*)0) ) {
  FUNC_4( &VAR_1, VAR_0->mesh );
  VAR_0->mesh = ((void*)0);
 }
 if (VAR_0->vertices != ((void*)0)) {
  VAR_1.memfree( VAR_1.userData, VAR_0->vertices );
  VAR_0->vertices = 0;
 }
 if (VAR_0->elements != ((void*)0)) {
  VAR_1.memfree( VAR_1.userData, VAR_0->elements );
  VAR_0->elements = 0;
 }

 VAR_1.memfree( VAR_1.userData, VAR_0 );
}
