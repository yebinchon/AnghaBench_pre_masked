
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int count; int threshold; int* feature; int* alpha; } ;
typedef TYPE_2__ ccv_bbf_stage_classifier_t ;
typedef int ccv_bbf_feature_t ;
struct TYPE_5__ {int width; int height; } ;
struct TYPE_7__ {int count; TYPE_2__* stage_classifier; TYPE_1__ size; } ;
typedef TYPE_3__ ccv_bbf_classifier_cascade_t ;


 int FUNC_0 (char*,int*,int) ;

int FUNC_1(ccv_bbf_classifier_cascade_t* VAR_0, char* VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4 = sizeof(VAR_0->count) + sizeof(VAR_0->size.width) + sizeof(VAR_0->size.height);
 ccv_bbf_stage_classifier_t* VAR_5 = VAR_0->stage_classifier;
 for (VAR_3 = 0; VAR_3 < VAR_0->count; VAR_3++, VAR_5++)
  VAR_4 += sizeof(VAR_5->count) + sizeof(VAR_5->threshold) + VAR_5->count * sizeof(ccv_bbf_feature_t) + VAR_5->count * 2 * sizeof(float);
 if (VAR_2 >= VAR_4)
 {
  FUNC_0(VAR_1, &VAR_0->count, sizeof(VAR_0->count)); VAR_1 += sizeof(VAR_0->count);
  FUNC_0(VAR_1, &VAR_0->size.width, sizeof(VAR_0->size.width)); VAR_1 += sizeof(VAR_0->size.width);
  FUNC_0(VAR_1, &VAR_0->size.height, sizeof(VAR_0->size.height)); VAR_1 += sizeof(VAR_0->size.height);
  VAR_5 = VAR_0->stage_classifier;
  for (VAR_3 = 0; VAR_3 < VAR_0->count; VAR_3++, VAR_5++)
  {
   FUNC_0(VAR_1, &VAR_5->count, sizeof(VAR_5->count)); VAR_1 += sizeof(VAR_5->count);
   FUNC_0(VAR_1, &VAR_5->threshold, sizeof(VAR_5->threshold)); VAR_1 += sizeof(VAR_5->threshold);
   FUNC_0(VAR_1, VAR_5->feature, VAR_5->count * sizeof(ccv_bbf_feature_t)); VAR_1 += VAR_5->count * sizeof(ccv_bbf_feature_t);
   FUNC_0(VAR_1, VAR_5->alpha, VAR_5->count * 2 * sizeof(float)); VAR_1 += VAR_5->count * 2 * sizeof(float);
  }
 }
 return VAR_4;
}
