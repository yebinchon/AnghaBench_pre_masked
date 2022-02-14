
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_mac_stats {int tx_control; int rx_control; scalar_t__ rx_good_bytes; scalar_t__ rx_bytes; int rx_bad_bytes; scalar_t__ tx_bad_bytes; scalar_t__ tx_bytes; int tx_good_bytes; } ;
struct efx_nic {struct efx_mac_stats mac_stats; } ;


 int FUNC_0 (struct efx_nic*,int ,int ) ;
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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;

void FUNC_2(struct efx_nic *VAR_90)
{
 struct efx_mac_stats *VAR_91 = &VAR_90->mac_stats;


 FUNC_0(VAR_90, VAR_9, VAR_57);
 FUNC_0(VAR_90, VAR_10, VAR_60);
 FUNC_0(VAR_90, VAR_13, VAR_67);
 FUNC_0(VAR_90, VAR_21, VAR_59);
 FUNC_0(VAR_90, VAR_1, VAR_56);
 FUNC_0(VAR_90, VAR_8, VAR_65);
 FUNC_0(VAR_90, VAR_25, VAR_70);
 FUNC_0(VAR_90, VAR_24, VAR_64);
 FUNC_0(VAR_90, VAR_11, VAR_61);
 FUNC_0(VAR_90, VAR_6, VAR_54);
 FUNC_0(VAR_90, VAR_23, VAR_55);
 FUNC_0(VAR_90, VAR_3, VAR_66);
 FUNC_0(VAR_90, VAR_4, VAR_53);
 FUNC_0(VAR_90, VAR_0, VAR_52);
 FUNC_0(VAR_90, VAR_22, VAR_69);
 FUNC_0(VAR_90, VAR_5, VAR_62);
 FUNC_0(VAR_90, VAR_2, VAR_58);
 FUNC_0(VAR_90, VAR_12, VAR_68);
 FUNC_0(VAR_90, VAR_19, VAR_50);
 FUNC_0(VAR_90, VAR_20, VAR_51);
 FUNC_0(VAR_90, VAR_15, VAR_46);
 FUNC_0(VAR_90, VAR_17, VAR_48);
 FUNC_0(VAR_90, VAR_18, VAR_49);
 FUNC_0(VAR_90, VAR_14, VAR_45);
 FUNC_0(VAR_90, VAR_16, VAR_47);
 FUNC_0(VAR_90, VAR_7, VAR_63);
 FUNC_0(VAR_90, VAR_35, VAR_87);
 FUNC_0(VAR_90, VAR_32, VAR_79);
 FUNC_0(VAR_90, VAR_30, VAR_85);
 FUNC_0(VAR_90, VAR_26, VAR_78);
 FUNC_0(VAR_90, VAR_44, VAR_89);
 FUNC_0(VAR_90, VAR_27, VAR_80);
 FUNC_0(VAR_90, VAR_34, VAR_88);
 FUNC_0(VAR_90, VAR_41, VAR_76);
 FUNC_0(VAR_90, VAR_42, VAR_77);
 FUNC_0(VAR_90, VAR_37, VAR_72);
 FUNC_0(VAR_90, VAR_39, VAR_74);
 FUNC_0(VAR_90, VAR_40, VAR_75);
 FUNC_0(VAR_90, VAR_36, VAR_71);
 FUNC_0(VAR_90, VAR_38, VAR_73);
 FUNC_0(VAR_90, VAR_43, VAR_83);
 FUNC_0(VAR_90, VAR_33, VAR_81);
 FUNC_0(VAR_90, VAR_31, VAR_86);
 FUNC_0(VAR_90, VAR_29, VAR_84);
 FUNC_0(VAR_90, VAR_28, VAR_82);


 FUNC_1(&VAR_91->tx_good_bytes,
        VAR_91->tx_bytes - VAR_91->tx_bad_bytes -
        VAR_91->tx_control * 64);
 FUNC_1(&VAR_91->rx_bad_bytes,
        VAR_91->rx_bytes - VAR_91->rx_good_bytes -
        VAR_91->rx_control * 64);
}
