
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv31_mpeg_priv {int dummy; } ;
struct nouveau_object {scalar_t__ engine; } ;
struct nouveau_instmem {int dummy; } ;


 int VAR_0 ;
 struct nouveau_instmem* FUNC_0 (struct nouveau_object*) ;
 int FUNC_1 (struct nv31_mpeg_priv*,int,int,int) ;
 int FUNC_2 (struct nouveau_instmem*,int) ;
 int FUNC_3 (struct nv31_mpeg_priv*,int,int) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_object *VAR_1, u32 VAR_2, void *VAR_3, u32 VAR_4)
{
 struct nouveau_instmem *VAR_5 = FUNC_0(VAR_1);
 struct nv31_mpeg_priv *VAR_6 = (void *)VAR_1->engine;
 u32 VAR_7 = *(u32 *)VAR_3 << 4;
 u32 VAR_8 = FUNC_2(VAR_5, VAR_7 + 0);
 u32 VAR_9 = FUNC_2(VAR_5, VAR_7 + 4);
 u32 VAR_10 = FUNC_2(VAR_5, VAR_7 + 8);
 u32 VAR_11 = (VAR_10 & 0xfffff000) | (VAR_8 >> 20);
 u32 VAR_12 = VAR_9 + 1;


 if (!(VAR_8 & 0x00002000))
  return -VAR_0;

 if (VAR_2 == 0x0190) {

  FUNC_1(VAR_6, 0x00b300, 0x00030000, (VAR_8 & 0x00030000));
  FUNC_3(VAR_6, 0x00b334, VAR_11);
  FUNC_3(VAR_6, 0x00b324, VAR_12);
 } else
 if (VAR_2 == 0x01a0) {

  FUNC_1(VAR_6, 0x00b300, 0x000c0000, (VAR_8 & 0x00030000) << 2);
  FUNC_3(VAR_6, 0x00b360, VAR_11);
  FUNC_3(VAR_6, 0x00b364, VAR_12);
 } else {

  if (VAR_8 & 0x000c0000)
   return -VAR_0;

  FUNC_3(VAR_6, 0x00b370, VAR_11);
  FUNC_3(VAR_6, 0x00b374, VAR_12);
 }

 return 0;
}
