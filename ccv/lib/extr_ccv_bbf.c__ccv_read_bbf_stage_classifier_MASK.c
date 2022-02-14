
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; float threshold; float* alpha; TYPE_2__* feature; } ;
typedef TYPE_1__ ccv_bbf_stage_classifier_t ;
struct TYPE_5__ {int size; int * nz; int * ny; int * nx; int * pz; int * py; int * px; } ;
typedef TYPE_2__ ccv_bbf_feature_t ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,char*,int*,...) ;

__attribute__((used)) static int FUNC_4(const char* VAR_0, ccv_bbf_stage_classifier_t* VAR_1)
{
 FILE* VAR_2 = FUNC_2(VAR_0, "r");
 if (VAR_2 == 0) return -1;
 int VAR_3 = 0;
 VAR_3 |= FUNC_3(VAR_2, "%d", &VAR_1->count);
 union { float fl; int i; } VAR_4;
 VAR_3 |= FUNC_3(VAR_2, "%d", &VAR_4.i);
 VAR_1->threshold = VAR_4.fl;
 VAR_1->feature = (ccv_bbf_feature_t*)FUNC_0(VAR_1->count * sizeof(ccv_bbf_feature_t));
 VAR_1->alpha = (float*)FUNC_0(VAR_1->count * 2 * sizeof(float));
 int VAR_5, VAR_6;
 for (VAR_5 = 0; VAR_5 < VAR_1->count; VAR_5++)
 {
  VAR_3 |= FUNC_3(VAR_2, "%d", &VAR_1->feature[VAR_5].size);
  for (VAR_6 = 0; VAR_6 < VAR_1->feature[VAR_5].size; VAR_6++)
  {
   VAR_3 |= FUNC_3(VAR_2, "%d %d %d", &VAR_1->feature[VAR_5].px[VAR_6], &VAR_1->feature[VAR_5].py[VAR_6], &VAR_1->feature[VAR_5].pz[VAR_6]);
   VAR_3 |= FUNC_3(VAR_2, "%d %d %d", &VAR_1->feature[VAR_5].nx[VAR_6], &VAR_1->feature[VAR_5].ny[VAR_6], &VAR_1->feature[VAR_5].nz[VAR_6]);
  }
  union { float fl; int i; } VAR_7, VAR_8;
  VAR_3 |= FUNC_3(VAR_2, "%d %d", &VAR_7.i, &VAR_8.i);
  VAR_1->alpha[VAR_5 * 2] = VAR_7.fl;
  VAR_1->alpha[VAR_5 * 2 + 1] = VAR_8.fl;
 }
 FUNC_1(VAR_2);
 return 0;
}
