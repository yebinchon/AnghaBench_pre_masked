
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int terrainVert_t ;
struct TYPE_3__ {int width; int * map; } ;
typedef TYPE_1__ terrainMesh_t ;



terrainVert_t *FUNC_0( terrainMesh_t *VAR_0, int VAR_1, int VAR_2 ) {
 return &VAR_0->map[ VAR_1 + VAR_2 * VAR_0->width ];
}
