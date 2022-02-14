
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct bcm_enet_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcm_enet_priv*,int) ;

__attribute__((used)) static int FUNC_1(struct bcm_enet_priv *VAR_5, int VAR_6,
          int VAR_7, u16 VAR_8)
{
 u32 VAR_9;

 VAR_9 = (VAR_8 & 0xffff) << VAR_0;
 VAR_9 |= 0x2 << VAR_4;
 VAR_9 |= VAR_7 << VAR_3;
 VAR_9 |= VAR_6 << VAR_2;
 VAR_9 |= VAR_1;

 (void)FUNC_0(VAR_5, VAR_9);
 return 0;
}
