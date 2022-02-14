
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int trType; int trTime; } ;
struct TYPE_7__ {TYPE_1__ pos; } ;
struct TYPE_8__ {TYPE_2__ s; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_9__ {int time; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;

void FUNC_0( gentity_t *VAR_2 ) {
 VAR_2->s.pos.trTime = VAR_1.time;
 VAR_2->s.pos.trType = VAR_0;
}
