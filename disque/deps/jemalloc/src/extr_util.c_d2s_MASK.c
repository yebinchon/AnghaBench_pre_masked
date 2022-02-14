
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int intmax_t ;


 int FUNC_0 () ;
 char* FUNC_1 (int ,int,int,char*,size_t*) ;

__attribute__((used)) static char *
FUNC_2(intmax_t VAR_0, char VAR_1, char *VAR_2, size_t *VAR_3)
{
 bool VAR_4;

 if ((VAR_4 = (VAR_0 < 0)))
  VAR_0 = -VAR_0;
 VAR_2 = FUNC_1(VAR_0, 10, 0, VAR_2, VAR_3);
 if (VAR_4)
  VAR_1 = '-';
 switch (VAR_1) {
 case '-':
  if (!VAR_4)
   break;

 case ' ':
 case '+':
  VAR_2--;
  (*VAR_3)++;
  *VAR_2 = VAR_1;
  break;
 default: FUNC_0();
 }
 return (VAR_2);
}
