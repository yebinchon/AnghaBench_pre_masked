
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_enet_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bcm_enet_priv*,int ) ;
 int FUNC_2 (struct bcm_enet_priv*,int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct bcm_enet_priv *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_1, 0, FUNC_0(VAR_2));

 VAR_3 = 1000;
 do {
  u32 VAR_4;

  VAR_4 = FUNC_1(VAR_1, FUNC_0(VAR_2));
  if (!(VAR_4 & VAR_0))
   break;
  FUNC_3(1);
 } while (VAR_3--);
}
