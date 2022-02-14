
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef double* vec4_t ;
typedef int st ;
typedef scalar_t__ qboolean ;
struct TYPE_14__ {int icon; } ;
typedef TYPE_4__ gitem_t ;
struct TYPE_15__ {scalar_t__ team; char const* name; size_t curWeapon; int powerups; int armor; int health; scalar_t__ location; scalar_t__ infoValid; } ;
typedef TYPE_5__ clientInfo_t ;
struct TYPE_19__ {TYPE_3__* snap; } ;
struct TYPE_18__ {int integer; } ;
struct TYPE_17__ {scalar_t__ weaponIcon; } ;
struct TYPE_11__ {scalar_t__ deferShader; scalar_t__ teamStatusBar; } ;
struct TYPE_16__ {TYPE_1__ media; TYPE_5__* clientinfo; } ;
struct TYPE_12__ {scalar_t__* persistant; } ;
struct TYPE_13__ {TYPE_2__ ps; } ;


 TYPE_4__* FUNC_0 (int) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,float,int,int,scalar_t__) ;
 int FUNC_3 (int,float,char const*,double*,int ,int ,int,int,int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ,int ,double*) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (char*,int,char*,int ,int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_9__ VAR_10 ;
 TYPE_8__ VAR_11 ;
 TYPE_7__* VAR_12 ;
 TYPE_6__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int* VAR_16 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (double*) ;

__attribute__((used)) static float FUNC_9( float VAR_17, qboolean VAR_18, qboolean VAR_19 ) {
 int VAR_20, VAR_21, VAR_22, VAR_23;
 int VAR_24, VAR_25, VAR_26;
 const char *VAR_27;
 vec4_t VAR_28;
 int VAR_29, VAR_30;
 int VAR_31;
 char VAR_32[16];
 clientInfo_t *VAR_33;
 gitem_t *VAR_34;
 int VAR_35, VAR_36;

 if ( !VAR_11.integer ) {
  return VAR_17;
 }

 if ( VAR_10.snap->ps.persistant[VAR_2] != VAR_7 && VAR_10.snap->ps.persistant[VAR_2] != VAR_4 ) {
  return VAR_17;
 }

 VAR_31 = 0;


 VAR_29 = 0;
 VAR_36 = (VAR_14 > 8) ? 8 : VAR_14;
 for (VAR_24 = 0; VAR_24 < VAR_36; VAR_24++) {
  VAR_33 = VAR_13.clientinfo + VAR_16[VAR_24];
  if ( VAR_33->infoValid && VAR_33->team == VAR_10.snap->ps.persistant[VAR_2]) {
   VAR_31++;
   VAR_26 = FUNC_4(VAR_33->name);
   if (VAR_26 > VAR_29)
    VAR_29 = VAR_26;
  }
 }

 if (!VAR_31)
  return VAR_17;

 if (VAR_29 > VAR_6)
  VAR_29 = VAR_6;


 VAR_30 = 0;
 for (VAR_24 = 1; VAR_24 < VAR_1; VAR_24++) {
  VAR_27 = FUNC_1(VAR_0 + VAR_24);
  if (VAR_27 && *VAR_27) {
   VAR_26 = FUNC_4(VAR_27);
   if (VAR_26 > VAR_30)
    VAR_30 = VAR_26;
  }
 }

 if (VAR_30 > VAR_5)
  VAR_30 = VAR_5;

 VAR_21 = (VAR_29 + VAR_30 + 4 + 7) * VAR_9;

 if ( VAR_18 )
  VAR_20 = 640 - VAR_21;
 else
  VAR_20 = 0;

 VAR_22 = VAR_31 * VAR_8;

 if ( VAR_19 ) {
  VAR_35 = VAR_17 + VAR_22;
 } else {
  VAR_17 -= VAR_22;
  VAR_35 = VAR_17;
 }

 if ( VAR_10.snap->ps.persistant[VAR_2] == VAR_7 ) {
  VAR_28[0] = 1.0f;
  VAR_28[1] = 0.0f;
  VAR_28[2] = 0.0f;
  VAR_28[3] = 0.33f;
 } else {
  VAR_28[0] = 0.0f;
  VAR_28[1] = 0.0f;
  VAR_28[2] = 1.0f;
  VAR_28[3] = 0.33f;
 }
 FUNC_8( VAR_28 );
 FUNC_2( VAR_20, VAR_17, VAR_21, VAR_22, VAR_13.media.teamStatusBar );
 FUNC_8( ((void*)0) );

 for (VAR_24 = 0; VAR_24 < VAR_36; VAR_24++) {
  VAR_33 = VAR_13.clientinfo + VAR_16[VAR_24];
  if ( VAR_33->infoValid && VAR_33->team == VAR_10.snap->ps.persistant[VAR_2]) {

   VAR_28[0] = VAR_28[1] = VAR_28[2] = VAR_28[3] = 1.0;

   VAR_23 = VAR_20 + VAR_9;

   FUNC_3( VAR_23, VAR_17,
    VAR_33->name, VAR_28, VAR_15, VAR_15,
    VAR_9, VAR_8, VAR_6);

   if (VAR_30) {
    VAR_27 = FUNC_1(VAR_0 + VAR_33->location);
    if (!VAR_27 || !*VAR_27)
     VAR_27 = "unknown";
    VAR_26 = FUNC_4(VAR_27);
    if (VAR_26 > VAR_30)
     VAR_26 = VAR_30;



    VAR_23 = VAR_20 + VAR_9 * 2 + VAR_9 * VAR_29;
    FUNC_3( VAR_23, VAR_17,
     VAR_27, VAR_28, VAR_15, VAR_15, VAR_9, VAR_8,
     VAR_5);
   }

   FUNC_5( VAR_33->health, VAR_33->armor, VAR_28 );

   FUNC_6 (VAR_32, sizeof(VAR_32), "%3i %3i", VAR_33->health, VAR_33->armor);

   VAR_23 = VAR_20 + VAR_9 * 3 +
    VAR_9 * VAR_29 + VAR_9 * VAR_30;

   FUNC_3( VAR_23, VAR_17,
    VAR_32, VAR_28, VAR_15, VAR_15,
    VAR_9, VAR_8, 0 );


   VAR_23 += VAR_9 * 3;

   if ( VAR_12[VAR_33->curWeapon].weaponIcon ) {
    FUNC_2( VAR_23, VAR_17, VAR_9, VAR_8,
     VAR_12[VAR_33->curWeapon].weaponIcon );
   } else {
    FUNC_2( VAR_23, VAR_17, VAR_9, VAR_8,
     VAR_13.media.deferShader );
   }


   if (VAR_18) {
    VAR_23 = VAR_20;
   } else {
    VAR_23 = VAR_20 + VAR_21 - VAR_9;
   }
   for (VAR_25 = 0; VAR_25 <= VAR_3; VAR_25++) {
    if (VAR_33->powerups & (1 << VAR_25)) {

     VAR_34 = FUNC_0( VAR_25 );

     if (VAR_34) {
      FUNC_2( VAR_23, VAR_17, VAR_9, VAR_8,
      FUNC_7( VAR_34->icon ) );
      if (VAR_18) {
       VAR_23 -= VAR_9;
      } else {
       VAR_23 += VAR_9;
      }
     }
    }
   }

   VAR_17 += VAR_8;
  }
 }

 return VAR_35;

}
