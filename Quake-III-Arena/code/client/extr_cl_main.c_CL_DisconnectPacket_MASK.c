
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int netadr_t ;
struct TYPE_4__ {int remoteAddress; } ;
struct TYPE_6__ {int lastPacketTime; TYPE_1__ netchan; } ;
struct TYPE_5__ {scalar_t__ state; int realtime; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,int ) ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;

void FUNC_4( netadr_t VAR_4 ) {
 if ( VAR_2.state < VAR_0 ) {
  return;
 }


 if ( !FUNC_3( VAR_4, VAR_1.netchan.remoteAddress ) ) {
  return;
 }



 if ( VAR_2.realtime - VAR_1.lastPacketTime < 3000 ) {
  return;
 }


 FUNC_1( "Server disconnected for unknown reason\n" );
 FUNC_2("com_errorMessage", "Server disconnected for unknown reason\n" );
 FUNC_0( VAR_3 );
}
