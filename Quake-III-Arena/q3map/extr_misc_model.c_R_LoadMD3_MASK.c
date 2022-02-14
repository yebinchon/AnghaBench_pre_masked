
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* normal; void** xyz; } ;
typedef TYPE_1__ md3XyzNormal_t ;
struct TYPE_9__ {int* indexes; } ;
typedef TYPE_2__ md3Triangle_t ;
struct TYPE_10__ {int ident; int flags; int numFrames; int numShaders; int numTriangles; int ofsTriangles; int numVerts; int ofsShaders; int ofsSt; int ofsXyzNormals; int ofsEnd; } ;
typedef TYPE_3__ md3Surface_t ;
struct TYPE_11__ {void** st; } ;
typedef TYPE_4__ md3St_t ;
struct TYPE_12__ {int version; int ident; int numFrames; int numTags; int numSurfaces; int numSkins; int ofsFrames; int ofsTags; int ofsSurfaces; int ofsEnd; } ;
typedef TYPE_5__ md3Header_t ;
struct TYPE_13__ {void** localOrigin; void*** bounds; void* radius; } ;
typedef TYPE_6__ md3Frame_t ;
typedef int byte ;


 int FUNC_0 (char*,char const*,int,int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (void*) ;
 int VAR_0 ;
 int FUNC_5 (char*,void**) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (char*,void**) ;
 int FUNC_7 (char*,char const*,...) ;
 char* VAR_3 ;
 int FUNC_8 (char*,char*,char*,char const*) ;

md3Header_t *FUNC_9( const char *VAR_4 ) {
 int VAR_5, VAR_6;
 md3Header_t *VAR_7;
    md3Frame_t *VAR_8;
 md3Surface_t *VAR_9;
 md3Triangle_t *VAR_10;
 md3St_t *VAR_11;
 md3XyzNormal_t *VAR_12;
 int VAR_13;
 char VAR_14[1024];
 int VAR_15;

 FUNC_8( VAR_14, "%s%s", VAR_3, VAR_4 );
 VAR_15 = FUNC_6( VAR_14, (void **)&VAR_7 );





 if ( VAR_15 <= 0 ) {
   return ((void*)0);
 }

  VAR_13 = FUNC_3 (VAR_7->version);
 if (VAR_13 != VAR_0) {
  FUNC_7( "R_LoadMD3: %s has wrong version (%i should be %i)\n",
     VAR_4, VAR_13, VAR_0);
  return ((void*)0);
 }

    FUNC_1(VAR_7->ident);
    FUNC_1(VAR_7->version);
    FUNC_1(VAR_7->numFrames);
    FUNC_1(VAR_7->numTags);
    FUNC_1(VAR_7->numSurfaces);
    FUNC_1(VAR_7->numSkins);
    FUNC_1(VAR_7->ofsFrames);
    FUNC_1(VAR_7->ofsTags);
    FUNC_1(VAR_7->ofsSurfaces);
    FUNC_1(VAR_7->ofsEnd);

 if ( VAR_7->numFrames < 1 ) {
  FUNC_7( "R_LoadMD3: %s has no frames\n", VAR_4 );
  return ((void*)0);
 }




    VAR_8 = (md3Frame_t *) ( (byte *)VAR_7 + VAR_7->ofsFrames );
    for ( VAR_5 = 0 ; VAR_5 < VAR_7->numFrames ; VAR_5++, VAR_8++) {
     VAR_8->radius = FUNC_2( VAR_8->radius );
        for ( VAR_6 = 0 ; VAR_6 < 3 ; VAR_6++ ) {
            VAR_8->bounds[0][VAR_6] = FUNC_2( VAR_8->bounds[0][VAR_6] );
            VAR_8->bounds[1][VAR_6] = FUNC_2( VAR_8->bounds[1][VAR_6] );
      VAR_8->localOrigin[VAR_6] = FUNC_2( VAR_8->localOrigin[VAR_6] );
        }
 }


 VAR_9 = (md3Surface_t *) ( (byte *)VAR_7 + VAR_7->ofsSurfaces );
 for ( VAR_5 = 0 ; VAR_5 < VAR_7->numSurfaces ; VAR_5++) {

        FUNC_1(VAR_9->ident);
        FUNC_1(VAR_9->flags);
        FUNC_1(VAR_9->numFrames);
        FUNC_1(VAR_9->numShaders);
        FUNC_1(VAR_9->numTriangles);
        FUNC_1(VAR_9->ofsTriangles);
        FUNC_1(VAR_9->numVerts);
        FUNC_1(VAR_9->ofsShaders);
        FUNC_1(VAR_9->ofsSt);
        FUNC_1(VAR_9->ofsXyzNormals);
        FUNC_1(VAR_9->ofsEnd);

  if ( VAR_9->numVerts > VAR_2 ) {
   FUNC_0 ("R_LoadMD3: %s has more than %i verts on a surface (%i)",
    VAR_4, VAR_2, VAR_9->numVerts );
  }
  if ( VAR_9->numTriangles*3 > VAR_1 ) {
   FUNC_0 ("R_LoadMD3: %s has more than %i triangles on a surface (%i)",
    VAR_4, VAR_1 / 3, VAR_9->numTriangles );
  }


  VAR_10 = (md3Triangle_t *) ( (byte *)VAR_9 + VAR_9->ofsTriangles );
  for ( VAR_6 = 0 ; VAR_6 < VAR_9->numTriangles ; VAR_6++, VAR_10++ ) {
   FUNC_1(VAR_10->indexes[0]);
   FUNC_1(VAR_10->indexes[1]);
   FUNC_1(VAR_10->indexes[2]);
  }


        VAR_11 = (md3St_t *) ( (byte *)VAR_9 + VAR_9->ofsSt );
        for ( VAR_6 = 0 ; VAR_6 < VAR_9->numVerts ; VAR_6++, VAR_11++ ) {
            VAR_11->st[0] = FUNC_2( VAR_11->st[0] );
            VAR_11->st[1] = FUNC_2( VAR_11->st[1] );
        }


        VAR_12 = (md3XyzNormal_t *) ( (byte *)VAR_9 + VAR_9->ofsXyzNormals );
        for ( VAR_6 = 0 ; VAR_6 < VAR_9->numVerts * VAR_9->numFrames ; VAR_6++, VAR_12++ )
  {
            VAR_12->xyz[0] = FUNC_4( VAR_12->xyz[0] );
            VAR_12->xyz[1] = FUNC_4( VAR_12->xyz[1] );
            VAR_12->xyz[2] = FUNC_4( VAR_12->xyz[2] );

            VAR_12->normal = FUNC_4( VAR_12->normal );
        }



  VAR_9 = (md3Surface_t *)( (byte *)VAR_9 + VAR_9->ofsEnd );
 }

 return VAR_7;
}
