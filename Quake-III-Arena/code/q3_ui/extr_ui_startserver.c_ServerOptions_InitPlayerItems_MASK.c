
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ curvalue; } ;
struct TYPE_12__ {scalar_t__ gametype; TYPE_5__* playerTeam; int * playerNameBuffers; TYPE_3__* playerType; TYPE_1__ dedicated; scalar_t__ multiplayer; } ;
struct TYPE_10__ {int flags; } ;
struct TYPE_11__ {int curvalue; TYPE_4__ generic; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_9__ {int curvalue; TYPE_2__ generic; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_6__ VAR_4 ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static void FUNC_2( void ) {
 int VAR_5;
 int VAR_6;


 if( VAR_4.multiplayer ) {
  VAR_6 = 0;
 }
 else {
  VAR_6 = 1;
 }

 for( VAR_5 = 0; VAR_5 < VAR_1; VAR_5++ ) {
  VAR_4.playerType[VAR_5].curvalue = VAR_6;
 }

 if( VAR_4.multiplayer && (VAR_4.gametype < VAR_0) ) {
  for( VAR_5 = 8; VAR_5 < VAR_1; VAR_5++ ) {
   VAR_4.playerType[VAR_5].curvalue = 2;
  }
 }


 if( VAR_4.dedicated.curvalue == 0 ) {

  VAR_4.playerType[0].generic.flags |= VAR_3;
  VAR_4.playerType[0].curvalue = 0;
  FUNC_1( "name", VAR_4.playerNameBuffers[0], sizeof(VAR_4.playerNameBuffers[0]) );
  FUNC_0( VAR_4.playerNameBuffers[0] );
 }


 if( VAR_4.gametype >= VAR_0 ) {
  for( VAR_5 = 0; VAR_5 < (VAR_1 / 2); VAR_5++ ) {
   VAR_4.playerTeam[VAR_5].curvalue = 0;
  }
  for( ; VAR_5 < VAR_1; VAR_5++ ) {
   VAR_4.playerTeam[VAR_5].curvalue = 1;
  }
 }
 else {
  for( VAR_5 = 0; VAR_5 < VAR_1; VAR_5++ ) {
   VAR_4.playerTeam[VAR_5].generic.flags |= (VAR_3|VAR_2);
  }
 }
}
