
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static u64 FUNC_1(u32 VAR_0)
{
 u64 VAR_1 = ((u64)(VAR_0 & 0xFFE00000u)) << 2;


 switch ((VAR_0 >> 4) & 0xFFF) {
 case 0:
  return 0;
 case 0xffc:
  return VAR_1 + 0x000800000ull;
 case 0xff8:
  return VAR_1 + 0x001000000ull;
 case 0xff0:
  return VAR_1 + 0x002000000ull;
 case 0xfe0:
  return VAR_1 + 0x004000000ull;
 case 0xfc0:
  return VAR_1 + 0x008000000ull;
 case 0xf80:
  return VAR_1 + 0x010000000ull;
 case 0xf00:
  return VAR_1 + 0x020000000ull;
 case 0xe00:
  return VAR_1 + 0x040000000ull;
 case 0xc00:
  return VAR_1 + 0x080000000ull;
 case 0x800:
  return VAR_1 + 0x100000000ull;
 }
 FUNC_0("Memory BAS value 0x%08x unsupported !\n", VAR_0);
 return 0;
}
