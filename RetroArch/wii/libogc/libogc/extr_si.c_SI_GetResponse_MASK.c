
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef size_t s32 ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__** VAR_0 ;
 scalar_t__* VAR_1 ;

u32 FUNC_3(s32 VAR_2,void *VAR_3)
{
 u32 VAR_4,VAR_5;
 FUNC_1(VAR_4);
 FUNC_0(VAR_2);
 VAR_5 = VAR_1[VAR_2];
 VAR_1[VAR_2] = 0;
 if(VAR_5) {
  ((u32*)VAR_3)[0] = VAR_0[VAR_2][0];
  ((u32*)VAR_3)[1] = VAR_0[VAR_2][1];
 }
 FUNC_2(VAR_4);
 return VAR_5;
}
