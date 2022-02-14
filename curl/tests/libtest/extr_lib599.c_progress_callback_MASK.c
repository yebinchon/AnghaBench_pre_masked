
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,double,double) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, double VAR_1,
                             double VAR_2, double VAR_3, double VAR_4)
{
  (void)VAR_0;
  (void)VAR_4;
  (void)VAR_3;

  if((VAR_1 > 0.0) && (VAR_2 > VAR_1)) {

    FUNC_0("%.0f > %.0f !!\n", VAR_1, VAR_2);
    return -1;
  }

  return 0;
}
