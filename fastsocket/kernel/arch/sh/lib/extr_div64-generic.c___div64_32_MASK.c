
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (int,int) ;

uint32_t FUNC_1(u64 *VAR_0, u32 VAR_1)
{
 uint32_t VAR_2;
 uint64_t VAR_3 = FUNC_0(*VAR_0, VAR_1);

 VAR_2 = *VAR_0 - VAR_3 * VAR_1;
 *VAR_0 = VAR_3;

 return VAR_2;
}
