
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_gpuobj {int addr; } ;


 int FUNC_0 (struct nouveau_gpuobj*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct nouveau_gpuobj *VAR_0, u32 VAR_1,
  struct nouveau_gpuobj *VAR_2[2])
{
 u32 VAR_3[2] = { 0, 0 };

 if (VAR_2[0])
  VAR_3[1] = 0x00000001 | (VAR_2[0]->addr >> 8);
 if (VAR_2[1])
  VAR_3[0] = 0x00000001 | (VAR_2[1]->addr >> 8);

 FUNC_0(VAR_0, (VAR_1 * 8) + 0, VAR_3[0]);
 FUNC_0(VAR_0, (VAR_1 * 8) + 4, VAR_3[1]);
}
