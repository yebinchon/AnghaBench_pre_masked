
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int think; scalar_t__ nextthink; } ;
typedef TYPE_1__ gentity_t ;
struct TYPE_5__ {scalar_t__ time; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;

void FUNC_0 (gentity_t *VAR_2) {

 VAR_2->nextthink = VAR_0.time + 300;
 VAR_2->think = VAR_1;
}
