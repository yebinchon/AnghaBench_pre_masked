
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int number; } ;
struct TYPE_7__ {int linked; } ;
struct TYPE_10__ {TYPE_3__ s; TYPE_1__ r; } ;
typedef TYPE_4__ sharedEntity_t ;
struct TYPE_11__ {int num_entities; TYPE_2__* svEntities; } ;
struct TYPE_8__ {TYPE_3__ baseline; } ;


 TYPE_4__* FUNC_0 (int) ;
 TYPE_5__ VAR_0 ;

void FUNC_1( void ) {
 sharedEntity_t *VAR_1;
 int VAR_2;

 for ( VAR_2 = 1; VAR_2 < VAR_0.num_entities ; VAR_2++ ) {
  VAR_1 = FUNC_0(VAR_2);
  if (!VAR_1->r.linked) {
   continue;
  }
  VAR_1->s.number = VAR_2;




  VAR_0.svEntities[VAR_2].baseline = VAR_1->s;
 }
}
