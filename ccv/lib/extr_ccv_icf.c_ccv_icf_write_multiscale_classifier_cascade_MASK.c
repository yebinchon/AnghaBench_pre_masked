
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int octave; int count; int grayscale; scalar_t__ cascade; } ;
typedef TYPE_1__ ccv_icf_multiscale_classifier_cascade_t ;
typedef int FILE ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,int,int,int) ;
 int FUNC_4 (char*,int,char*,char const*,...) ;

void FUNC_5(ccv_icf_multiscale_classifier_cascade_t* VAR_0, const char* VAR_1)
{
 char VAR_2[1024];
 FUNC_4(VAR_2, 1024, "%s/multiscale", VAR_1);
 FILE* VAR_3 = FUNC_2(VAR_2, "w+");
 FUNC_3(VAR_3, "%d %d %d\n", VAR_0->octave, VAR_0->count, VAR_0->grayscale);
 FUNC_1(VAR_3);
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_0->count; VAR_4++)
 {
  FUNC_4(VAR_2, 1024, "%s/cascade-%d", VAR_1, VAR_4 + 1);
  VAR_3 = FUNC_2(VAR_2, "w+");
  FUNC_0(VAR_0->cascade + VAR_4, VAR_3);
  FUNC_1(VAR_3);
 }
}
