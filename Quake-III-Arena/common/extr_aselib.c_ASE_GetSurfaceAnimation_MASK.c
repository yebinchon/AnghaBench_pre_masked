
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int triangle_t ;
struct TYPE_16__ {int numtriangles; TYPE_4__* triangles; int materialname; int name; } ;
typedef TYPE_6__ polyset_t ;
struct TYPE_17__ {int numFaces; size_t** faces; size_t** tfaces; TYPE_5__* tvertexes; TYPE_3__* vertexes; } ;
typedef TYPE_7__ aseMesh_t ;
struct TYPE_12__ {int numFrames; TYPE_7__* frames; } ;
struct TYPE_18__ {size_t materialRef; TYPE_2__ anim; int name; } ;
typedef TYPE_8__ aseGeomObject_t ;
struct TYPE_19__ {TYPE_1__* materials; TYPE_8__* objects; } ;
struct TYPE_15__ {int t; int s; } ;
struct TYPE_14__ {int ** texcoords; int ** verts; } ;
struct TYPE_13__ {int z; int y; int x; } ;
struct TYPE_11__ {int name; } ;


 TYPE_9__ VAR_0 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;

polyset_t *FUNC_3( int VAR_1, int *VAR_2, int VAR_3, int VAR_4, int VAR_5 )
{
 aseGeomObject_t *VAR_6 = &VAR_0.objects[VAR_1];
 polyset_t *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10, VAR_11;

 if ( !VAR_6->anim.numFrames )
  return 0;

 if ( VAR_6->anim.numFrames > VAR_5 && VAR_5 != -1 )
 {
  VAR_8 = VAR_5;
 }
 else
 {
  VAR_8 = VAR_6->anim.numFrames;
  if ( VAR_5 != -1 )
   FUNC_1( "WARNING: ASE_GetSurfaceAnimation maxFrames > numFramesInAnimation\n" );
 }

 if ( VAR_4 != -1 )
  VAR_9 = VAR_8 - ( VAR_4 - VAR_3 + 1 );
 else
  VAR_9 = VAR_8;

 *VAR_2 = VAR_9;

 VAR_7 = FUNC_0( sizeof( polyset_t ) * VAR_9, 1 );

 for ( VAR_11 = 0, VAR_10 = 0; VAR_10 < VAR_8; VAR_10++ )
 {
  int VAR_12;
  aseMesh_t *VAR_13 = &VAR_6->anim.frames[VAR_10];

  if ( VAR_3 != -1 )
  {
   if ( VAR_10 >= VAR_3 && VAR_10 <= VAR_4 )
    continue;
  }

  FUNC_2( VAR_7[VAR_11].name, VAR_6->name );
  FUNC_2( VAR_7[VAR_11].materialname, VAR_0.materials[VAR_6->materialRef].name );

  VAR_7[VAR_11].triangles = FUNC_0( sizeof( triangle_t ) * VAR_6->anim.frames[VAR_10].numFaces, 1 );
  VAR_7[VAR_11].numtriangles = VAR_6->anim.frames[VAR_10].numFaces;

  for ( VAR_12 = 0; VAR_12 < VAR_6->anim.frames[VAR_10].numFaces; VAR_12++ )
  {
   int VAR_14;

   for ( VAR_14 = 0; VAR_14 < 3; VAR_14++ )
   {
    VAR_7[VAR_11].triangles[VAR_12].verts[VAR_14][0] = VAR_13->vertexes[VAR_13->faces[VAR_12][VAR_14]].x;
    VAR_7[VAR_11].triangles[VAR_12].verts[VAR_14][1] = VAR_13->vertexes[VAR_13->faces[VAR_12][VAR_14]].y;
    VAR_7[VAR_11].triangles[VAR_12].verts[VAR_14][2] = VAR_13->vertexes[VAR_13->faces[VAR_12][VAR_14]].z;

    if ( VAR_13->tvertexes && VAR_13->tfaces )
    {
     VAR_7[VAR_11].triangles[VAR_12].texcoords[VAR_14][0] = VAR_13->tvertexes[VAR_13->tfaces[VAR_12][VAR_14]].s;
     VAR_7[VAR_11].triangles[VAR_12].texcoords[VAR_14][1] = VAR_13->tvertexes[VAR_13->tfaces[VAR_12][VAR_14]].t;
    }

   }
  }

  VAR_11++;
 }

 return VAR_7;
}
