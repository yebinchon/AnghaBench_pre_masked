
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int buttons; } ;
typedef TYPE_4__ usercmd_t ;
struct TYPE_19__ {int tracemask; int pointcontents; int trace; TYPE_4__ cmd; TYPE_2__* ps; } ;
typedef TYPE_5__ pmove_t ;
typedef int pm ;
struct TYPE_17__ {int origin; } ;
struct TYPE_20__ {TYPE_3__ s; TYPE_7__* client; } ;
typedef TYPE_6__ gentity_t ;
struct TYPE_16__ {int speed; int origin; int pm_type; } ;
struct TYPE_15__ {scalar_t__ spectatorState; } ;
struct TYPE_21__ {int oldbuttons; int buttons; TYPE_2__ ps; TYPE_1__ sess; } ;
typedef TYPE_7__ gclient_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*,int) ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_5__*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_6__*) ;

void FUNC_6( gentity_t *VAR_7, usercmd_t *VAR_8 ) {
 pmove_t VAR_9;
 gclient_t *VAR_10;

 VAR_10 = VAR_7->client;

 if ( VAR_10->sess.spectatorState != VAR_4 ) {
  VAR_10->ps.pm_type = VAR_3;
  VAR_10->ps.speed = 400;


  FUNC_4 (&VAR_9, 0, sizeof(VAR_9));
  VAR_9.ps = &VAR_10->ps;
  VAR_9.cmd = *VAR_8;
  VAR_9.tracemask = VAR_2 & ~VAR_1;
  VAR_9.trace = VAR_6;
  VAR_9.pointcontents = VAR_5;


  FUNC_2 (&VAR_9);

  FUNC_3( VAR_10->ps.origin, VAR_7->s.origin );

  FUNC_1( VAR_7 );
  FUNC_5( VAR_7 );
 }

 VAR_10->oldbuttons = VAR_10->buttons;
 VAR_10->buttons = VAR_8->buttons;


 if ( ( VAR_10->buttons & VAR_0 ) && ! ( VAR_10->oldbuttons & VAR_0 ) ) {
  FUNC_0( VAR_7, 1 );
 }
}
