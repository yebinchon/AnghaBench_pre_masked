
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct fuse_conn {int* scramble_key; } ;
typedef scalar_t__ fl_owner_t ;



u64 FUNC_0(struct fuse_conn *VAR_0, fl_owner_t VAR_1)
{
 u32 *VAR_2 = VAR_0->scramble_key;
 u64 VAR_3 = (unsigned long) VAR_1;
 u32 VAR_4 = VAR_3;
 u32 VAR_5 = VAR_3 >> 32;
 u32 VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 32; VAR_7++) {
  VAR_4 += ((VAR_5 << 4 ^ VAR_5 >> 5) + VAR_5) ^ (VAR_6 + VAR_2[VAR_6 & 3]);
  VAR_6 += 0x9E3779B9;
  VAR_5 += ((VAR_4 << 4 ^ VAR_4 >> 5) + VAR_4) ^ (VAR_6 + VAR_2[VAR_6>>11 & 3]);
 }

 return (u64) VAR_4 + ((u64) VAR_5 << 32);
}
