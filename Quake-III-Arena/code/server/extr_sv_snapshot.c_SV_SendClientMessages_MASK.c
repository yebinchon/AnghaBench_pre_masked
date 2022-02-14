
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ unsentFragmentStart; scalar_t__ unsentLength; scalar_t__ unsentFragments; } ;
struct TYPE_9__ {scalar_t__ nextSnapshotTime; TYPE_1__ netchan; int state; } ;
typedef TYPE_2__ client_t ;
struct TYPE_11__ {int integer; } ;
struct TYPE_10__ {scalar_t__ time; TYPE_2__* clients; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_4__* VAR_0 ;
 TYPE_3__ VAR_1 ;

void FUNC_3( void ) {
 int VAR_2;
 client_t *VAR_3;


 for (VAR_2=0, VAR_3 = VAR_1.clients ; VAR_2 < VAR_0->integer ; VAR_2++, VAR_3++) {
  if (!VAR_3->state) {
   continue;
  }

  if ( VAR_1.time < VAR_3->nextSnapshotTime ) {
   continue;
  }



  if ( VAR_3->netchan.unsentFragments ) {
   VAR_3->nextSnapshotTime = VAR_1.time +
    FUNC_1( VAR_3, VAR_3->netchan.unsentLength - VAR_3->netchan.unsentFragmentStart );
   FUNC_0( VAR_3 );
   continue;
  }


  FUNC_2( VAR_3 );
 }
}
