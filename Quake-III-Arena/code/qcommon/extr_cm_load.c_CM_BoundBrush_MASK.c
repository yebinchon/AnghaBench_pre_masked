
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* sides; int ** bounds; } ;
typedef TYPE_3__ cbrush_t ;
struct TYPE_6__ {TYPE_1__* plane; } ;
struct TYPE_5__ {int dist; } ;



void FUNC_0( cbrush_t *VAR_0 ) {
 VAR_0->bounds[0][0] = -VAR_0->sides[0].plane->dist;
 VAR_0->bounds[1][0] = VAR_0->sides[1].plane->dist;

 VAR_0->bounds[0][1] = -VAR_0->sides[2].plane->dist;
 VAR_0->bounds[1][1] = VAR_0->sides[3].plane->dist;

 VAR_0->bounds[0][2] = -VAR_0->sides[4].plane->dist;
 VAR_0->bounds[1][2] = VAR_0->sides[5].plane->dist;
}
