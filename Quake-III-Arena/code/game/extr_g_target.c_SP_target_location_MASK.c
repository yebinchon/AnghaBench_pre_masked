
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int origin; } ;
struct TYPE_7__ {TYPE_1__ s; scalar_t__ nextthink; int think; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_8__ {scalar_t__ time; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;

void FUNC_1( gentity_t *VAR_2 ){
 VAR_2->think = VAR_1;
 VAR_2->nextthink = VAR_0.time + 200;

 FUNC_0( VAR_2, VAR_2->s.origin );
}
