
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (int) ;

__attribute__((used)) static __inline__ u32 FUNC_1(u64 VAR_0)
{
 u32 VAR_1 = (u32)(VAR_0>>32);
 u32 VAR_2 = (u32)(VAR_0&-1);
 u32 VAR_3 = FUNC_0(VAR_1);
 if(VAR_3>=32) VAR_3 += FUNC_0(VAR_2);

 return VAR_3;
}
