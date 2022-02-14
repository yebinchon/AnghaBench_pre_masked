
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nv50_disp_priv {int dummy; } ;
struct nouveau_disp {int dummy; } ;
struct dcb_output {int dummy; } ;


 scalar_t__ FUNC_0 (struct dcb_output*) ;
 int FUNC_1 (struct nv50_disp_priv*,scalar_t__ const,int,int) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_disp *VAR_0, struct dcb_output *VAR_1,
      int VAR_2, int VAR_3)
{
 struct nv50_disp_priv *VAR_4 = (void *)VAR_0;
 const u32 VAR_5 = FUNC_0(VAR_1);
 FUNC_1(VAR_4, 0x61c10c + VAR_5, 0x0f000000, VAR_3 << 24);
 return 0;
}
