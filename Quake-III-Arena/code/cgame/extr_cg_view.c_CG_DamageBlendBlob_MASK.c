
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int radius; int* shaderRGBA; int customShader; int origin; int renderfx; int reType; } ;
typedef TYPE_4__ refEntity_t ;
typedef int ent ;
struct TYPE_10__ {int * viewaxis; int vieworg; } ;
struct TYPE_14__ {int damageValue; int time; int damageTime; int damageX; int damageY; TYPE_2__ refdef; } ;
struct TYPE_11__ {int viewBloodShader; } ;
struct TYPE_9__ {scalar_t__ hardwareType; } ;
struct TYPE_13__ {TYPE_3__ media; TYPE_1__ glconfig; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ,int ) ;
 TYPE_8__ VAR_4 ;
 TYPE_7__ VAR_5 ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_3( void ) {
 int VAR_6;
 int VAR_7;
 refEntity_t VAR_8;

 if ( !VAR_4.damageValue ) {
  return;
 }






 if ( VAR_5.glconfig.hardwareType == VAR_1 ) {
  return;
 }

 VAR_7 = VAR_0;
 VAR_6 = VAR_4.time - VAR_4.damageTime;
 if ( VAR_6 <= 0 || VAR_6 >= VAR_7 ) {
  return;
 }


 FUNC_1( &VAR_8, 0, sizeof( VAR_8 ) );
 VAR_8.reType = VAR_3;
 VAR_8.renderfx = VAR_2;

 FUNC_0( VAR_4.refdef.vieworg, 8, VAR_4.refdef.viewaxis[0], VAR_8.origin );
 FUNC_0( VAR_8.origin, VAR_4.damageX * -8, VAR_4.refdef.viewaxis[1], VAR_8.origin );
 FUNC_0( VAR_8.origin, VAR_4.damageY * 8, VAR_4.refdef.viewaxis[2], VAR_8.origin );

 VAR_8.radius = VAR_4.damageValue * 3;
 VAR_8.customShader = VAR_5.media.viewBloodShader;
 VAR_8.shaderRGBA[0] = 255;
 VAR_8.shaderRGBA[1] = 255;
 VAR_8.shaderRGBA[2] = 255;
 VAR_8.shaderRGBA[3] = 200 * ( 1.0 - ((float)VAR_6 / VAR_7) );
 FUNC_2( &VAR_8 );
}
