
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,...) ;

void FUNC_1(char **VAR_0, int VAR_1)
{
 int VAR_2;

 FUNC_0("[+] Debug %d strings:\n", VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2)
  FUNC_0("String %d'th: %s\n", VAR_2+1, VAR_0[VAR_2]);
}
