
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ethtool_wolinfo {int wolopts; } ;
struct cp_private {int wol_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2 (struct cp_private *VAR_15,
      const struct ethtool_wolinfo *VAR_16)
{
 u8 VAR_17;

 VAR_17 = FUNC_0 (VAR_4) & ~(VAR_6 | VAR_8);

 if (VAR_16->wolopts) {
  if (VAR_16->wolopts & VAR_13) VAR_17 |= VAR_6;
  if (VAR_16->wolopts & VAR_11) VAR_17 |= VAR_8;
 }

 FUNC_1 (VAR_1, VAR_3);
 FUNC_1 (VAR_4, VAR_17);
 FUNC_1 (VAR_1, VAR_2);

 VAR_17 = 0;
 VAR_17 = FUNC_0 (VAR_5) & ~(VAR_9 | VAR_7 | VAR_0);

 if (VAR_16->wolopts) {
  if (VAR_16->wolopts & VAR_14) VAR_17 |= VAR_9;
  if (VAR_16->wolopts & VAR_10) VAR_17 |= VAR_0;
  if (VAR_16->wolopts & VAR_12) VAR_17 |= VAR_7;
 }

 FUNC_1 (VAR_5, VAR_17);

 VAR_15->wol_enabled = (VAR_16->wolopts) ? 1 : 0;

 return 0;
}
