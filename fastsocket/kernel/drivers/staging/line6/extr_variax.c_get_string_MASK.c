
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static ssize_t FUNC_1(char *VAR_0, const char *VAR_1, int VAR_2)
{
 int VAR_3;
 FUNC_0(VAR_0, VAR_1, VAR_2);

 for (VAR_3 = VAR_2; VAR_3--;) {
  char VAR_4 = VAR_0[VAR_3];

  if ((VAR_4 != 0) && (VAR_4 != ' '))
   break;
 }

 VAR_0[VAR_3 + 1] = '\n';
 return VAR_3 + 2;
}
