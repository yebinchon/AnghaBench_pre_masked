
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_1)
{
 size_t VAR_2 = VAR_0;
 int VAR_3;

 if (VAR_1[0] == '/') {
  char *VAR_4;
  int VAR_5;

  VAR_4 = VAR_1;
  VAR_5 = 1;
  while (*++VAR_4 == '/')
   VAR_5++;
  FUNC_0(VAR_4, VAR_1, VAR_2 - VAR_5);
  FUNC_1(VAR_1 + VAR_2 - VAR_5, 0, VAR_5);
 }
 if (VAR_1[VAR_2 - 1])
  return (-1);
 for (VAR_3 = FUNC_2(VAR_1); VAR_3 < (int)VAR_2; VAR_3++)
  if (VAR_1[VAR_3])
   return (-1);
 return (0);
}
