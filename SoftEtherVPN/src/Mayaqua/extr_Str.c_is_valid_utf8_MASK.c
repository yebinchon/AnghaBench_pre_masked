
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 int FUNC_0 (unsigned char*,int*) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, UINT VAR_1) {
 int VAR_2 = 0;
 char *VAR_3 = VAR_0 + VAR_1;
 while (VAR_0 < VAR_3) {
  if (!FUNC_0((unsigned char*)VAR_0, &VAR_2)) {
   return 0;
  }
  VAR_0 += VAR_2;
 }
 return 1;
}
