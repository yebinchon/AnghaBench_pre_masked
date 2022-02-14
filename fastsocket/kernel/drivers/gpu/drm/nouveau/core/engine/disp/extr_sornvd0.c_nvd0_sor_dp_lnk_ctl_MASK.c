
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv50_disp_priv {int dummy; } ;
struct nouveau_disp {int dummy; } ;
struct dcb_output {int dummy; } ;


 int FUNC_0 (struct nv50_disp_priv*,int const,int,int) ;
 int FUNC_1 (struct nv50_disp_priv*,int) ;
 int FUNC_2 (struct dcb_output*) ;
 int FUNC_3 (struct dcb_output*) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_disp *VAR_0, struct dcb_output *VAR_1,
      int VAR_2, int VAR_3, int VAR_4, bool VAR_5)
{
 struct nv50_disp_priv *VAR_6 = (void *)VAR_0;
 const u32 VAR_7 = FUNC_3(VAR_1);
 const u32 VAR_8 = FUNC_2(VAR_1);
 u32 VAR_9 = 0x00000000;
 u32 VAR_10 = 0x00000000;
 u32 VAR_11 = 0;
 int VAR_12;

 VAR_10 |= VAR_4 << 18;
 VAR_9 |= ((1 << VAR_3) - 1) << 16;
 if (VAR_5)
  VAR_9 |= 0x00004000;

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
  VAR_11 |= 1 << (FUNC_1(VAR_6, VAR_12) >> 3);

 FUNC_0(VAR_6, 0x612300 + VAR_7, 0x007c0000, VAR_10);
 FUNC_0(VAR_6, 0x61c10c + VAR_8, 0x001f4000, VAR_9);
 FUNC_0(VAR_6, 0x61c130 + VAR_8, 0x0000000f, VAR_11);
 return 0;
}
