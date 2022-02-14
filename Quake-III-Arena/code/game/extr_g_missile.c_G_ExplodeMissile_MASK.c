
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_14__ {size_t ownerNum; int currentOrigin; } ;
struct TYPE_12__ {int eType; int pos; } ;
struct TYPE_15__ {TYPE_3__ r; int splashMethodOfDeath; int splashRadius; scalar_t__ splashDamage; int parent; int freeAfterEvent; TYPE_1__ s; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_17__ {TYPE_2__* client; } ;
struct TYPE_16__ {int time; } ;
struct TYPE_13__ {int accuracy_hits; } ;


 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,int ,TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,int*) ;
 int FUNC_5 (int*) ;
 TYPE_7__* VAR_2 ;
 TYPE_6__ VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (TYPE_4__*) ;

void FUNC_7( gentity_t *VAR_5 ) {
 vec3_t VAR_6;
 vec3_t VAR_7;

 FUNC_0( &VAR_5->s.pos, VAR_3.time, VAR_7 );
 FUNC_5( VAR_7 );
 FUNC_4( VAR_5, VAR_7 );


 VAR_6[0] = VAR_6[1] = 0;
 VAR_6[2] = 1;

 VAR_5->s.eType = VAR_0;
 FUNC_2( VAR_5, VAR_1, FUNC_1( VAR_6 ) );

 VAR_5->freeAfterEvent = VAR_4;


 if ( VAR_5->splashDamage ) {
  if( FUNC_3( VAR_5->r.currentOrigin, VAR_5->parent, VAR_5->splashDamage, VAR_5->splashRadius, VAR_5
   , VAR_5->splashMethodOfDeath ) ) {
   VAR_2[VAR_5->r.ownerNum].client->accuracy_hits++;
  }
 }

 FUNC_6( VAR_5 );
}
