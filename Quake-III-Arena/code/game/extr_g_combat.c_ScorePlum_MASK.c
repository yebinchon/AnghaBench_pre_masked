
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_7__ {int time; int number; int otherEntityNum; } ;
struct TYPE_6__ {int singleClient; int svFlags; } ;
struct TYPE_8__ {TYPE_2__ s; TYPE_1__ r; } ;
typedef TYPE_3__ gentity_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ,int ) ;
 int VAR_1 ;

void FUNC_1( gentity_t *VAR_2, vec3_t VAR_3, int VAR_4 ) {
 gentity_t *VAR_5;

 VAR_5 = FUNC_0( VAR_3, VAR_0 );

 VAR_5->r.svFlags |= VAR_1;
 VAR_5->r.singleClient = VAR_2->s.number;

 VAR_5->s.otherEntityNum = VAR_2->s.number;
 VAR_5->s.time = VAR_4;
}
