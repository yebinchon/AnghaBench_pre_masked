
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(void *VAR_2, double VAR_3, double VAR_4,
                             double VAR_5, double VAR_6)
{
  FILE *VAR_7 = FUNC_1(VAR_1, "wb");

  (void)VAR_2;
  (void)VAR_3;
  (void)VAR_4;

  if(VAR_7) {
    if((size_t)VAR_5 == VAR_0 && (size_t)VAR_6 == VAR_0)
      FUNC_2(VAR_7, "PASSED, UL data matched data size\n");
    else
      FUNC_2(VAR_7, "Progress callback called with UL %f out of %f\n",
              VAR_6, VAR_5);
    FUNC_0(VAR_7);
  }
  return 0;
}
