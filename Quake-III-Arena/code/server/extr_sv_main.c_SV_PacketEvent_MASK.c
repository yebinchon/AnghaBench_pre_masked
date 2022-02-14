
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_17__ ;


struct TYPE_23__ {scalar_t__ port; } ;
typedef TYPE_2__ netadr_t ;
struct TYPE_24__ {int cursize; scalar_t__ data; } ;
typedef TYPE_3__ msg_t ;
struct TYPE_21__ {scalar_t__ port; } ;
struct TYPE_22__ {int qport; TYPE_17__ remoteAddress; } ;
struct TYPE_25__ {scalar_t__ state; int lastPacketTime; TYPE_1__ netchan; } ;
typedef TYPE_4__ client_t ;
struct TYPE_27__ {int integer; } ;
struct TYPE_26__ {int time; TYPE_4__* clients; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__,TYPE_17__) ;
 int FUNC_5 (int ,TYPE_2__,char*) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_2__,TYPE_3__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*,TYPE_3__*) ;
 TYPE_6__* VAR_3 ;
 TYPE_5__ VAR_4 ;

void FUNC_9( netadr_t VAR_5, msg_t *VAR_6 ) {
 int VAR_7;
 client_t *VAR_8;
 int VAR_9;


 if ( VAR_6->cursize >= 4 && *(int *)VAR_6->data == -1) {
  FUNC_6( VAR_5, VAR_6 );
  return;
 }



 FUNC_1( VAR_6 );
 FUNC_2( VAR_6 );
 VAR_9 = FUNC_3( VAR_6 ) & 0xffff;


 for (VAR_7=0, VAR_8=VAR_4.clients ; VAR_7 < VAR_3->integer ; VAR_7++,VAR_8++) {
  if (VAR_8->state == VAR_0) {
   continue;
  }
  if ( !FUNC_4( VAR_5, VAR_8->netchan.remoteAddress ) ) {
   continue;
  }


  if (VAR_8->netchan.qport != VAR_9) {
   continue;
  }




  if (VAR_8->netchan.remoteAddress.port != VAR_5.port) {
   FUNC_0( "SV_PacketEvent: fixing up a translated port\n" );
   VAR_8->netchan.remoteAddress.port = VAR_5.port;
  }


  if (FUNC_8(VAR_8, VAR_6)) {



   if (VAR_8->state != VAR_1) {
    VAR_8->lastPacketTime = VAR_4.time;
    FUNC_7( VAR_8, VAR_6 );
   }
  }
  return;
 }



 FUNC_5( VAR_2, VAR_5, "disconnect" );
}
