
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_10__ {TYPE_2__* snap; } ;
struct TYPE_9__ {scalar_t__ integer; } ;
struct TYPE_8__ {scalar_t__ redflag; scalar_t__ flagStatus; scalar_t__ blueflag; scalar_t__ gametype; } ;
struct TYPE_6__ {int* stats; scalar_t__* powerups; } ;
struct TYPE_7__ {TYPE_1__ ps; } ;


 int FUNC_0 () ;
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
 int FUNC_1 () ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 TYPE_5__ VAR_32 ;
 TYPE_4__ VAR_33 ;
 TYPE_3__ VAR_34 ;
 scalar_t__ VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;

qboolean FUNC_2(int VAR_38) {

 if (VAR_38 & VAR_15) {
  return (VAR_33.integer == VAR_35);
 }

 if (VAR_38 & VAR_9) {
  return !(VAR_33.integer == VAR_35);
 }

 if (VAR_38 & VAR_12) {
  return FUNC_0();
 }

 if (VAR_38 & VAR_17) {
  return FUNC_1();
 }

 if (VAR_38 & (VAR_2 | VAR_13)) {
  if (VAR_38 & VAR_2 && (VAR_34.redflag == VAR_18 || VAR_34.flagStatus == VAR_20)) {
   return VAR_37;
  } else if (VAR_38 & VAR_13 && (VAR_34.blueflag == VAR_18 || VAR_34.flagStatus == VAR_19)) {
   return VAR_37;
  }
  return VAR_36;
 }

 if (VAR_38 & VAR_1) {
  if( VAR_34.gametype >= VAR_26) {
   return VAR_37;
  }
 }

 if (VAR_38 & VAR_0) {
  if( VAR_34.gametype < VAR_26) {
   return VAR_37;
  }
 }

 if (VAR_38 & VAR_5) {
  if( VAR_34.gametype == VAR_23 ) {
   return VAR_37;
    } else {
      return VAR_36;
    }
 }

 if (VAR_38 & VAR_11) {
  if( VAR_34.gametype == VAR_21 ) {
   return VAR_37;
    } else {
      return VAR_36;
    }
 }

 if (VAR_38 & VAR_3) {
  if( VAR_34.gametype == VAR_22 ) {
   return VAR_37;
  }
 }

 if (VAR_38 & VAR_10) {
  if( VAR_34.gametype == VAR_24 ) {
   return VAR_37;
    } else {
      return VAR_36;
    }
 }

 if (VAR_38 & VAR_6) {
  if (VAR_32.snap->ps.stats[VAR_31] < 25) {
   return VAR_37;
  }
 }

 if (VAR_38 & VAR_7) {
  if (VAR_32.snap->ps.stats[VAR_31] >= 25) {
   return VAR_37;
  }
 }

 if (VAR_38 & VAR_14) {
  if( VAR_34.gametype == VAR_25 ) {
   return VAR_37;
  }
 }

 if (VAR_38 & VAR_16) {
  if( VAR_34.gametype == VAR_27 ) {
   return VAR_37;
  }
 }

 if (VAR_38 & VAR_4) {
 }

 if (VAR_38 & VAR_8) {
  if (VAR_32.snap->ps.powerups[VAR_30] || VAR_32.snap->ps.powerups[VAR_28] || VAR_32.snap->ps.powerups[VAR_29]) {
   return VAR_37;
  }
 }
 return VAR_36;
}
