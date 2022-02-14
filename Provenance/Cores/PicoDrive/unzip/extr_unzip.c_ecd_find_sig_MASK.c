
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*,int) ;

__attribute__((used)) static int FUNC_1 (char *VAR_0, int VAR_1, int *VAR_2)
{
 static char VAR_3[] = { 'P', 'K', 0x05, 0x06 };
 int VAR_4;
 for (VAR_4=VAR_1-22; VAR_4>=0; VAR_4--) {
  if (FUNC_0(VAR_0+VAR_4, VAR_3, 4) == 0) {
   *VAR_2 = VAR_4;
   return 1;
  }
 }
 return 0;
}
