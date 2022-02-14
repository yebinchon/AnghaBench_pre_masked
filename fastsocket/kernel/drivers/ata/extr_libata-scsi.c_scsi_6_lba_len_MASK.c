
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(const u8 *VAR_0, u64 *VAR_1, u32 *VAR_2)
{
 u64 VAR_3 = 0;
 u32 VAR_4;

 FUNC_0("six-byte command\n");

 VAR_3 |= ((u64)(VAR_0[1] & 0x1f)) << 16;
 VAR_3 |= ((u64)VAR_0[2]) << 8;
 VAR_3 |= ((u64)VAR_0[3]);

 VAR_4 = VAR_0[4];

 *VAR_1 = VAR_3;
 *VAR_2 = VAR_4;
}
