
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;


 size_t VAR_0 ;
 size_t* VAR_1 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_2)
{
 u32 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1[VAR_3] == VAR_2)
   break;

 if ((VAR_3 == VAR_0) || (VAR_1[VAR_3] == -1))
  VAR_3 = -1;

 return VAR_3;
}
