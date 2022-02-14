
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;


 char* FUNC_0 (int ,int,int,char*,size_t*) ;

__attribute__((used)) static char *
FUNC_1(uintmax_t VAR_0, bool VAR_1, char *VAR_2, size_t *VAR_3)
{

 VAR_2 = FUNC_0(VAR_0, 8, 0, VAR_2, VAR_3);
 if (VAR_1 && *VAR_2 != '0') {
  VAR_2--;
  (*VAR_3)++;
  *VAR_2 = '0';
 }
 return (VAR_2);
}
