
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ks_net {int rc_rxqcr; scalar_t__ all_mcast; scalar_t__ promiscuous; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct ks_net*,int ) ;
 int FUNC_1 (struct ks_net*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ks_net *VAR_25)
{
 u16 VAR_26;






 FUNC_1(VAR_25, VAR_6, VAR_24);


 FUNC_1(VAR_25, VAR_3, VAR_18);


 FUNC_1(VAR_25, VAR_2, 1 & VAR_17);


 VAR_25->rc_rxqcr = VAR_19;
 FUNC_1(VAR_25, VAR_4, VAR_25->rc_rxqcr);







 VAR_26 = FUNC_0(VAR_25, VAR_0);
 VAR_26 &= ~VAR_7;
 FUNC_1(VAR_25, VAR_0, VAR_26);

 VAR_26 = VAR_22 | VAR_23 | VAR_21 | VAR_20;
 FUNC_1(VAR_25, VAR_5, VAR_26);

 VAR_26 = VAR_10 | VAR_9 | VAR_16 | VAR_14 | VAR_12;

 if (VAR_25->promiscuous)
  VAR_26 |= (VAR_8 | VAR_11);
 else if (VAR_25->all_mcast)
  VAR_26 |= (VAR_8 | VAR_13 | VAR_15);
 else
  VAR_26 |= VAR_15;

 FUNC_1(VAR_25, VAR_1, VAR_26);
}
