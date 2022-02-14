
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv04_timer_priv {int base; } ;
struct nouveau_subdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nv04_timer_priv*,char*,int) ;
 int FUNC_2 (struct nv04_timer_priv*,int ) ;
 int FUNC_3 (struct nv04_timer_priv*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct nouveau_subdev *VAR_1)
{
 struct nv04_timer_priv *VAR_2 = (void *)VAR_1;
 u32 VAR_3 = FUNC_2(VAR_2, VAR_0);

 if (VAR_3 & 0x00000001) {
  FUNC_0(&VAR_2->base);
  FUNC_3(VAR_2, VAR_0, 0x00000001);
  VAR_3 &= ~0x00000001;
 }

 if (VAR_3) {
  FUNC_1(VAR_2, "unknown stat 0x%08x\n", VAR_3);
  FUNC_3(VAR_2, VAR_0, VAR_3);
 }
}
