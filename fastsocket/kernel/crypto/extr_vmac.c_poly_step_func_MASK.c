
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_1(u64 *VAR_10, u64 *VAR_11,
   const u64 *VAR_12, const u64 *VAR_13,
   const u64 *VAR_14, const u64 *VAR_15)
{
 u64 VAR_16, VAR_17, VAR_18;
 u32 VAR_19;

 VAR_16 = FUNC_0((*(((u32 *)VAR_10)+VAR_0)), (*(((u32 *)VAR_12)+VAR_0)));
 VAR_16 += VAR_16;
 VAR_16 += *(u64 *)VAR_14;
 VAR_16 += FUNC_0((*(((u32 *)VAR_11)+VAR_1)), (*(((u32 *)VAR_12)+VAR_1)));
 VAR_16 += FUNC_0((*(((u32 *)VAR_11)+VAR_0)), (*(((u32 *)VAR_13)+VAR_0)));
 VAR_16 += FUNC_0((*(((u32 *)VAR_10)+VAR_1)), (*(((u32 *)VAR_13)+VAR_1)));
 VAR_18 = (u32)(VAR_16);
 VAR_16 >>= 32;
 VAR_16 += FUNC_0((*(((u32 *)VAR_11)+VAR_1)), (*(((u32 *)VAR_12)+VAR_0)));
 VAR_16 += FUNC_0((*(((u32 *)VAR_11)+VAR_0)), (*(((u32 *)VAR_12)+VAR_1)));
 VAR_16 += FUNC_0((*(((u32 *)VAR_10)+VAR_1)), (*(((u32 *)VAR_13)+VAR_0)));
 VAR_16 += FUNC_0((*(((u32 *)VAR_10)+VAR_0)), (*(((u32 *)VAR_13)+VAR_1)));
 VAR_18 |= ((u64)((u32)VAR_16 & 0x7fffffff)) << 32;
 VAR_16 >>= 31;
 VAR_16 += (u64)(((u32 *)VAR_15)[VAR_1]);
 VAR_16 += FUNC_0((*(((u32 *)VAR_11)+VAR_1)), (*(((u32 *)VAR_13)+VAR_1)));
 VAR_17 = FUNC_0((*(((u32 *)VAR_11)+VAR_0)), (*(((u32 *)VAR_12)+VAR_0)));
 VAR_17 += FUNC_0((*(((u32 *)VAR_10)+VAR_1)), (*(((u32 *)VAR_12)+VAR_1)));
 VAR_17 += FUNC_0((*(((u32 *)VAR_10)+VAR_0)), (*(((u32 *)VAR_13)+VAR_0)));
 VAR_17 += VAR_17;
 VAR_16 += VAR_17;
 VAR_19 = (u32)(VAR_16);
 VAR_16 >>= 32;
 VAR_16 += (u64)(((u32 *)VAR_15)[VAR_0]);
 VAR_16 += FUNC_0((*(((u32 *)VAR_11)+VAR_1)), (*(((u32 *)VAR_13)+VAR_0)));
 VAR_16 += FUNC_0((*(((u32 *)VAR_11)+VAR_0)), (*(((u32 *)VAR_13)+VAR_1)));
 VAR_17 = FUNC_0((*(((u32 *)VAR_10)+VAR_1)), (*(((u32 *)VAR_12)+VAR_0)));
 VAR_17 += FUNC_0((*(((u32 *)VAR_10)+VAR_0)), (*(((u32 *)VAR_12)+VAR_1)));
 VAR_17 += VAR_17;
 VAR_16 += VAR_17;
 *(u64 *)(VAR_11) = (VAR_16 << 32) | VAR_19;
 VAR_16 >>= 32;
 *(u64 *)(VAR_10) = VAR_16 + VAR_18;
}
