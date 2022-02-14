
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bad_names ;


 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,scalar_t__) ;

int FUNC_2(const char *VAR_0, int VAR_1) {
 const char *VAR_2[] = { "System" };
 int VAR_3[] = { 6 };
 int VAR_4;

 for(VAR_4=0; VAR_4 < (int) (sizeof(VAR_2) / sizeof(VAR_2[0])); VAR_4++) {
  if (VAR_1 == VAR_3[VAR_4] && FUNC_1(VAR_0, VAR_2[VAR_4], FUNC_0(VAR_2[VAR_4]) + 1) == 0) {
   return 1;
  }
 }


 return 0;
}
