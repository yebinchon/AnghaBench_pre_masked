
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* qboolean ;
struct TYPE_9__ {int buttons; scalar_t__ upmove; scalar_t__ rightmove; scalar_t__ forwardmove; } ;
struct TYPE_10__ {int localClient; TYPE_1__ cmd; } ;
struct TYPE_11__ {int inactivityTime; void* inactivityWarning; TYPE_2__ pers; } ;
typedef TYPE_3__ gclient_t ;
struct TYPE_13__ {int integer; } ;
struct TYPE_12__ {int time; int clients; } ;


 int VAR_0 ;
 TYPE_7__ VAR_1 ;
 TYPE_6__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_3__*,char*) ;

qboolean FUNC_2( gclient_t *VAR_5 ) {
 if ( ! VAR_1.integer ) {


  VAR_5->inactivityTime = VAR_2.time + 60 * 1000;
  VAR_5->inactivityWarning = VAR_3;
 } else if ( VAR_5->pers.cmd.forwardmove ||
  VAR_5->pers.cmd.rightmove ||
  VAR_5->pers.cmd.upmove ||
  (VAR_5->pers.cmd.buttons & VAR_0) ) {
  VAR_5->inactivityTime = VAR_2.time + VAR_1.integer * 1000;
  VAR_5->inactivityWarning = VAR_3;
 } else if ( !VAR_5->pers.localClient ) {
  if ( VAR_2.time > VAR_5->inactivityTime ) {
   FUNC_0( VAR_5 - VAR_2.clients, "Dropped due to inactivity" );
   return VAR_3;
  }
  if ( VAR_2.time > VAR_5->inactivityTime - 10000 && !VAR_5->inactivityWarning ) {
   VAR_5->inactivityWarning = VAR_4;
   FUNC_1( VAR_5 - VAR_2.clients, "cp \"Ten seconds until inactivity drop!\n\"" );
  }
 }
 return VAR_4;
}
