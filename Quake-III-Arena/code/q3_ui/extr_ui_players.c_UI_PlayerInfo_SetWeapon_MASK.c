
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int weapon_t ;
struct TYPE_5__ {int currentWeapon; int realWeapon; int flashDlightColor; void* flashModel; void* barrelModel; void* weaponModel; } ;
typedef TYPE_1__ playerInfo_t ;
struct TYPE_6__ {scalar_t__ giType; int giTag; char** world_model; scalar_t__ classname; } ;
typedef TYPE_2__ gitem_t ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int,int,int) ;
 int VAR_1 ;






 int VAR_2 ;




 TYPE_2__* VAR_3 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 void* FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5( playerInfo_t *VAR_4, weapon_t VAR_5 ) {
 gitem_t * VAR_6;
 char VAR_7[VAR_1];

 VAR_4->currentWeapon = VAR_5;
tryagain:
 VAR_4->realWeapon = VAR_5;
 VAR_4->weaponModel = 0;
 VAR_4->barrelModel = 0;
 VAR_4->flashModel = 0;

 if ( VAR_5 == VAR_2 ) {
  return;
 }

 for ( VAR_6 = VAR_3 + 1; VAR_6->classname ; VAR_6++ ) {
  if ( VAR_6->giType != VAR_0 ) {
   continue;
  }
  if ( VAR_6->giTag == VAR_5 ) {
   break;
  }
 }

 if ( VAR_6->classname ) {
  VAR_4->weaponModel = FUNC_4( VAR_6->world_model[0] );
 }

 if( VAR_4->weaponModel == 0 ) {
  if( VAR_5 == 132 ) {
   VAR_5 = VAR_2;
   goto tryagain;
  }
  VAR_5 = 132;
  goto tryagain;
 }

 if ( VAR_5 == 132 || VAR_5 == 136 || VAR_5 == 137 ) {
  FUNC_3( VAR_7, VAR_6->world_model[0] );
  FUNC_0( VAR_7, VAR_7 );
  FUNC_2( VAR_7, "_barrel.md3" );
  VAR_4->barrelModel = FUNC_4( VAR_7 );
 }

 FUNC_3( VAR_7, VAR_6->world_model[0] );
 FUNC_0( VAR_7, VAR_7 );
 FUNC_2( VAR_7, "_flash.md3" );
 VAR_4->flashModel = FUNC_4( VAR_7 );

 switch( VAR_5 ) {
 case 136:
  FUNC_1( VAR_4->flashDlightColor, 0.6f, 0.6f, 1 );
  break;

 case 132:
  FUNC_1( VAR_4->flashDlightColor, 1, 1, 0 );
  break;

 case 128:
  FUNC_1( VAR_4->flashDlightColor, 1, 1, 0 );
  break;

 case 134:
  FUNC_1( VAR_4->flashDlightColor, 1, 0.7f, 0.5f );
  break;

 case 129:
  FUNC_1( VAR_4->flashDlightColor, 1, 0.75f, 0 );
  break;

 case 133:
  FUNC_1( VAR_4->flashDlightColor, 0.6f, 0.6f, 1 );
  break;

 case 130:
  FUNC_1( VAR_4->flashDlightColor, 1, 0.5f, 0 );
  break;

 case 131:
  FUNC_1( VAR_4->flashDlightColor, 0.6f, 0.6f, 1 );
  break;

 case 137:
  FUNC_1( VAR_4->flashDlightColor, 1, 0.7f, 1 );
  break;

 case 135:
  FUNC_1( VAR_4->flashDlightColor, 0.6f, 0.6f, 1 );
  break;

 default:
  FUNC_1( VAR_4->flashDlightColor, 1, 1, 1 );
  break;
 }
}
