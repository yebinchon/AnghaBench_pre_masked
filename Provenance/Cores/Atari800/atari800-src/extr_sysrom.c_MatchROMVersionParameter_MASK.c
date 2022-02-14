
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int * VAR_3 ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(char const *VAR_4, int const *VAR_5, int *VAR_6)
{
 if (FUNC_1(VAR_4, "AUTO") == 0) {
  *VAR_6 = VAR_1;
  return VAR_2;
 }
 else do {
  if (FUNC_0(VAR_4, VAR_3[*VAR_5]) == 0) {
   *VAR_6 = *VAR_5;
   return VAR_2;
  }
 } while (*++VAR_5 != -1);

 return VAR_0;
}
