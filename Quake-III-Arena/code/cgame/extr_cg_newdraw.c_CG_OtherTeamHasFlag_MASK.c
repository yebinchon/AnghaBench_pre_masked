
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_8__ {TYPE_2__* snap; } ;
struct TYPE_7__ {scalar_t__ gametype; scalar_t__ flagStatus; scalar_t__ redflag; scalar_t__ blueflag; } ;
struct TYPE_5__ {int* persistant; } ;
struct TYPE_6__ {TYPE_1__ ps; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__ VAR_8 ;
 TYPE_3__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

qboolean FUNC_0() {
 if (VAR_9.gametype == VAR_4 || VAR_9.gametype == VAR_3) {
  int VAR_12 = VAR_8.snap->ps.persistant[VAR_5];
  if (VAR_9.gametype == VAR_3) {
   if (VAR_12 == VAR_7 && VAR_9.flagStatus == VAR_1) {
    return VAR_11;
   } else if (VAR_12 == VAR_6 && VAR_9.flagStatus == VAR_2) {
    return VAR_11;
   } else {
    return VAR_10;
   }
  } else {
   if (VAR_12 == VAR_7 && VAR_9.redflag == VAR_0) {
    return VAR_11;
   } else if (VAR_12 == VAR_6 && VAR_9.blueflag == VAR_0) {
    return VAR_11;
   } else {
    return VAR_10;
   }
  }
 }
 return VAR_10;
}
