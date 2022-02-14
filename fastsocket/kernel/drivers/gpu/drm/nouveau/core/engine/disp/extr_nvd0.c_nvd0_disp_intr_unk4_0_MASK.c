
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv50_disp_priv {int dummy; } ;
struct dcb_output {int dummy; } ;


 int FUNC_0 (struct nv50_disp_priv*,int,int,int,struct dcb_output*) ;
 int FUNC_1 (struct nv50_disp_priv*,int) ;

__attribute__((used)) static void
FUNC_2(struct nv50_disp_priv *VAR_0, int VAR_1)
{
 struct dcb_output VAR_2;
 u32 VAR_3 = FUNC_1(VAR_0, 0x660450 + (VAR_1 * 0x300)) / 1000;
 FUNC_0(VAR_0, VAR_1, 1, VAR_3, &VAR_2);
}
