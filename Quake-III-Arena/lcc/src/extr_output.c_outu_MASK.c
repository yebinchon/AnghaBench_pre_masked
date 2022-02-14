
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* FUNC_0 (char*,int *,char*) ;

__attribute__((used)) static char *FUNC_1(unsigned long VAR_0, int VAR_1, FILE *VAR_2, char *VAR_3) {
 char VAR_4[25], *VAR_5 = VAR_4 + sizeof VAR_4;

 *--VAR_5 = '\0';
 do
  *--VAR_5 = "0123456789abcdef"[VAR_0%VAR_1];
 while ((VAR_0 /= VAR_1) != 0);
 return FUNC_0(VAR_5, VAR_2, VAR_3);
}
