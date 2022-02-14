
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;


struct TYPE_21__ {TYPE_2__* anEdge; } ;
struct TYPE_20__ {TYPE_11__* Lface; TYPE_9__* Org; } ;
struct TYPE_19__ {int faceBucket; int vertexBucket; } ;
struct TYPE_18__ {TYPE_2__* anEdge; } ;
typedef int TESSvertex ;
typedef TYPE_1__ TESSmesh ;
typedef TYPE_2__ TESShalfEdge ;
typedef int TESSface ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_11__*,TYPE_11__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_9__*,TYPE_9__*) ;
 int FUNC_2 (int *,TYPE_2__*,TYPE_11__*) ;
 int FUNC_3 (int *,TYPE_2__*,TYPE_9__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ) ;

int FUNC_6( TESSmesh* VAR_2, TESShalfEdge *VAR_3, TESShalfEdge *VAR_4 )
{
 int VAR_5 = VAR_0;
 int VAR_6 = VAR_0;

 if( VAR_3 == VAR_4 ) return 1;

 if( VAR_4->Org != VAR_3->Org ) {

  VAR_6 = VAR_1;
  FUNC_1( VAR_2, VAR_4->Org, VAR_3->Org );
 }
 if( VAR_4->Lface != VAR_3->Lface ) {

  VAR_5 = VAR_1;
  FUNC_0( VAR_2, VAR_4->Lface, VAR_3->Lface );
 }


 FUNC_4( VAR_4, VAR_3 );

 if( ! VAR_6 ) {
  TESSvertex *VAR_7 = (TESSvertex*)FUNC_5( VAR_2->vertexBucket );
  if (VAR_7 == ((void*)0)) return 0;




  FUNC_3( VAR_7, VAR_4, VAR_3->Org );
  VAR_3->Org->anEdge = VAR_3;
 }
 if( ! VAR_5 ) {
  TESSface *VAR_8 = (TESSface*)FUNC_5( VAR_2->faceBucket );
  if (VAR_8 == ((void*)0)) return 0;




  FUNC_2( VAR_8, VAR_4, VAR_3->Lface );
  VAR_3->Lface->anEdge = VAR_3;
 }

 return 1;
}
