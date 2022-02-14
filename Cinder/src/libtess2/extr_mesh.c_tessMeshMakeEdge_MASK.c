
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* Sym; } ;
struct TYPE_9__ {int fHead; int vHead; int eHead; int faceBucket; int vertexBucket; } ;
typedef int TESSvertex ;
typedef TYPE_1__ TESSmesh ;
typedef TYPE_2__ TESShalfEdge ;
typedef int TESSface ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *,TYPE_2__*,int *) ;
 int FUNC_2 (int *,TYPE_2__*,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

TESShalfEdge *FUNC_5( TESSmesh *VAR_0 )
{
 TESSvertex *VAR_1 = (TESSvertex*)FUNC_3(VAR_0->vertexBucket);
 TESSvertex *VAR_2 = (TESSvertex*)FUNC_3(VAR_0->vertexBucket);
 TESSface *VAR_3 = (TESSface*)FUNC_3(VAR_0->faceBucket);
 TESShalfEdge *VAR_4;


 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
  if (VAR_1 != ((void*)0)) FUNC_4( VAR_0->vertexBucket, VAR_1 );
  if (VAR_2 != ((void*)0)) FUNC_4( VAR_0->vertexBucket, VAR_2 );
  if (VAR_3 != ((void*)0)) FUNC_4( VAR_0->faceBucket, VAR_3 );
  return ((void*)0);
 }

 VAR_4 = FUNC_0( VAR_0, &VAR_0->eHead );
 if (VAR_4 == ((void*)0)) return ((void*)0);

 FUNC_2( VAR_1, VAR_4, &VAR_0->vHead );
 FUNC_2( VAR_2, VAR_4->Sym, &VAR_0->vHead );
 FUNC_1( VAR_3, VAR_4, &VAR_0->fHead );
 return VAR_4;
}
