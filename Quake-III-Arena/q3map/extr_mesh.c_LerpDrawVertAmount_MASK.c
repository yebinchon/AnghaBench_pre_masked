
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float* xyz; float* st; float* lightmap; float* color; float* normal; } ;
typedef TYPE_1__ drawVert_t ;


 int FUNC_0 (float*,float*) ;

void FUNC_1( drawVert_t *VAR_0, drawVert_t *VAR_1, float VAR_2, drawVert_t *VAR_3 ) {
 VAR_3->xyz[0] = VAR_0->xyz[0] + VAR_2 * (VAR_1->xyz[0] - VAR_0->xyz[0]);
 VAR_3->xyz[1] = VAR_0->xyz[1] + VAR_2 * (VAR_1->xyz[1] - VAR_0->xyz[1]);
 VAR_3->xyz[2] = VAR_0->xyz[2] + VAR_2 * (VAR_1->xyz[2] - VAR_0->xyz[2]);

 VAR_3->st[0] = VAR_0->st[0] + VAR_2 * (VAR_1->st[0] - VAR_0->st[0]);
 VAR_3->st[1] = VAR_0->st[1] + VAR_2 * (VAR_1->st[1] - VAR_0->st[1]);

 VAR_3->lightmap[0] = VAR_0->lightmap[0] + VAR_2 * (VAR_1->lightmap[0] - VAR_0->lightmap[0]);
 VAR_3->lightmap[1] = VAR_0->lightmap[1] + VAR_2 * (VAR_1->lightmap[1] - VAR_0->lightmap[1]);

 VAR_3->color[0] = VAR_0->color[0] + VAR_2 * (VAR_1->color[0] - VAR_0->color[0]);
 VAR_3->color[1] = VAR_0->color[1] + VAR_2 * (VAR_1->color[1] - VAR_0->color[1]);
 VAR_3->color[2] = VAR_0->color[2] + VAR_2 * (VAR_1->color[2] - VAR_0->color[2]);
 VAR_3->color[3] = VAR_0->color[3] + VAR_2 * (VAR_1->color[3] - VAR_0->color[3]);

 VAR_3->normal[0] = VAR_0->normal[0] + VAR_2 * (VAR_1->normal[0] - VAR_0->normal[0]);
 VAR_3->normal[1] = VAR_0->normal[1] + VAR_2 * (VAR_1->normal[1] - VAR_0->normal[1]);
 VAR_3->normal[2] = VAR_0->normal[2] + VAR_2 * (VAR_1->normal[2] - VAR_0->normal[2]);
 FUNC_0(VAR_3->normal, VAR_3->normal);
}
