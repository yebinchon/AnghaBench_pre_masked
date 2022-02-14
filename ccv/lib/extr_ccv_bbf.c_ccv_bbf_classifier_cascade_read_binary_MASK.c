
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int count; int threshold; int* feature; float* alpha; } ;
typedef TYPE_2__ ccv_bbf_stage_classifier_t ;
typedef int ccv_bbf_feature_t ;
struct TYPE_5__ {int width; int height; } ;
struct TYPE_7__ {int count; TYPE_2__* stage_classifier; TYPE_1__ size; } ;
typedef TYPE_3__ ccv_bbf_classifier_cascade_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int*,char*,int) ;

ccv_bbf_classifier_cascade_t* FUNC_2(char* VAR_0)
{
 int VAR_1;
 ccv_bbf_classifier_cascade_t* VAR_2 = (ccv_bbf_classifier_cascade_t*)FUNC_0(sizeof(ccv_bbf_classifier_cascade_t));
 FUNC_1(&VAR_2->count, VAR_0, sizeof(VAR_2->count)); VAR_0 += sizeof(VAR_2->count);
 FUNC_1(&VAR_2->size.width, VAR_0, sizeof(VAR_2->size.width)); VAR_0 += sizeof(VAR_2->size.width);
 FUNC_1(&VAR_2->size.height, VAR_0, sizeof(VAR_2->size.height)); VAR_0 += sizeof(VAR_2->size.height);
 ccv_bbf_stage_classifier_t* VAR_3 = VAR_2->stage_classifier = (ccv_bbf_stage_classifier_t*)FUNC_0(VAR_2->count * sizeof(ccv_bbf_stage_classifier_t));
 for (VAR_1 = 0; VAR_1 < VAR_2->count; VAR_1++, VAR_3++)
 {
  FUNC_1(&VAR_3->count, VAR_0, sizeof(VAR_3->count)); VAR_0 += sizeof(VAR_3->count);
  FUNC_1(&VAR_3->threshold, VAR_0, sizeof(VAR_3->threshold)); VAR_0 += sizeof(VAR_3->threshold);
  VAR_3->feature = (ccv_bbf_feature_t*)FUNC_0(VAR_3->count * sizeof(ccv_bbf_feature_t));
  VAR_3->alpha = (float*)FUNC_0(VAR_3->count * 2 * sizeof(float));
  FUNC_1(VAR_3->feature, VAR_0, VAR_3->count * sizeof(ccv_bbf_feature_t)); VAR_0 += VAR_3->count * sizeof(ccv_bbf_feature_t);
  FUNC_1(VAR_3->alpha, VAR_0, VAR_3->count * 2 * sizeof(float)); VAR_0 += VAR_3->count * 2 * sizeof(float);
 }
 return VAR_2;

}
