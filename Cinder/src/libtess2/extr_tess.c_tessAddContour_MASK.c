
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int winding; } ;
struct TYPE_11__ {int winding; TYPE_6__* Sym; TYPE_1__* Org; struct TYPE_11__* Lnext; } ;
struct TYPE_10__ {int outOfMemory; int * mesh; int alloc; } ;
struct TYPE_9__ {int * coords; } ;
typedef TYPE_2__ TESStesselator ;
typedef int TESSreal ;
typedef TYPE_3__ TESShalfEdge ;


 TYPE_3__* FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_3__*,TYPE_6__*) ;
 int * FUNC_3 (int *,TYPE_3__*) ;

void FUNC_4( TESStesselator *VAR_0, int VAR_1, const void* VAR_2,
     int VAR_3, int VAR_4 )
{
 const unsigned char *VAR_5 = (const unsigned char*)VAR_2;
 TESShalfEdge *VAR_6;
 int VAR_7;

 if ( VAR_0->mesh == ((void*)0) )
    VAR_0->mesh = FUNC_1( &VAR_0->alloc );
  if ( VAR_0->mesh == ((void*)0) ) {
  VAR_0->outOfMemory = 1;
  return;
 }

 if ( VAR_1 < 2 )
  VAR_1 = 2;
 if ( VAR_1 > 3 )
  VAR_1 = 3;

 VAR_6 = ((void*)0);

 for( VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7 )
 {
  const TESSreal* VAR_8 = (const TESSreal*)VAR_5;
  VAR_5 += VAR_3;

  if( VAR_6 == ((void*)0) ) {

   VAR_6 = FUNC_0( VAR_0->mesh );
   if ( VAR_6 == ((void*)0) ) {
    VAR_0->outOfMemory = 1;
    return;
   }
   if ( !FUNC_2( VAR_0->mesh, VAR_6, VAR_6->Sym ) ) {
    VAR_0->outOfMemory = 1;
    return;
   }
  } else {



   if ( FUNC_3( VAR_0->mesh, VAR_6 ) == ((void*)0) ) {
    VAR_0->outOfMemory = 1;
    return;
   }
   VAR_6 = VAR_6->Lnext;
  }


  VAR_6->Org->coords[0] = VAR_8[0];
  VAR_6->Org->coords[1] = VAR_8[1];
  if ( VAR_1 > 2 )
   VAR_6->Org->coords[2] = VAR_8[2];
  else
   VAR_6->Org->coords[2] = 0;






  VAR_6->winding = 1;
  VAR_6->Sym->winding = -1;
 }
}
