
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lsurfaceTest_t ;
struct TYPE_3__ {int lightmapNum; int lightmapHeight; int lightmapWidth; int lightmapY; int lightmapX; } ;
typedef TYPE_1__ dsurface_t ;
typedef int byte ;


 int FUNC_0 (float*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (float*,int ,float*) ;
 int FUNC_4 (char*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 float* VAR_5 ;
 int ** VAR_6 ;
 int VAR_7 ;

void FUNC_5(void)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;
 dsurface_t *VAR_12;
 lsurfaceTest_t *VAR_13;
 float *VAR_14;
 byte *VAR_15;

 FUNC_4("storing lightmaps...\n");

 FUNC_1();





 for ( VAR_8 = 0 ; VAR_8 < VAR_7 ; VAR_8++ )
 {
  VAR_13 = VAR_6[ VAR_8 ];
  if (!VAR_13)
   continue;
  VAR_12 = &VAR_2[ VAR_8 ];

  if ( VAR_12->lightmapNum < 0 )
   continue;

  for (VAR_10 = 0; VAR_10 < VAR_12->lightmapHeight; VAR_10++)
  {
   for (VAR_9 = 0; VAR_9 < VAR_12->lightmapWidth; VAR_9++)
   {
    VAR_11 = ( VAR_12->lightmapNum * VAR_0 + VAR_12->lightmapY + VAR_10)
      * VAR_1 + VAR_12->lightmapX + VAR_9;
    FUNC_3((VAR_5 + VAR_11*3), VAR_3, (VAR_5 + VAR_11*3));
    VAR_14 = &VAR_5[VAR_11*3];
    VAR_15 = VAR_4 + VAR_11*3;
    FUNC_0(VAR_14, VAR_15);
   }
  }
 }
}
