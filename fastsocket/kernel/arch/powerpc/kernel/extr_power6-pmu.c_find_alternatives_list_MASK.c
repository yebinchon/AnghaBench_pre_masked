
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;


 int FUNC_0 (unsigned int**) ;
 int VAR_0 ;
 unsigned int** VAR_1 ;

__attribute__((used)) static int FUNC_1(u64 VAR_2)
{
 int VAR_3, VAR_4;
 unsigned int VAR_5;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); ++VAR_3) {
  if (VAR_2 < VAR_1[VAR_3][0])
   return -1;
  for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
   VAR_5 = VAR_1[VAR_3][VAR_4];
   if (!VAR_5 || VAR_2 < VAR_5)
    break;
   if (VAR_2 == VAR_5)
    return VAR_3;
  }
 }
 return -1;
}
