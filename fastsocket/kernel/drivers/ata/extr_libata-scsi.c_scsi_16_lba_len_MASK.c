
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(const u8 *VAR_0, u64 *VAR_1, u32 *VAR_2)
{
 u64 VAR_3 = 0;
 u32 VAR_4 = 0;

 FUNC_0("sixteen-byte command\n");

 VAR_3 |= ((u64)VAR_0[2]) << 56;
 VAR_3 |= ((u64)VAR_0[3]) << 48;
 VAR_3 |= ((u64)VAR_0[4]) << 40;
 VAR_3 |= ((u64)VAR_0[5]) << 32;
 VAR_3 |= ((u64)VAR_0[6]) << 24;
 VAR_3 |= ((u64)VAR_0[7]) << 16;
 VAR_3 |= ((u64)VAR_0[8]) << 8;
 VAR_3 |= ((u64)VAR_0[9]);

 VAR_4 |= ((u32)VAR_0[10]) << 24;
 VAR_4 |= ((u32)VAR_0[11]) << 16;
 VAR_4 |= ((u32)VAR_0[12]) << 8;
 VAR_4 |= ((u32)VAR_0[13]);

 *VAR_1 = VAR_3;
 *VAR_2 = VAR_4;
}
