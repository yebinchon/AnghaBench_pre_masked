
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv50_disp_priv {int dummy; } ;


 int FUNC_0 (struct nv50_disp_priv*,char*,int,int,int,int) ;
 int FUNC_1 (struct nv50_disp_priv*,int) ;
 int FUNC_2 (struct nv50_disp_priv*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct nv50_disp_priv *VAR_0)
{
 u32 VAR_1 = (FUNC_1(VAR_0, 0x610020) & 0x001f0000) >> 16;
 u32 VAR_2, VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 5; VAR_4++) {
  if (!(VAR_1 & (1 << VAR_4)))
   continue;

  FUNC_2(VAR_0, 0x610020, 0x00010000 << VAR_4);
  VAR_2 = FUNC_1(VAR_0, 0x610080 + (VAR_4 * 0x08));
  VAR_3 = FUNC_1(VAR_0, 0x610084 + (VAR_4 * 0x08));
  FUNC_2(VAR_0, 0x610080 + (VAR_4 * 0x08), 0x90000000);

  FUNC_0(VAR_0, "chid %d mthd 0x%04x data 0x%08x 0x%08x\n",
    VAR_4, VAR_2 & 0xffc, VAR_3, VAR_2);
 }
}
