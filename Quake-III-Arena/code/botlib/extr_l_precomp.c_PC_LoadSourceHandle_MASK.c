
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int source_t ;


 int * FUNC_0 (char const*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int ** VAR_1 ;

int FUNC_2(const char *VAR_2)
{
 source_t *VAR_3;
 int VAR_4;

 for (VAR_4 = 1; VAR_4 < VAR_0; VAR_4++)
 {
  if (!VAR_1[VAR_4])
   break;
 }
 if (VAR_4 >= VAR_0)
  return 0;
 FUNC_1("");
 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3)
  return 0;
 VAR_1[VAR_4] = VAR_3;
 return VAR_4;
}
