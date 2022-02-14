
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int numpoints; int * points; } ;
typedef TYPE_2__ winding_t ;
struct TYPE_15__ {int width; TYPE_1__* verts; } ;
typedef TYPE_3__ mesh_t ;
struct TYPE_16__ {int numFacets; int * facets; TYPE_3__* detailMesh; } ;
typedef TYPE_4__ lsurfaceTest_t ;
struct TYPE_17__ {int lightmapNum; int lightmapHeight; int lightmapWidth; scalar_t__ surfaceType; int lightmapY; int lightmapX; int * lightmapVecs; int lightmapOrigin; } ;
typedef TYPE_5__ dsurface_t ;
struct TYPE_13__ {int normal; int xyz; } ;


 int VAR_0 ;
 float VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *) ;
 float FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,float,int ,int ) ;
 float FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char*) ;
 TYPE_5__* VAR_4 ;
 float* VAR_5 ;
 TYPE_4__** VAR_6 ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

void FUNC_7(void)
{
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 dsurface_t *VAR_14;
 lsurfaceTest_t *VAR_15;
 mesh_t *VAR_16;
 winding_t VAR_17, VAR_18;
 float VAR_19;

 FUNC_5("calculating visible lightmap pixel area...\n");
 for ( VAR_9 = 0 ; VAR_9 < VAR_8 ; VAR_9++ )
 {
  VAR_15 = VAR_6[ VAR_9 ];
  if (!VAR_15)
   continue;
  VAR_14 = &VAR_4[ VAR_9 ];

  if ( VAR_14->lightmapNum < 0 )
   continue;

  for (VAR_12 = 0; VAR_12 < VAR_14->lightmapHeight; VAR_12++)
  {
   for (VAR_11 = 0; VAR_11 < VAR_14->lightmapWidth; VAR_11++)
   {
    if (VAR_14->surfaceType == VAR_3)
    {
     if (VAR_12 == VAR_14->lightmapHeight-1)
      continue;
     if (VAR_11 == VAR_14->lightmapWidth-1)
      continue;
     VAR_16 = VAR_6[VAR_9]->detailMesh;
     FUNC_2( VAR_16->verts[VAR_12*VAR_16->width+VAR_11].xyz, VAR_17.points[0]);
     FUNC_2( VAR_16->verts[(VAR_12+1)*VAR_16->width+VAR_11].xyz, VAR_17.points[1]);
     FUNC_2( VAR_16->verts[(VAR_12+1)*VAR_16->width+VAR_11+1].xyz, VAR_17.points[2]);
     FUNC_2( VAR_16->verts[VAR_12*VAR_16->width+VAR_11+1].xyz, VAR_17.points[3]);
     VAR_17.numpoints = 4;
     if (VAR_7)
      VAR_19 = FUNC_4(&VAR_17);
     else
      VAR_19 = FUNC_1(&VAR_17, VAR_16->verts[VAR_12*VAR_16->width+VAR_11].normal);
    }
    else
    {
     FUNC_3(VAR_14->lightmapOrigin, (float) VAR_11 - VAR_1, VAR_14->lightmapVecs[0], VAR_17.points[0]);
     FUNC_3(VAR_17.points[0], (float) VAR_12 - VAR_1, VAR_14->lightmapVecs[1], VAR_17.points[0]);
     FUNC_3(VAR_14->lightmapOrigin, (float) VAR_11 - VAR_1, VAR_14->lightmapVecs[0], VAR_17.points[3]);
     FUNC_3(VAR_17.points[3], (float) VAR_12 - VAR_1 + 1, VAR_14->lightmapVecs[1], VAR_17.points[3]);
     FUNC_3(VAR_14->lightmapOrigin, (float) VAR_11 - VAR_1 + 1, VAR_14->lightmapVecs[0], VAR_17.points[2]);
     FUNC_3(VAR_17.points[2], (float) VAR_12 - VAR_1 + 1, VAR_14->lightmapVecs[1], VAR_17.points[2]);
     FUNC_3(VAR_14->lightmapOrigin, (float) VAR_11 - VAR_1 + 1, VAR_14->lightmapVecs[0], VAR_17.points[1]);
     FUNC_3(VAR_17.points[1], (float) VAR_12 - VAR_1, VAR_14->lightmapVecs[1], VAR_17.points[1]);
     VAR_17.numpoints = 4;
     VAR_19 = 0;
     for (VAR_10 = 0; VAR_10 < VAR_15->numFacets; VAR_10++)
     {
      FUNC_6(&VAR_18, &VAR_17, sizeof(winding_t));
      VAR_19 += FUNC_0(&VAR_18, &VAR_15->facets[VAR_10]);
     }
    }
    VAR_13 = ( VAR_14->lightmapNum * VAR_0 + VAR_14->lightmapY + VAR_12)
      * VAR_2 + VAR_14->lightmapX + VAR_11;
    VAR_5[VAR_13] = VAR_19;
   }
  }
 }
}
