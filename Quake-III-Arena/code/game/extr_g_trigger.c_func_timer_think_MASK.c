
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int wait; int random; scalar_t__ nextthink; int activator; } ;
typedef TYPE_1__ gentity_t ;
struct TYPE_6__ {scalar_t__ time; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 () ;
 TYPE_2__ VAR_0 ;

void FUNC_2( gentity_t *VAR_1 ) {
 FUNC_0 (VAR_1, VAR_1->activator);

 VAR_1->nextthink = VAR_0.time + 1000 * ( VAR_1->wait + FUNC_1() * VAR_1->random );
}
