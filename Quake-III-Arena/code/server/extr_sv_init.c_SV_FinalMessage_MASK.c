
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_9__ {TYPE_1__ remoteAddress; } ;
struct TYPE_10__ {scalar_t__ state; int nextSnapshotTime; TYPE_2__ netchan; } ;
typedef TYPE_3__ client_t ;
struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {TYPE_3__* clients; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,char*,...) ;
 TYPE_5__* VAR_2 ;
 TYPE_4__ VAR_3 ;

void FUNC_2( char *VAR_4 ) {
 int VAR_5, VAR_6;
 client_t *VAR_7;


 for ( VAR_6 = 0 ; VAR_6 < 2 ; VAR_6++ ) {
  for (VAR_5=0, VAR_7 = VAR_3.clients ; VAR_5 < VAR_2->integer ; VAR_5++, VAR_7++) {
   if (VAR_7->state >= VAR_0) {

    if ( VAR_7->netchan.remoteAddress.type != VAR_1 ) {
     FUNC_1( VAR_7, "print \"%s\"", VAR_4 );
     FUNC_1( VAR_7, "disconnect" );
    }

    VAR_7->nextSnapshotTime = -1;
    FUNC_0( VAR_7 );
   }
  }
 }
}
