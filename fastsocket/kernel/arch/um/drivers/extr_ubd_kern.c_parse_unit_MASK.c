
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char**,int ) ;

__attribute__((used)) static int FUNC_2(char **VAR_0)
{
 char *VAR_1 = *VAR_0, *VAR_2;
 int VAR_3 = -1;

 if(FUNC_0(*VAR_1)) {
  VAR_3 = FUNC_1(VAR_1, &VAR_2, 0);
  if(VAR_2 == VAR_1)
   return -1;
  *VAR_0 = VAR_2;
 }
 else if (('a' <= *VAR_1) && (*VAR_1 <= 'z')) {
  VAR_3 = *VAR_1 - 'a';
  VAR_1++;
  *VAR_0 = VAR_1;
 }
 return VAR_3;
}
