
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lsurfaceTest_t ;
struct TYPE_5__ {int lightmapNum; scalar_t__ surfaceType; int lightmapWidth; int lightmapHeight; int lightmapY; int lightmapX; size_t firstVert; int patchHeight; int patchWidth; } ;
typedef TYPE_1__ dsurface_t ;
struct TYPE_6__ {double* lightmap; } ;
typedef TYPE_2__ drawVert_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 float* VAR_5 ;
 int ** VAR_6 ;
 int VAR_7 ;

void FUNC_0(void)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 drawVert_t *VAR_13;
 dsurface_t *VAR_14;
 lsurfaceTest_t *VAR_15;
 float *VAR_16;

 for ( VAR_8 = 0 ; VAR_8 < VAR_7 ; VAR_8++ )
 {
  VAR_15 = VAR_6[ VAR_8 ];
  if (!VAR_15)
   continue;
  VAR_14 = &VAR_3[ VAR_8 ];

  if ( VAR_14->lightmapNum < 0 )
   continue;
  if (VAR_14->surfaceType != VAR_2)
   continue;
  for (VAR_10 = VAR_14->lightmapWidth; VAR_10 > 0; VAR_10--)
  {
   for (VAR_11 = 0; VAR_11 <= VAR_14->lightmapHeight; VAR_11++)
   {
    VAR_12 = ( VAR_14->lightmapNum * VAR_0 + VAR_14->lightmapY + VAR_11)
      * VAR_1 + VAR_14->lightmapX + VAR_10;
    VAR_16 = VAR_5 + VAR_12*3;
    VAR_16[0] = (VAR_5 + (VAR_12-1)*3)[0];
    VAR_16[1] = (VAR_5 + (VAR_12-1)*3)[1];
    VAR_16[2] = (VAR_5 + (VAR_12-1)*3)[2];
   }
  }
  for (VAR_11 = VAR_14->lightmapHeight; VAR_11 > 0; VAR_11--)
  {
   for (VAR_10 = 0; VAR_10 <= VAR_14->lightmapWidth; VAR_10++)
   {
    VAR_12 = ( VAR_14->lightmapNum * VAR_0 + VAR_14->lightmapY + VAR_11)
      * VAR_1 + VAR_14->lightmapX + VAR_10;
    VAR_16 = VAR_5 + VAR_12*3;
    VAR_16[0] = (VAR_5 + (VAR_12-VAR_1)*3)[0];
    VAR_16[1] = (VAR_5 + (VAR_12-VAR_1)*3)[1];
    VAR_16[2] = (VAR_5 + (VAR_12-VAR_1)*3)[2];
   }
  }
  VAR_13 = &VAR_4[ VAR_14->firstVert ];
  for ( VAR_9 = 0 ; VAR_9 < VAR_14->patchHeight * VAR_14->patchWidth; VAR_9++ )
  {
   VAR_13[VAR_9].lightmap[0] += 0.5 / VAR_1;
   VAR_13[VAR_9].lightmap[1] += 0.5 / VAR_0;
  }
  VAR_14->lightmapHeight++;
  VAR_14->lightmapWidth++;
 }
}
