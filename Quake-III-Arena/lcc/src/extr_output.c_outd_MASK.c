
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* FUNC_0 (char*,int *,char*) ;

__attribute__((used)) static char *FUNC_1(long VAR_0, FILE *VAR_1, char *VAR_2) {
 unsigned long VAR_3;
 char VAR_4[25], *VAR_5 = VAR_4 + sizeof VAR_4;

 *--VAR_5 = '\0';
 if (VAR_0 < 0)
  VAR_3 = -VAR_0;
 else
  VAR_3 = VAR_0;
 do
  *--VAR_5 = VAR_3%10 + '0';
 while ((VAR_3 /= 10) != 0);
 if (VAR_0 < 0)
  *--VAR_5 = '-';
 return FUNC_0(VAR_5, VAR_1, VAR_2);
}
