
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;

int FUNC_2(const char* VAR_0, int VAR_1) {
 return 0;

 FILE* VAR_2 = FUNC_1(VAR_0, "rb");
 if (VAR_2 < 0) {
  FUNC_0(VAR_2);

  return -1;
 } else {
  FUNC_0(VAR_2);
  return 0;
 }
}
