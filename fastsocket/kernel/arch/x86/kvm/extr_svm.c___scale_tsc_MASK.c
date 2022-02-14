
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



__attribute__((used)) static u64 FUNC_0(u64 VAR_0, u64 VAR_1)
{
 u64 VAR_2, VAR_3, VAR_4;

 VAR_2 = VAR_0 >> 32;
 VAR_3 = VAR_0 & ((1ULL << 32) - 1);

 VAR_4 = VAR_1;
 VAR_4 *= VAR_2;
 VAR_4 += (VAR_1 >> 32) * VAR_3;
 VAR_4 += ((VAR_1 & ((1ULL << 32) - 1)) * VAR_3) >> 32;

 return VAR_4;
}
