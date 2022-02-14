
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int* vec3_t ;
typedef int team_t ;
struct TYPE_6__ {int angles; int origin; } ;
struct TYPE_7__ {TYPE_1__ s; } ;
typedef TYPE_2__ gentity_t ;


 TYPE_2__* FUNC_0 (int,int ) ;
 TYPE_2__* FUNC_1 (int ,int*,int*) ;
 int FUNC_2 (int ,int*) ;
 int VAR_0 ;

gentity_t *FUNC_3 ( team_t VAR_1, int VAR_2, vec3_t VAR_3, vec3_t VAR_4 ) {
 gentity_t *VAR_5;

 VAR_5 = FUNC_0 ( VAR_2, VAR_1 );

 if (!VAR_5) {
  return FUNC_1( VAR_0, VAR_3, VAR_4 );
 }

 FUNC_2 (VAR_5->s.origin, VAR_3);
 VAR_3[2] += 9;
 FUNC_2 (VAR_5->s.angles, VAR_4);

 return VAR_5;
}
