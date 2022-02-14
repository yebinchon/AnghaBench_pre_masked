
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,char*,int,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(void *VAR_1, double VAR_2, double VAR_3,
                             double VAR_4, double VAR_5)
{
  static int VAR_6 = -1;
  static int VAR_7 = -1;
  (void)VAR_1;
  (void)VAR_2;
  (void)VAR_3;





  if((VAR_6 != (int)VAR_4) ||
     (VAR_7 != (int)VAR_5)) {

    FILE *VAR_8 = FUNC_1(VAR_0, "ab");
    if(VAR_8) {
      FUNC_2(VAR_8, "Progress callback called with UL %d out of %d\n",
              (int)VAR_5, (int)VAR_4);
      FUNC_0(VAR_8);
    }
    VAR_7 = (int) VAR_5;
    VAR_6 = (int) VAR_4;
  }
  return 0;
}
