
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ state; } ;
typedef TYPE_1__ client_t ;
struct TYPE_13__ {scalar_t__ integer; } ;
struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {int numSnapshotEntities; TYPE_1__* clients; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int) ;
 TYPE_4__* VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_2__ VAR_4 ;

void FUNC_6( void ) {
 int VAR_5;
 int VAR_6;
 client_t *VAR_7;
 int VAR_8;


 VAR_8 = 0;
 for ( VAR_6 = 0 ; VAR_6 < VAR_3->integer ; VAR_6++ ) {
  if ( VAR_4.clients[VAR_6].state >= VAR_0 ) {
   if (VAR_6 > VAR_8)
    VAR_8 = VAR_6;
  }
 }
 VAR_8++;

 VAR_5 = VAR_3->integer;

 FUNC_3( VAR_8 );

 if ( VAR_3->integer == VAR_5 ) {
  return;
 }

 VAR_7 = FUNC_1( VAR_8 * sizeof(client_t) );

 for ( VAR_6 = 0 ; VAR_6 < VAR_8 ; VAR_6++ ) {
  if ( VAR_4.clients[VAR_6].state >= VAR_0 ) {
   VAR_7[VAR_6] = VAR_4.clients[VAR_6];
  }
  else {
   FUNC_0(&VAR_7[VAR_6], 0, sizeof(client_t));
  }
 }


 FUNC_4( VAR_4.clients );


 VAR_4.clients = FUNC_5 ( VAR_3->integer * sizeof(client_t) );
 FUNC_0( VAR_4.clients, 0, VAR_3->integer * sizeof(client_t) );


 for ( VAR_6 = 0 ; VAR_6 < VAR_8 ; VAR_6++ ) {
  if ( VAR_7[VAR_6].state >= VAR_0 ) {
   VAR_4.clients[VAR_6] = VAR_7[VAR_6];
  }
 }


 FUNC_2( VAR_7 );


 if ( VAR_2->integer ) {
  VAR_4.numSnapshotEntities = VAR_3->integer * VAR_1 * 64;
 } else {

  VAR_4.numSnapshotEntities = VAR_3->integer * 4 * 64;
 }
}
