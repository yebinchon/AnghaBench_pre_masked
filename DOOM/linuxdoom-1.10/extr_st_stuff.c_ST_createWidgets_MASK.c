
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {size_t readyweapon; int * maxammo; int * ammo; int armorpoints; int * weaponowned; int health; } ;
struct TYPE_9__ {size_t data; } ;
struct TYPE_8__ {size_t ammo; } ;


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
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int FUNC_0 (int *,int ,int ,int ,int *,int *) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,int ,int*,int *) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ,int *,int *,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int *,int *,int ) ;
 int * VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int* VAR_51 ;
 int VAR_52 ;
 TYPE_6__* VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 TYPE_2__* VAR_63 ;
 int VAR_64 ;
 int * VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 TYPE_2__ VAR_68 ;
 int VAR_69 ;
 int * VAR_70 ;
 TYPE_2__* VAR_71 ;
 TYPE_2__ VAR_72 ;
 TYPE_1__* VAR_73 ;

void FUNC_4(void)
{

    int VAR_74;


    FUNC_2(&VAR_72,
    VAR_13,
    VAR_14,
    VAR_61,
    &VAR_53->ammo[VAR_73[VAR_53->readyweapon].ammo],
    &VAR_60,
    VAR_12 );


    VAR_72.data = VAR_53->readyweapon;


    FUNC_3(&VAR_69,
        VAR_28,
        VAR_29,
        VAR_61,
        &VAR_53->health,
        &VAR_60,
        VAR_62);


    FUNC_0(&VAR_66,
        VAR_17,
        VAR_18,
        VAR_49,
        &VAR_59,
        &VAR_60);


    for(VAR_74=0;VAR_74<6;VAR_74++)
    {
 FUNC_1(&VAR_65[VAR_74],
      VAR_19+(VAR_74%3)*VAR_20,
      VAR_21+(VAR_74/3)*VAR_22,
      VAR_48[VAR_74], (int *) &VAR_53->weaponowned[VAR_74+1],
      &VAR_55);
    }


    FUNC_2(&VAR_68,
    VAR_26,
    VAR_27,
    VAR_61,
    &VAR_57,
    &VAR_58,
    VAR_25);


    FUNC_1(&VAR_67,
         VAR_23,
         VAR_24,
         VAR_50,
         &VAR_56,
         &VAR_60);


    FUNC_3(&VAR_64,
        VAR_15,
        VAR_16,
        VAR_61,
        &VAR_53->armorpoints,
        &VAR_60, VAR_62);


    FUNC_1(&VAR_70[0],
         VAR_30,
         VAR_31,
         VAR_52,
         &VAR_51[0],
         &VAR_60);

    FUNC_1(&VAR_70[1],
         VAR_32,
         VAR_33,
         VAR_52,
         &VAR_51[1],
         &VAR_60);

    FUNC_1(&VAR_70[2],
         VAR_34,
         VAR_35,
         VAR_52,
         &VAR_51[2],
         &VAR_60);


    FUNC_2(&VAR_63[0],
    VAR_1,
    VAR_2,
    VAR_54,
    &VAR_53->ammo[0],
    &VAR_60,
    VAR_0);

    FUNC_2(&VAR_63[1],
    VAR_4,
    VAR_5,
    VAR_54,
    &VAR_53->ammo[1],
    &VAR_60,
    VAR_3);

    FUNC_2(&VAR_63[2],
    VAR_7,
    VAR_8,
    VAR_54,
    &VAR_53->ammo[2],
    &VAR_60,
    VAR_6);

    FUNC_2(&VAR_63[3],
    VAR_10,
    VAR_11,
    VAR_54,
    &VAR_53->ammo[3],
    &VAR_60,
    VAR_9);


    FUNC_2(&VAR_71[0],
    VAR_37,
    VAR_38,
    VAR_54,
    &VAR_53->maxammo[0],
    &VAR_60,
    VAR_36);

    FUNC_2(&VAR_71[1],
    VAR_40,
    VAR_41,
    VAR_54,
    &VAR_53->maxammo[1],
    &VAR_60,
    VAR_39);

    FUNC_2(&VAR_71[2],
    VAR_43,
    VAR_44,
    VAR_54,
    &VAR_53->maxammo[2],
    &VAR_60,
    VAR_42);

    FUNC_2(&VAR_71[3],
    VAR_46,
    VAR_47,
    VAR_54,
    &VAR_53->maxammo[3],
    &VAR_60,
    VAR_45);

}
