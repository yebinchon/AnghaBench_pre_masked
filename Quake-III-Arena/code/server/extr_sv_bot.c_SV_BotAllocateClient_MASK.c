
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int type; } ;
struct TYPE_10__ {TYPE_2__ remoteAddress; } ;
struct TYPE_11__ {scalar_t__ state; int rate; TYPE_3__ netchan; int lastPacketTime; TYPE_7__* gentity; } ;
typedef TYPE_4__ client_t ;
struct TYPE_8__ {int number; } ;
struct TYPE_14__ {TYPE_1__ s; } ;
struct TYPE_13__ {int integer; } ;
struct TYPE_12__ {int time; TYPE_4__* clients; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_7__* FUNC_0 (int) ;
 TYPE_6__* VAR_3 ;
 TYPE_5__ VAR_4 ;

int FUNC_1(void) {
 int VAR_5;
 client_t *VAR_6;


 for ( VAR_5 = 0, VAR_6 = VAR_4.clients; VAR_5 < VAR_3->integer; VAR_5++, VAR_6++ ) {
  if ( VAR_6->state == VAR_1 ) {
   break;
  }
 }

 if ( VAR_5 == VAR_3->integer ) {
  return -1;
 }

 VAR_6->gentity = FUNC_0( VAR_5 );
 VAR_6->gentity->s.number = VAR_5;
 VAR_6->state = VAR_0;
 VAR_6->lastPacketTime = VAR_4.time;
 VAR_6->netchan.remoteAddress.type = VAR_2;
 VAR_6->rate = 16384;

 return VAR_5;
}
