
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct r8180_priv {scalar_t__ card_type; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct net_device*) ;
 struct r8180_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct net_device*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_7, u8 VAR_8, u16 VAR_9)
{
 int VAR_10;
 u16 VAR_11, VAR_12;
 u8 VAR_13;
 u32 VAR_14 = (VAR_9 << 4) | (VAR_8 & 0xf);
 struct r8180_priv *VAR_15 = FUNC_1(VAR_7);

 VAR_11 = FUNC_3(VAR_7, VAR_3) & 0xfff3;

 FUNC_6(VAR_7, VAR_2,
  (FUNC_3(VAR_7, VAR_2) | 0x7));

 VAR_12 = FUNC_3(VAR_7, VAR_4);

 FUNC_6(VAR_7, VAR_4, VAR_12 | 0x7 |
  ((VAR_15->card_type == VAR_6) ? 0 : VAR_5));

 FUNC_0(VAR_7);
 FUNC_5(10);

 FUNC_6(VAR_7, VAR_3, VAR_11 | VAR_1);

 FUNC_0(VAR_7);
 FUNC_5(2);

 FUNC_6(VAR_7, VAR_3, VAR_11);

 FUNC_0(VAR_7);
 FUNC_5(10);

 for (VAR_10 = 15; VAR_10 >= 0; VAR_10--) {
  VAR_13 = (VAR_14 & (1 << VAR_10)) >> VAR_10;

  FUNC_6(VAR_7, VAR_3, VAR_13 | VAR_11);

  FUNC_6(VAR_7, VAR_3, VAR_13 | VAR_11 | VAR_0);
  FUNC_6(VAR_7, VAR_3, VAR_13 | VAR_11 | VAR_0);

  VAR_10--;
  VAR_13 = (VAR_14 & (1 << VAR_10)) >> VAR_10;

  FUNC_6(VAR_7, VAR_3, VAR_13 | VAR_11 | VAR_0);
  FUNC_6(VAR_7, VAR_3, VAR_13 | VAR_11 | VAR_0);

  FUNC_6(VAR_7, VAR_3, VAR_13 | VAR_11);

 }

 FUNC_6(VAR_7, VAR_3, VAR_11 | VAR_1);

 FUNC_0(VAR_7);
 FUNC_5(10);

 FUNC_6(VAR_7, VAR_3, VAR_11 |
  ((VAR_15->card_type == VAR_6) ? 4 : VAR_1));

 FUNC_6(VAR_7, VAR_4, VAR_12 |
  ((VAR_15->card_type == VAR_6) ? 0 : VAR_5));

 if (VAR_15->card_type == VAR_6)
  FUNC_2(2);
 else
  FUNC_4(VAR_7);
}
