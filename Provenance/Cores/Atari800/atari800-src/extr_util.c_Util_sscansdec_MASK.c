
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;

int FUNC_1(char const *VAR_2, int *VAR_3)
{
 int VAR_4 = VAR_0;
 switch(*VAR_2) {
 case '-':
  VAR_4 = VAR_1;

 case '+':
  ++VAR_2;
 }
 *VAR_3 = FUNC_0(VAR_2);
 if (*VAR_3 == -1)
  return VAR_0;
 if (VAR_4)
  *VAR_3 = -*VAR_3;
 return VAR_1;
}
