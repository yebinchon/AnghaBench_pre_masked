
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int surfaceType_t ;
struct TYPE_8__ {int sortedIndex; } ;
typedef TYPE_3__ shader_t ;
struct TYPE_7__ {int numDrawSurfs; TYPE_1__* drawSurfs; } ;
struct TYPE_9__ {int shiftedEntityNum; TYPE_2__ refdef; } ;
struct TYPE_6__ {int sort; int * surface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;

void FUNC_0( surfaceType_t *VAR_4, shader_t *VAR_5,
       int VAR_6, int VAR_7 ) {
 int VAR_8;



 VAR_8 = VAR_3.refdef.numDrawSurfs & VAR_0;


 VAR_3.refdef.drawSurfs[VAR_8].sort = (VAR_5->sortedIndex << VAR_2)
  | VAR_3.shiftedEntityNum | ( VAR_6 << VAR_1 ) | (int)VAR_7;
 VAR_3.refdef.drawSurfs[VAR_8].surface = VAR_4;
 VAR_3.refdef.numDrawSurfs++;
}
