
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ccv_bbf_stage_classifier_t ;
struct TYPE_4__ {int height; int width; } ;
struct TYPE_5__ {int count; int * stage_classifier; TYPE_1__ size; } ;
typedef TYPE_2__ ccv_bbf_classifier_cascade_t ;
typedef int FILE ;


 scalar_t__ FUNC_0 (char*,int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,char*,int*,int *,int *) ;
 int FUNC_6 (char*,char*,char const*,...) ;

ccv_bbf_classifier_cascade_t* FUNC_7(const char* VAR_0)
{
 char VAR_1[1024];
 FUNC_6(VAR_1, "%s/cascade.txt", VAR_0);
 int VAR_2, VAR_3;
 FILE* VAR_4 = FUNC_4(VAR_1, "r");
 if (VAR_4 == 0)
  return 0;
 ccv_bbf_classifier_cascade_t* VAR_5 = (ccv_bbf_classifier_cascade_t*)FUNC_2(sizeof(ccv_bbf_classifier_cascade_t));
 VAR_2 = FUNC_5(VAR_4, "%d %d %d", &VAR_5->count, &VAR_5->size.width, &VAR_5->size.height);
 FUNC_1(VAR_2 > 0);
 VAR_5->stage_classifier = (ccv_bbf_stage_classifier_t*)FUNC_2(VAR_5->count * sizeof(ccv_bbf_stage_classifier_t));
 for (VAR_3 = 0; VAR_3 < VAR_5->count; VAR_3++)
 {
  FUNC_6(VAR_1, "%s/stage-%d.txt", VAR_0, VAR_3);
  if (FUNC_0(VAR_1, &VAR_5->stage_classifier[VAR_3]) < 0)
  {
   VAR_5->count = VAR_3;
   break;
  }
 }
 FUNC_3(VAR_4);
 return VAR_5;
}
