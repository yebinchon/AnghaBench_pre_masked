
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(uint32_t VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 if (!&FUNC_0)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if ((VAR_4 = FUNC_0()) == -1)
   break;
  VAR_1[VAR_3] = VAR_4;
 }

 return VAR_3;
}
