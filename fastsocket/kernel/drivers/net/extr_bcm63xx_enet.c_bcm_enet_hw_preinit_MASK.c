
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_enet_priv {scalar_t__ use_external_mii; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bcm_enet_priv*) ;
 int FUNC_1 (struct bcm_enet_priv*,int ) ;
 int FUNC_2 (struct bcm_enet_priv*,int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct bcm_enet_priv *VAR_8)
{
 u32 VAR_9;
 int VAR_10;


 FUNC_0(VAR_8);


 VAR_9 = VAR_2;
 FUNC_2(VAR_8, VAR_9, VAR_1);
 FUNC_4();

 VAR_10 = 1000;
 do {
  VAR_9 = FUNC_1(VAR_8, VAR_1);
  if (!(VAR_9 & VAR_2))
   break;
  FUNC_3(1);
 } while (VAR_10--);


 VAR_9 = FUNC_1(VAR_8, VAR_1);
 if (VAR_8->use_external_mii)
  VAR_9 |= VAR_0;
 else
  VAR_9 &= ~VAR_0;
 FUNC_2(VAR_8, VAR_9, VAR_1);


 FUNC_2(VAR_8, (0x1f << VAR_5) |
      VAR_6, VAR_7);


 VAR_9 = FUNC_1(VAR_8, VAR_4);
 VAR_9 |= VAR_3;
 FUNC_2(VAR_8, VAR_9, VAR_4);
}
