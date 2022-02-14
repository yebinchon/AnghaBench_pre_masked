
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv04_vmmgr_priv {int null; } ;
struct nouveau_gpuobj {int dummy; } ;


 scalar_t__ FUNC_0 (struct nouveau_gpuobj*) ;
 int FUNC_1 (struct nouveau_gpuobj*,int ,int *,int,int) ;
 int FUNC_2 (struct nouveau_gpuobj*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_gpuobj *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct nv04_vmmgr_priv *VAR_3 = (void *)FUNC_0(VAR_0);

 if (VAR_1 & 3) {
  u32 VAR_4 = 4 - (VAR_1 & 3);
  u32 VAR_5 = (VAR_2 > VAR_4) ? VAR_4 : VAR_2;
  FUNC_1(VAR_0, VAR_3->null, ((void*)0), VAR_1, VAR_5);
  VAR_1 += VAR_5;
  VAR_2 -= VAR_5;
 }

 while (VAR_2 >= 4) {
  FUNC_2(VAR_0, VAR_1++ * 4, 0x00000000);
  FUNC_2(VAR_0, VAR_1++ * 4, 0x00000000);
  FUNC_2(VAR_0, VAR_1++ * 4, 0x00000000);
  FUNC_2(VAR_0, VAR_1++ * 4, 0x00000000);
  VAR_2 -= 4;
 }

 if (VAR_2)
  FUNC_1(VAR_0, VAR_3->null, ((void*)0), VAR_1, VAR_2);
}
