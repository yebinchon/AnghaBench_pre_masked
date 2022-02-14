
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


struct TYPE_10__ {char* string; } ;
struct TYPE_9__ {scalar_t__ curvalue; } ;
struct TYPE_16__ {scalar_t__ gametype; TYPE_7__* playerTeam; TYPE_5__* playerType; TYPE_4__* playerName; TYPE_2__ player0; TYPE_1__ dedicated; } ;
struct TYPE_14__ {int flags; } ;
struct TYPE_15__ {TYPE_6__ generic; } ;
struct TYPE_13__ {int curvalue; } ;
struct TYPE_11__ {int flags; } ;
struct TYPE_12__ {TYPE_3__ generic; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_8__ VAR_4 ;

__attribute__((used)) static void FUNC_0( void ) {
 int VAR_5;
 int VAR_6;
 if( VAR_4.dedicated.curvalue == 0 ) {
  VAR_4.player0.string = "Human";
  VAR_4.playerName[0].generic.flags &= ~VAR_2;

  VAR_5 = 1;
 }
 else {
  VAR_4.player0.string = "Open";
  VAR_5 = 0;
 }
 for( VAR_6 = VAR_5; VAR_6 < VAR_1; VAR_6++ ) {
  if( VAR_4.playerType[VAR_6].curvalue == 1 ) {
   VAR_4.playerName[VAR_6].generic.flags &= ~(VAR_3|VAR_2);
  }
  else {
   VAR_4.playerName[VAR_6].generic.flags |= (VAR_3|VAR_2);
  }
 }


 if( VAR_4.gametype < VAR_0 ) {
  return;
 }
 for( VAR_6 = VAR_5; VAR_6 < VAR_1; VAR_6++ ) {
  if( VAR_4.playerType[VAR_6].curvalue == 2 ) {
   VAR_4.playerTeam[VAR_6].generic.flags |= (VAR_3|VAR_2);
  }
  else {
   VAR_4.playerTeam[VAR_6].generic.flags &= ~(VAR_3|VAR_2);
  }
 }
}
