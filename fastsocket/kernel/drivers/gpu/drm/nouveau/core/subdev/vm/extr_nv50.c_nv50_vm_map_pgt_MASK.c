
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nouveau_gpuobj {int addr; int size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nouveau_gpuobj*,int,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_gpuobj *VAR_0, u32 VAR_1,
  struct nouveau_gpuobj *VAR_2[2])
{
 u64 VAR_3 = 0xdeadcafe00000000ULL;
 u32 VAR_4 = 0;

 if (VAR_2[0]) {
  VAR_3 = 0x00000003 | VAR_2[0]->addr;
  VAR_4 = (VAR_2[0]->size >> 3) << 12;
 } else
 if (VAR_2[1]) {
  VAR_3 = 0x00000001 | VAR_2[1]->addr;
  VAR_4 = (VAR_2[1]->size >> 3) << 16;
 }

 if (VAR_3 & 1) {
  if (VAR_4 <= 32 * 1024 * 1024)
   VAR_3 |= 0x60;
  else if (VAR_4 <= 64 * 1024 * 1024)
   VAR_3 |= 0x40;
  else if (VAR_4 <= 128 * 1024 * 1024)
   VAR_3 |= 0x20;
 }

 FUNC_1(VAR_0, (VAR_1 * 8) + 0, FUNC_0(VAR_3));
 FUNC_1(VAR_0, (VAR_1 * 8) + 4, FUNC_2(VAR_3));
}
