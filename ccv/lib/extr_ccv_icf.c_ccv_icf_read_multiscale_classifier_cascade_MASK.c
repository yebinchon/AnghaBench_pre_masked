
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int octave; int count; int grayscale; int * cascade; int type; } ;
typedef TYPE_1__ ccv_icf_multiscale_classifier_cascade_t ;
typedef int ccv_icf_classifier_cascade_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,char*,int*,int*,int*) ;
 int FUNC_5 (char*,int,char*,char const*,...) ;

ccv_icf_multiscale_classifier_cascade_t* FUNC_6(const char* VAR_1)
{
 char VAR_2[1024];
 FUNC_5(VAR_2, 1024, "%s/multiscale", VAR_1);
 FILE* VAR_3 = FUNC_3(VAR_2, "r");
 if (VAR_3)
 {
  int VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
  FUNC_4(VAR_3, "%d %d %d", &VAR_4, &VAR_5, &VAR_6);
  FUNC_2(VAR_3);
  ccv_icf_multiscale_classifier_cascade_t* VAR_7 = (ccv_icf_multiscale_classifier_cascade_t*)FUNC_1(sizeof(ccv_icf_multiscale_classifier_cascade_t) + sizeof(ccv_icf_classifier_cascade_t) * VAR_5);
  VAR_7->type = VAR_0;
  VAR_7->octave = VAR_4;
  VAR_7->count = VAR_5;
  VAR_7->grayscale = VAR_6;
  VAR_7->cascade = (ccv_icf_classifier_cascade_t*)(VAR_7 + 1);
  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
  {
   FUNC_5(VAR_2, 1024, "%s/cascade-%d", VAR_1, VAR_8 + 1);
   VAR_3 = FUNC_3(VAR_2, "r");
   if (VAR_3)
   {
    ccv_icf_classifier_cascade_t* VAR_9 = VAR_7->cascade + VAR_8;
    FUNC_0(VAR_3, VAR_9);
    FUNC_2(VAR_3);
   }
  }
  return VAR_7;
 }
 return 0;
}
