
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_gpuobj {int dummy; } ;


 int FUNC_0 (struct nouveau_gpuobj*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct nouveau_gpuobj *VAR_0, u32 VAR_1, u32 VAR_2)
{
 VAR_1 = VAR_1 * 4;
 while (VAR_2--) {
  FUNC_0(VAR_0, VAR_1, 0x00000000);
  VAR_1 += 4;
 }
}
