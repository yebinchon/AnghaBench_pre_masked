
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int oldinventory ;
struct TYPE_6__ {int* stats; int* ammo; scalar_t__* powerups; int generic1; } ;
struct TYPE_7__ {int* inventory; TYPE_1__ cur_ps; } ;
typedef TYPE_2__ bot_state_t ;


 int FUNC_0 (TYPE_2__*,int*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 size_t VAR_37 ;
 size_t VAR_38 ;
 size_t VAR_39 ;
 size_t VAR_40 ;
 size_t VAR_41 ;
 size_t VAR_42 ;
 size_t VAR_43 ;
 size_t VAR_44 ;
 size_t VAR_45 ;
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
 size_t VAR_56 ;
 size_t VAR_57 ;
 size_t VAR_58 ;
 size_t VAR_59 ;
 size_t VAR_60 ;
 size_t VAR_61 ;
 size_t VAR_62 ;
 size_t VAR_63 ;
 size_t VAR_64 ;
 size_t VAR_65 ;
 size_t VAR_66 ;
 size_t VAR_67 ;
 size_t VAR_68 ;
 size_t VAR_69 ;
 scalar_t__ VAR_70 ;
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
 int FUNC_2 (int*,int*,int) ;

void FUNC_3(bot_state_t *VAR_84) {
 int VAR_85[VAR_46];

 FUNC_2(VAR_85, VAR_84->inventory, sizeof(VAR_85));

 VAR_84->inventory[VAR_1] = VAR_84->cur_ps.stats[VAR_65];

 VAR_84->inventory[VAR_13] = (VAR_84->cur_ps.stats[VAR_69] & (1 << VAR_73)) != 0;
 VAR_84->inventory[VAR_43] = (VAR_84->cur_ps.stats[VAR_69] & (1 << VAR_83)) != 0;
 VAR_84->inventory[VAR_25] = (VAR_84->cur_ps.stats[VAR_69] & (1 << VAR_77)) != 0;
 VAR_84->inventory[VAR_15] = (VAR_84->cur_ps.stats[VAR_69] & (1 << VAR_75)) != 0;
 VAR_84->inventory[VAR_39] = (VAR_84->cur_ps.stats[VAR_69] & (1 << VAR_82)) != 0;
 VAR_84->inventory[VAR_23] = (VAR_84->cur_ps.stats[VAR_69] & (1 << VAR_76)) != 0;
 VAR_84->inventory[VAR_35] = (VAR_84->cur_ps.stats[VAR_69] & (1 << VAR_81)) != 0;
 VAR_84->inventory[VAR_31] = (VAR_84->cur_ps.stats[VAR_69] & (1 << VAR_79)) != 0;
 VAR_84->inventory[VAR_3] = (VAR_84->cur_ps.stats[VAR_69] & (1 << VAR_71)) != 0;
 VAR_84->inventory[VAR_14] = (VAR_84->cur_ps.stats[VAR_69] & (1 << VAR_74)) != 0;






 VAR_84->inventory[VAR_42] = VAR_84->cur_ps.ammo[VAR_83];
 VAR_84->inventory[VAR_7] = VAR_84->cur_ps.ammo[VAR_77];
 VAR_84->inventory[VAR_16] = VAR_84->cur_ps.ammo[VAR_75];
 VAR_84->inventory[VAR_8] = VAR_84->cur_ps.ammo[VAR_79];
 VAR_84->inventory[VAR_24] = VAR_84->cur_ps.ammo[VAR_76];
 VAR_84->inventory[VAR_40] = VAR_84->cur_ps.ammo[VAR_82];
 VAR_84->inventory[VAR_44] = VAR_84->cur_ps.ammo[VAR_81];
 VAR_84->inventory[VAR_4] = VAR_84->cur_ps.ammo[VAR_71];






 VAR_84->inventory[VAR_19] = VAR_84->cur_ps.stats[VAR_66];
 VAR_84->inventory[VAR_45] = VAR_84->cur_ps.stats[VAR_67] == VAR_55;
 VAR_84->inventory[VAR_26] = VAR_84->cur_ps.stats[VAR_67] == VAR_52;





 VAR_84->inventory[VAR_34] = VAR_84->cur_ps.powerups[VAR_62] != 0;
 VAR_84->inventory[VAR_11] = VAR_84->cur_ps.powerups[VAR_56] != 0;
 VAR_84->inventory[VAR_18] = VAR_84->cur_ps.powerups[VAR_59] != 0;
 VAR_84->inventory[VAR_20] = VAR_84->cur_ps.powerups[VAR_60] != 0;
 VAR_84->inventory[VAR_38] = VAR_84->cur_ps.powerups[VAR_64] != 0;
 VAR_84->inventory[VAR_12] = VAR_84->cur_ps.powerups[VAR_58] != 0;






 VAR_84->inventory[VAR_37] = VAR_84->cur_ps.powerups[VAR_63] != 0;
 VAR_84->inventory[VAR_6] = VAR_84->cur_ps.powerups[VAR_57] != 0;
 FUNC_0(VAR_84, VAR_85);
}
