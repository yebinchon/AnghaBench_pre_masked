
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t int32 ;
typedef int MultiConnection ;


 int ** VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static int32
FUNC_0(void)
{
 int32 VAR_3 = VAR_1;
 int32 VAR_4 = 0;


 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {
  MultiConnection *VAR_5 = VAR_0[VAR_4];
  if (VAR_5 == ((void*)0))
  {
   VAR_3 = VAR_4;
   break;
  }
 }

 return VAR_3;
}
