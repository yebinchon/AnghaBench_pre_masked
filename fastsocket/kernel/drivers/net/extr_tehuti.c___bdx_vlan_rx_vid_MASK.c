
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct bdx_priv {int dummy; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct bdx_priv*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct bdx_priv*,int,int) ;
 struct bdx_priv* FUNC_5 (struct net_device*) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_2, uint16_t VAR_3, int VAR_4)
{
 struct bdx_priv *VAR_5 = FUNC_5(VAR_2);
 u32 VAR_6, VAR_7, VAR_8;

 VAR_0;
 FUNC_0("vid=%d value=%d\n", (int)VAR_3, VAR_4);
 if (FUNC_6(VAR_3 >= 4096)) {
  FUNC_1("tehuti: invalid VID: %u (> 4096)\n", VAR_3);
  FUNC_3();
 }
 VAR_6 = VAR_1 + (VAR_3 / 32) * 4;
 VAR_7 = 1 << VAR_3 % 32;
 VAR_8 = FUNC_2(VAR_5, VAR_6);
 FUNC_0("reg=%x, val=%x, bit=%d\n", VAR_6, VAR_8, VAR_7);
 if (VAR_4)
  VAR_8 |= VAR_7;
 else
  VAR_8 &= ~VAR_7;
 FUNC_0("new val %x\n", VAR_8);
 FUNC_4(VAR_5, VAR_6, VAR_8);
 FUNC_3();
}
