
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nextthink; scalar_t__ think; int target; int enemy; } ;
typedef TYPE_1__ gentity_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( gentity_t *VAR_0 ) {
 VAR_0->enemy = FUNC_0( VAR_0->target );
 VAR_0->think = 0;
 VAR_0->nextthink = 0;
}
