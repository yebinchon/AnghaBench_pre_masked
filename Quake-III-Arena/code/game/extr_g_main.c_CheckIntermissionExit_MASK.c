
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {size_t clientNum; int* stats; } ;
struct TYPE_10__ {scalar_t__ connected; } ;
struct TYPE_12__ {TYPE_3__ ps; TYPE_2__ pers; scalar_t__ readyToExit; } ;
typedef TYPE_4__ gclient_t ;
struct TYPE_9__ {int svFlags; } ;
struct TYPE_16__ {TYPE_1__ r; } ;
struct TYPE_15__ {scalar_t__ integer; } ;
struct TYPE_14__ {int integer; } ;
struct TYPE_13__ {scalar_t__ time; scalar_t__ intermissiontime; scalar_t__ exitTime; scalar_t__ readyToExit; TYPE_4__* clients; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_8__* VAR_4 ;
 TYPE_7__ VAR_5 ;
 TYPE_6__ VAR_6 ;
 TYPE_5__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

void FUNC_1( void ) {
 int VAR_10, VAR_11;
 int VAR_12;
 gclient_t *VAR_13;
 int VAR_14;

 if ( VAR_5.integer == VAR_1 ) {
  return;
 }


 VAR_10 = 0;
 VAR_11 = 0;
 VAR_14 = 0;
 for (VAR_12=0 ; VAR_12< VAR_6.integer ; VAR_12++) {
  VAR_13 = VAR_7.clients + VAR_12;
  if ( VAR_13->pers.connected != VAR_0 ) {
   continue;
  }
  if ( VAR_4[VAR_13->ps.clientNum].r.svFlags & VAR_3 ) {
   continue;
  }

  if ( VAR_13->readyToExit ) {
   VAR_10++;
   if ( VAR_12 < 16 ) {
    VAR_14 |= 1 << VAR_12;
   }
  } else {
   VAR_11++;
  }
 }



 for (VAR_12=0 ; VAR_12< VAR_6.integer ; VAR_12++) {
  VAR_13 = VAR_7.clients + VAR_12;
  if ( VAR_13->pers.connected != VAR_0 ) {
   continue;
  }
  VAR_13->ps.stats[VAR_2] = VAR_14;
 }


 if ( VAR_7.time < VAR_7.intermissiontime + 5000 ) {
  return;
 }


 if ( !VAR_10 ) {
  VAR_7.readyToExit = VAR_8;
  return;
 }


 if ( !VAR_11 ) {
  FUNC_0();
  return;
 }


 if ( !VAR_7.readyToExit ) {
  VAR_7.readyToExit = VAR_9;
  VAR_7.exitTime = VAR_7.time;
 }



 if ( VAR_7.time < VAR_7.exitTime + 10000 ) {
  return;
 }

 FUNC_0();
}
