
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int health; int armorpoints; int armortype; int backpack; int* maxammo; int bonuscount; int itemcount; int message; int pendingweapon; int readyweapon; int * cards; TYPE_1__* mo; } ;
typedef TYPE_2__ player_t ;
struct TYPE_16__ {int z; int height; scalar_t__ health; int sprite; int flags; TYPE_2__* player; } ;
typedef TYPE_3__ mobj_t ;
typedef int fixed_t ;
struct TYPE_14__ {int health; } ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (char*) ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_1 (TYPE_2__*,int,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,size_t) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *,int) ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 size_t VAR_47 ;
 int VAR_48 ;
 size_t VAR_49 ;
 size_t VAR_50 ;
 size_t VAR_51 ;
 size_t VAR_52 ;
 size_t VAR_53 ;
 size_t VAR_54 ;
 int VAR_55 ;
 TYPE_2__* VAR_56 ;
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

void
FUNC_9
( mobj_t* VAR_74,
  mobj_t* VAR_75 )
{
    player_t* VAR_76;
    int VAR_77;
    fixed_t VAR_78;
    int VAR_79;

    VAR_78 = VAR_74->z - VAR_75->z;

    if (VAR_78 > VAR_75->height
 || VAR_78 < -8*VAR_1)
    {

 return;
    }


    VAR_79 = VAR_64;
    VAR_76 = VAR_75->player;



    if (VAR_75->health <= 0)
 return;


    switch (VAR_74->sprite)
    {

      case 162:
 if (!FUNC_2 (VAR_76, 1))
     return;
 VAR_76->message = VAR_3;
 break;

      case 161:
 if (!FUNC_2 (VAR_76, 2))
     return;
 VAR_76->message = VAR_22;
 break;


      case 158:
 VAR_76->health++;
 if (VAR_76->health > 200)
     VAR_76->health = 200;
 VAR_76->mo->health = VAR_76->health;
 VAR_76->message = VAR_15;
 break;

      case 157:
 VAR_76->armorpoints++;
 if (VAR_76->armorpoints > 200)
     VAR_76->armorpoints = 200;
 if (!VAR_76->armortype)
     VAR_76->armortype = 1;
 VAR_76->message = VAR_2;
 break;

      case 132:
 VAR_76->health += 100;
 if (VAR_76->health > 200)
     VAR_76->health = 200;
 VAR_76->mo->health = VAR_76->health;
 VAR_76->message = VAR_35;
 VAR_79 = VAR_63;
 break;

      case 147:
 if (VAR_48 != VAR_46)
     return;
 VAR_76->health = 200;
 VAR_76->mo->health = VAR_76->health;
 FUNC_2 (VAR_76,2);
 VAR_76->message = VAR_23;
 VAR_79 = VAR_63;
 break;



      case 159:
 if (!VAR_76->cards[VAR_49])
     VAR_76->message = VAR_7;
 FUNC_4 (VAR_76, VAR_49);
 if (!VAR_55)
     break;
 return;

      case 129:
 if (!VAR_76->cards[VAR_53])
     VAR_76->message = VAR_37;
 FUNC_4 (VAR_76, VAR_53);
 if (!VAR_55)
     break;
 return;

      case 139:
 if (!VAR_76->cards[VAR_51])
     VAR_76->message = VAR_25;
 FUNC_4 (VAR_76, VAR_51);
 if (!VAR_55)
     break;
 return;

      case 154:
 if (!VAR_76->cards[VAR_50])
     VAR_76->message = VAR_8;
 FUNC_4 (VAR_76, VAR_50);
 if (!VAR_55)
     break;
 return;

      case 128:
 if (!VAR_76->cards[VAR_54])
     VAR_76->message = VAR_38;
 FUNC_4 (VAR_76, VAR_54);
 if (!VAR_55)
     break;
 return;

      case 137:
 if (!VAR_76->cards[VAR_52])
     VAR_76->message = VAR_26;
 FUNC_4 (VAR_76, VAR_52);
 if (!VAR_55)
     break;
 return;


      case 131:
 if (!FUNC_3 (VAR_76, 10))
     return;
 VAR_76->message = VAR_33;
 break;

      case 148:
 if (!FUNC_3 (VAR_76, 25))
     return;

 if (VAR_76->health < 25)
     VAR_76->message = VAR_21;
 else
     VAR_76->message = VAR_20;
 break;



      case 144:
 if (!FUNC_5 (VAR_76, VAR_60))
     return;
 VAR_76->message = VAR_17;
 VAR_79 = VAR_63;
 break;

      case 141:
 if (!FUNC_5 (VAR_76, VAR_62))
     return;
 VAR_76->message = VAR_5;
 if (VAR_76->readyweapon != VAR_69)
     VAR_76->pendingweapon = VAR_69;
 VAR_79 = VAR_63;
 break;

      case 145:
 if (!FUNC_5 (VAR_76, VAR_59))
     return;
 VAR_76->message = VAR_16;
 VAR_79 = VAR_63;
 break;

      case 130:
 if (!FUNC_5 (VAR_76, VAR_61))
     return;
 VAR_76->message = VAR_34;
 VAR_79 = VAR_63;
 break;

      case 142:
 if (!FUNC_5 (VAR_76, VAR_57))
     return;
 VAR_76->message = VAR_19;
 VAR_79 = VAR_63;
 break;

      case 140:
 if (!FUNC_5 (VAR_76, VAR_58))
     return;
 VAR_76->message = VAR_36;
 VAR_79 = VAR_63;
 break;


      case 151:
 if (VAR_74->flags & VAR_40)
 {
     if (!FUNC_1 (VAR_76,VAR_43,0))
  return;
 }
 else
 {
     if (!FUNC_1 (VAR_76,VAR_43,1))
  return;
 }
 VAR_76->message = VAR_13;
 break;

      case 163:
 if (!FUNC_1 (VAR_76, VAR_43,5))
     return;
 VAR_76->message = VAR_14;
 break;

      case 138:
 if (!FUNC_1 (VAR_76, VAR_44,1))
     return;
 VAR_76->message = VAR_28;
 break;

      case 155:
 if (!FUNC_1 (VAR_76, VAR_44,5))
     return;
 VAR_76->message = VAR_27;
 break;

      case 153:
 if (!FUNC_1 (VAR_76, VAR_42,1))
     return;
 VAR_76->message = VAR_9;
 break;

      case 152:
 if (!FUNC_1 (VAR_76, VAR_42,5))
     return;
 VAR_76->message = VAR_10;
 break;

      case 134:
 if (!FUNC_1 (VAR_76, VAR_45,1))
     return;
 VAR_76->message = VAR_30;
 break;

      case 136:
 if (!FUNC_1 (VAR_76, VAR_45,5))
     return;
 VAR_76->message = VAR_29;
 break;

      case 156:
 if (!VAR_76->backpack)
 {
     for (VAR_77=0 ; VAR_77<VAR_41 ; VAR_77++)
  VAR_76->maxammo[VAR_77] *= 2;
     VAR_76->backpack = 1;
 }
 for (VAR_77=0 ; VAR_77<VAR_41 ; VAR_77++)
     FUNC_1 (VAR_76, VAR_77, 1);
 VAR_76->message = VAR_4;
 break;


      case 160:
 if (!FUNC_6 (VAR_76, VAR_66, 0) )
     return;
 VAR_76->message = VAR_6;
 VAR_79 = VAR_65;
 break;

      case 146:
 if (!FUNC_6 (VAR_76, VAR_67, VAR_74->flags&VAR_40) )
     return;
 VAR_76->message = VAR_11;
 VAR_79 = VAR_65;
 break;

      case 150:
 if (!FUNC_6 (VAR_76, VAR_68, 0) )
     return;
 VAR_76->message = VAR_12;
 VAR_79 = VAR_65;
 break;

      case 149:
 if (!FUNC_6 (VAR_76, VAR_70, 0) )
     return;
 VAR_76->message = VAR_18;
 VAR_79 = VAR_65;
 break;

      case 143:
 if (!FUNC_6 (VAR_76, VAR_71, 0) )
     return;
 VAR_76->message = VAR_24;
 VAR_79 = VAR_65;
 break;

      case 133:
 if (!FUNC_6 (VAR_76, VAR_72, VAR_74->flags&VAR_40 ) )
     return;
 VAR_76->message = VAR_31;
 VAR_79 = VAR_65;
 break;

      case 135:
 if (!FUNC_6 (VAR_76, VAR_73, VAR_74->flags&VAR_40 ) )
     return;
 VAR_76->message = VAR_32;
 VAR_79 = VAR_65;
 break;

      default:
 FUNC_0 ("P_SpecialThing: Unknown gettable thing");
    }

    if (VAR_74->flags & VAR_39)
 VAR_76->itemcount++;
    FUNC_7 (VAR_74);
    VAR_76->bonuscount += VAR_0;
    if (VAR_76 == &VAR_56[VAR_47])
 FUNC_8 (((void*)0), VAR_79);
}
