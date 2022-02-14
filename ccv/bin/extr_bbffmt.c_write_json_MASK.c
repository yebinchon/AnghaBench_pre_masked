
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int width; int height; } ;
struct TYPE_9__ {int count; TYPE_3__* stage_classifier; TYPE_1__ size; } ;
typedef TYPE_4__ ccv_bbf_classifier_cascade_t ;
struct TYPE_8__ {int count; int * alpha; TYPE_2__* feature; int threshold; } ;
struct TYPE_7__ {int size; int* px; int* py; int* pz; int* nx; int* ny; int* nz; } ;


 int FUNC_0 (char*,...) ;

void FUNC_1(ccv_bbf_classifier_cascade_t* VAR_0)
{

 FUNC_0("{\"count\" : %d, \"width\" : %d, \"height\" : %d, \"stage_classifier\" : [",
     VAR_0->count, VAR_0->size.width, VAR_0->size.height);
 int VAR_1, VAR_2, VAR_3;
 for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++)
 {
  FUNC_0("{\"count\":%d,\"threshold\":%le,\"feature\":[",
      VAR_0->stage_classifier[VAR_1].count, VAR_0->stage_classifier[VAR_1].threshold);
  for (VAR_2 = 0; VAR_2 < VAR_0->stage_classifier[VAR_1].count; VAR_2++)
  {
   FUNC_0("{\"size\":%d,\"px\":[%d", VAR_0->stage_classifier[VAR_1].feature[VAR_2].size, VAR_0->stage_classifier[VAR_1].feature[VAR_2].px[0]);
   for (VAR_3 = 1; VAR_3 < VAR_0->stage_classifier[VAR_1].feature[VAR_2].size; VAR_3++)
    FUNC_0(",%d", VAR_0->stage_classifier[VAR_1].feature[VAR_2].px[VAR_3]);
   FUNC_0("],\"py\":[%d", VAR_0->stage_classifier[VAR_1].feature[VAR_2].py[0]);
   for (VAR_3 = 1; VAR_3 < VAR_0->stage_classifier[VAR_1].feature[VAR_2].size; VAR_3++)
    FUNC_0(",%d", VAR_0->stage_classifier[VAR_1].feature[VAR_2].py[VAR_3]);
   FUNC_0("],\"pz\":[%d", VAR_0->stage_classifier[VAR_1].feature[VAR_2].pz[0]);
   for (VAR_3 = 1; VAR_3 < VAR_0->stage_classifier[VAR_1].feature[VAR_2].size; VAR_3++)
    FUNC_0(",%d", VAR_0->stage_classifier[VAR_1].feature[VAR_2].pz[VAR_3]);
   FUNC_0("],\"nx\":[%d", VAR_0->stage_classifier[VAR_1].feature[VAR_2].nx[0]);
   for (VAR_3 = 1; VAR_3 < VAR_0->stage_classifier[VAR_1].feature[VAR_2].size; VAR_3++)
    FUNC_0(",%d", VAR_0->stage_classifier[VAR_1].feature[VAR_2].nx[VAR_3]);
   FUNC_0("],\"ny\":[%d", VAR_0->stage_classifier[VAR_1].feature[VAR_2].ny[0]);
   for (VAR_3 = 1; VAR_3 < VAR_0->stage_classifier[VAR_1].feature[VAR_2].size; VAR_3++)
    FUNC_0(",%d", VAR_0->stage_classifier[VAR_1].feature[VAR_2].ny[VAR_3]);
   FUNC_0("],\"nz\":[%d", VAR_0->stage_classifier[VAR_1].feature[VAR_2].nz[0]);
   for (VAR_3 = 1; VAR_3 < VAR_0->stage_classifier[VAR_1].feature[VAR_2].size; VAR_3++)
    FUNC_0(",%d", VAR_0->stage_classifier[VAR_1].feature[VAR_2].nz[VAR_3]);
   if (VAR_2 < VAR_0->stage_classifier[VAR_1].count - 1)
    FUNC_0("]},");
   else
    FUNC_0("]}");
  }
  FUNC_0("],\"alpha\":[%le,%le", VAR_0->stage_classifier[VAR_1].alpha[0], VAR_0->stage_classifier[VAR_1].alpha[1]);
  for (VAR_2 = 1; VAR_2 < VAR_0->stage_classifier[VAR_1].count; VAR_2++)
   FUNC_0(",%le,%le", VAR_0->stage_classifier[VAR_1].alpha[VAR_2 * 2], VAR_0->stage_classifier[VAR_1].alpha[VAR_2 * 2 + 1]);
  if (VAR_1 < VAR_0->count - 1)
   FUNC_0("]},");
  else
   FUNC_0("]}");
 }
 FUNC_0("]};\n");
}
