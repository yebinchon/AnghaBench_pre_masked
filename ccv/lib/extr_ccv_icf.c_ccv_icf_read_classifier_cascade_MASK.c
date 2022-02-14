
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ccv_icf_classifier_cascade_t ;
typedef int FILE ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;

ccv_icf_classifier_cascade_t* FUNC_4(const char* VAR_0)
{
 FILE* VAR_1 = FUNC_3(VAR_0, "r");
 ccv_icf_classifier_cascade_t* VAR_2 = 0;
 if (VAR_1)
 {
  VAR_2 = (ccv_icf_classifier_cascade_t*)FUNC_1(sizeof(ccv_icf_classifier_cascade_t));
  FUNC_0(VAR_1, VAR_2);
  FUNC_2(VAR_1);
 }
 return VAR_2;
}
