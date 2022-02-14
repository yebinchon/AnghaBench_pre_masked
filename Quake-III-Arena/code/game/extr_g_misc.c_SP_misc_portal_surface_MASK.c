
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int origin2; int origin; int eType; } ;
struct TYPE_7__ {int svFlags; int maxs; int mins; } ;
struct TYPE_9__ {scalar_t__ nextthink; int think; TYPE_2__ s; int target; TYPE_1__ r; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_10__ {scalar_t__ time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_5__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;

void FUNC_3(gentity_t *VAR_4) {
 FUNC_0( VAR_4->r.mins );
 FUNC_0( VAR_4->r.maxs );
 FUNC_2 (VAR_4);

 VAR_4->r.svFlags = VAR_1;
 VAR_4->s.eType = VAR_0;

 if ( !VAR_4->target ) {
  FUNC_1( VAR_4->s.origin, VAR_4->s.origin2 );
 } else {
  VAR_4->think = VAR_3;
  VAR_4->nextthink = VAR_2.time + 100;
 }
}
