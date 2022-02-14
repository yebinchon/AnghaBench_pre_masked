
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int outputnumber; int numpoints; int planenum; int * vertexnums; int texinfo; scalar_t__* split; scalar_t__ merged; } ;
typedef TYPE_1__ face_t ;
struct TYPE_7__ {int planenum; int side; size_t firstedge; int numedges; int texinfo; } ;
typedef TYPE_2__ dface_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_2__* VAR_2 ;
 int* VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

void FUNC_2 (face_t *VAR_6)
{
 dface_t *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_6->outputnumber = -1;

 if (VAR_6->numpoints < 3)
 {
  return;
 }
 if (VAR_6->merged || VAR_6->split[0] || VAR_6->split[1])
 {
  return;
 }


 VAR_6->outputnumber = VAR_4;

 if (VAR_4 >= VAR_0)
  FUNC_0 ("numfaces == MAX_MAP_FACES");
 VAR_7 = &VAR_2[VAR_4];
 VAR_4++;


 VAR_7->planenum = VAR_6->planenum & (~1);
 VAR_7->side = VAR_6->planenum & 1;

 VAR_7->firstedge = VAR_5;
 VAR_7->numedges = VAR_6->numpoints;
 VAR_7->texinfo = VAR_6->texinfo;
 for (VAR_8=0 ; VAR_8<VAR_6->numpoints ; VAR_8++)
 {

  VAR_9 = FUNC_1 (VAR_6->vertexnums[VAR_8], VAR_6->vertexnums[(VAR_8+1)%VAR_6->numpoints], VAR_6);
  if (VAR_5 >= VAR_1)
   FUNC_0 ("numsurfedges == MAX_MAP_SURFEDGES");
  VAR_3[VAR_5] = VAR_9;
  VAR_5++;
 }
}
