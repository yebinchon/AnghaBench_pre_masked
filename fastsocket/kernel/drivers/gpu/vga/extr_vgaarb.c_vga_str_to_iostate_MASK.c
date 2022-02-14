
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;

__attribute__((used)) static int FUNC_1(char *VAR_3, int VAR_4, int *VAR_5)
{


 if (FUNC_0(VAR_3, "none", 4) == 0) {
  *VAR_5 = VAR_2;
  return 1;
 }


 if (FUNC_0(VAR_3, "io+mem", 6) == 0)
  goto both;
 else if (FUNC_0(VAR_3, "io", 2) == 0)
  goto both;
 else if (FUNC_0(VAR_3, "mem", 3) == 0)
  goto both;
 return 0;
both:
 *VAR_5 = VAR_0 | VAR_1;
 return 1;
}
