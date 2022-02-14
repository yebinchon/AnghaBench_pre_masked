
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int splashDamage; int damage; } ;
typedef TYPE_1__ gentity_t ;


 int FUNC_0 (float*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ,float*) ;
 float* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_2 (gentity_t *VAR_3) {
 gentity_t *VAR_4;


 VAR_0[2] += 0.2f;
 FUNC_0( VAR_0 );

 VAR_4 = FUNC_1 (VAR_3, VAR_1, VAR_0);
 VAR_4->damage *= VAR_2;
 VAR_4->splashDamage *= VAR_2;


}
