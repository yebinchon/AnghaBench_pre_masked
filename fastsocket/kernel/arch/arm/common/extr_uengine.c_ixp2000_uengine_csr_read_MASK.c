
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 void* FUNC_1 (int) ;

u32 FUNC_2(int VAR_1, int VAR_2)
{
 void *VAR_3;
 u32 *VAR_4;
 u32 *VAR_5;
 u32 VAR_6;

 VAR_3 = FUNC_1(VAR_1);

 VAR_4 = (u32 *)(VAR_3 + VAR_0);
 VAR_5 = (u32 *)(VAR_3 + VAR_2);
 do {
  VAR_6 = FUNC_0(VAR_5);
 } while (FUNC_0(VAR_4) & 1);

 return VAR_6;
}
