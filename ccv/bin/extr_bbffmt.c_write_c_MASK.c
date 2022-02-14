
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
struct TYPE_8__ {int count; double threshold; double* alpha; TYPE_2__* feature; } ;
struct TYPE_7__ {int size; int* px; int* py; int* pz; int* nx; int* ny; int* nz; } ;


 int FUNC_0 (char*,...) ;

void FUNC_1(ccv_bbf_classifier_cascade_t* VAR_0)
{

 FUNC_0("ccv_bbf_classifier_cascade_t* ccv_bbf_read_classifier_cascade()\n"
     "{\n"
     "	ccv_bbf_classifier_cascade_t* cascade = (ccv_bbf_classifier_cascade_t*)malloc(sizeof(ccv_bbf_classifier_cascade_t));\n"
     "	cascade->count = %d;\n"
     "	cascade->size = ccv_size(%d, %d);\n"
     "	cascade->stage_classifier = (ccv_bbf_stage_classifier_t*)malloc(cascade->count * sizeof(ccv_bbf_stage_classifier_t));\n",
   VAR_0->count, VAR_0->size.width, VAR_0->size.height);
 int VAR_1, VAR_2, VAR_3;
 for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++)
 {
  FUNC_0("	{\n");
  FUNC_0("		ccv_bbf_stage_classifier_t* classifier = cascade->stage_classifier + %d;\n", VAR_1);
  FUNC_0("		classifier->count = %d;\n"
      "		classifier->threshold = %f;\n",
      VAR_0->stage_classifier[VAR_1].count, VAR_0->stage_classifier[VAR_1].threshold);
  FUNC_0("		classifier->feature = (ccv_bbf_feature_t*)malloc(classifier->count * sizeof(ccv_bbf_feature_t));\n"
      "		classifier->alpha = (float*)malloc(classifier->count * 2 * sizeof(float));\n");
  for (VAR_2 = 0; VAR_2 < VAR_0->stage_classifier[VAR_1].count; VAR_2++)
  {
   FUNC_0("		classifier->feature[%d].size = %d;\n",
       VAR_2, VAR_0->stage_classifier[VAR_1].feature[VAR_2].size);
   for (VAR_3 = 0; VAR_3 < VAR_0->stage_classifier[VAR_1].feature[VAR_2].size; VAR_3++)
   {
    FUNC_0("		classifier->feature[%d].px[%d] = %d;\n"
        "		classifier->feature[%d].py[%d] = %d;\n"
        "		classifier->feature[%d].pz[%d] = %d;\n",
        VAR_2, VAR_3, VAR_0->stage_classifier[VAR_1].feature[VAR_2].px[VAR_3],
        VAR_2, VAR_3, VAR_0->stage_classifier[VAR_1].feature[VAR_2].py[VAR_3],
        VAR_2, VAR_3, VAR_0->stage_classifier[VAR_1].feature[VAR_2].pz[VAR_3]);
    FUNC_0("		classifier->feature[%d].nx[%d] = %d;\n"
        "		classifier->feature[%d].ny[%d] = %d;\n"
        "		classifier->feature[%d].nz[%d] = %d;\n",
        VAR_2, VAR_3, VAR_0->stage_classifier[VAR_1].feature[VAR_2].nx[VAR_3],
        VAR_2, VAR_3, VAR_0->stage_classifier[VAR_1].feature[VAR_2].ny[VAR_3],
        VAR_2, VAR_3, VAR_0->stage_classifier[VAR_1].feature[VAR_2].nz[VAR_3]);
   }
   FUNC_0("		classifier->alpha[%d] = %f;\n"
       "		classifier->alpha[%d] = %f;\n",
       VAR_2 * 2, VAR_0->stage_classifier[VAR_1].alpha[VAR_2 * 2], VAR_2 * 2 + 1, VAR_0->stage_classifier[VAR_1].alpha[VAR_2 * 2 + 1]);
  }
  FUNC_0("	}\n");
 }
 FUNC_0("	return cascade;\n}");
}
