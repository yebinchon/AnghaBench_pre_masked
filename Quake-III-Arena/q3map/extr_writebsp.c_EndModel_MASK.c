
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int node_t ;
struct TYPE_3__ {scalar_t__ firstBrush; scalar_t__ numBrushes; scalar_t__ firstSurface; scalar_t__ numSurfaces; } ;
typedef TYPE_1__ dmodel_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (char*) ;

void FUNC_2( node_t *VAR_4 ) {
 dmodel_t *VAR_5;

 FUNC_1 ("--- EndModel ---\n");

 VAR_5 = &VAR_0[VAR_3];
 FUNC_0 (VAR_4);
 VAR_5->numSurfaces = VAR_1 - VAR_5->firstSurface;
 VAR_5->numBrushes = VAR_2 - VAR_5->firstBrush;

 VAR_3++;
}
