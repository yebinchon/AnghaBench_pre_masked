
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char*,...) ;

__attribute__((used)) static void FUNC_1(char **VAR_0, const char *VAR_1, unsigned char *VAR_2, size_t VAR_3)
{
 unsigned char *VAR_4;

 FUNC_0(VAR_0, "%s", VAR_1);
 for (VAR_4 = VAR_2; VAR_4 < VAR_2 + VAR_3; VAR_4++) {
  FUNC_0(VAR_0, "0x%02x", *VAR_4 & 0xff);
  if (VAR_4 < VAR_2 + VAR_3 - 1)
   FUNC_0(VAR_0, " ");
 }

}
