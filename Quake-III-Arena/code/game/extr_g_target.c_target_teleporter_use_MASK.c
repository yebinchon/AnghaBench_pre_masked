
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int angles; int origin; } ;
struct TYPE_9__ {TYPE_1__ s; int target; int client; } ;
typedef TYPE_2__ gentity_t ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

void FUNC_3( gentity_t *VAR_0, gentity_t *VAR_1, gentity_t *VAR_2 ) {
 gentity_t *VAR_3;

 if (!VAR_2->client)
  return;
 VAR_3 = FUNC_0( VAR_0->target );
 if (!VAR_3) {
  FUNC_1 ("Couldn't find teleporter destination\n");
  return;
 }

 FUNC_2( VAR_2, VAR_3->s.origin, VAR_3->s.angles );
}
