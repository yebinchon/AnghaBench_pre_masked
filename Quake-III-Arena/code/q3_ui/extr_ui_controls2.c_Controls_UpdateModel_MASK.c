
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* playerViewangles; int* playerMoveangles; int playerWeapon; int playerChat; void* playerTorso; void* playerLegs; int playerinfo; } ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 size_t VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_0 (int *,void*,void*,int*,int*,int,int ) ;
 int FUNC_1 (int*) ;
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
 size_t VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 TYPE_1__ VAR_25 ;

__attribute__((used)) static void FUNC_2( int VAR_26 ) {
 FUNC_1( VAR_25.playerViewangles );
 FUNC_1( VAR_25.playerMoveangles );
 VAR_25.playerViewangles[VAR_22] = 180 - 30;
 VAR_25.playerMoveangles[VAR_22] = VAR_25.playerViewangles[VAR_22];
 VAR_25.playerLegs = VAR_2;
 VAR_25.playerTorso = VAR_10;
 VAR_25.playerWeapon = -1;
 VAR_25.playerChat = VAR_23;

 switch( VAR_26 ) {
 case 143:
  VAR_25.playerLegs = VAR_5;
  break;

 case 138:
  VAR_25.playerLegs = VAR_6;
  break;

 case 151:
  VAR_25.playerLegs = VAR_1;
  break;

 case 146:
  VAR_25.playerLegs = VAR_4;
  break;

 case 149:
  VAR_25.playerLegs = VAR_3;
  break;

 case 140:
  VAR_25.playerViewangles[VAR_22] += 90;
  break;

 case 139:
  VAR_25.playerViewangles[VAR_22] -= 90;
  break;

 case 142:
  VAR_25.playerLegs = VAR_6;
  VAR_25.playerMoveangles[VAR_22] = VAR_25.playerViewangles[VAR_22] + 90;
  break;

 case 141:
  VAR_25.playerLegs = VAR_6;
  VAR_25.playerMoveangles[VAR_22] = VAR_25.playerViewangles[VAR_22] - 90;
  break;

 case 144:
  VAR_25.playerViewangles[VAR_7] = -45;
  break;

 case 145:
  VAR_25.playerViewangles[VAR_7] = 45;
  break;

 case 137:
  VAR_25.playerWeapon = VAR_12;
  break;

 case 135:
  VAR_25.playerWeapon = VAR_16;
  break;

 case 134:
  VAR_25.playerWeapon = VAR_21;
  break;

 case 133:
  VAR_25.playerWeapon = VAR_14;
  break;

 case 132:
  VAR_25.playerWeapon = VAR_20;
  break;

 case 131:
  VAR_25.playerWeapon = VAR_15;
  break;

 case 130:
  VAR_25.playerWeapon = VAR_19;
  break;

 case 129:
  VAR_25.playerWeapon = VAR_18;
  break;

 case 128:
  VAR_25.playerWeapon = VAR_11;
  break;

 case 136:
  VAR_25.playerWeapon = VAR_13;
  break;

 case 152:
  VAR_25.playerTorso = VAR_8;
  break;

 case 147:
  VAR_25.playerTorso = VAR_9;
  break;

 case 148:
  VAR_25.playerLegs = VAR_0;
  VAR_25.playerTorso = VAR_0;
  VAR_25.playerWeapon = VAR_17;
  break;

 case 150:
  VAR_25.playerChat = VAR_24;
  break;

 default:
  break;
 }

 FUNC_0( &VAR_25.playerinfo, VAR_25.playerLegs, VAR_25.playerTorso, VAR_25.playerViewangles, VAR_25.playerMoveangles, VAR_25.playerWeapon, VAR_25.playerChat );
}
