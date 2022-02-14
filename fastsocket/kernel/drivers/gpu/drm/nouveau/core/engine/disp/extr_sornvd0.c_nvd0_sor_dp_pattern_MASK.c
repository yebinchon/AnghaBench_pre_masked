
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nv50_disp_priv {int dummy; } ;
struct nouveau_disp {int dummy; } ;
struct dcb_output {int dummy; } ;


 int FUNC_0 (struct nv50_disp_priv*,scalar_t__ const,int,int) ;
 scalar_t__ FUNC_1 (struct dcb_output*) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_disp *VAR_0, struct dcb_output *VAR_1,
      int VAR_2, int VAR_3)
{
 struct nv50_disp_priv *VAR_4 = (void *)VAR_0;
 const u32 VAR_5 = FUNC_1(VAR_1);
 FUNC_0(VAR_4, 0x61c110 + VAR_5, 0x0f0f0f0f, 0x01010101 * VAR_3);
 return 0;
}
