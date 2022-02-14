
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int* vec3_t ;
typedef int qboolean ;
struct TYPE_6__ {int waterlevel; int (* pointcontents ) (int*,int ) ;TYPE_1__* ps; } ;
struct TYPE_5__ {int* forward; } ;
struct TYPE_4__ {int pm_time; int* velocity; int pm_flags; int clientNum; int origin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int*,int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int,int*) ;
 TYPE_3__* VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int*,int ) ;
 int FUNC_4 (int*,int ) ;

__attribute__((used)) static qboolean FUNC_5( void ) {
 vec3_t VAR_6;
 int VAR_7;
 vec3_t VAR_8;

 if (VAR_2->ps->pm_time) {
  return VAR_4;
 }


 if ( VAR_2->waterlevel != 2 ) {
  return VAR_4;
 }

 VAR_8[0] = VAR_3.forward[0];
 VAR_8[1] = VAR_3.forward[1];
 VAR_8[2] = 0;
 FUNC_1 (VAR_8);

 FUNC_0 (VAR_2->ps->origin, 30, VAR_8, VAR_6);
 VAR_6[2] += 4;
 VAR_7 = VAR_2->pointcontents (VAR_6, VAR_2->ps->clientNum );
 if ( !(VAR_7 & VAR_0) ) {
  return VAR_4;
 }

 VAR_6[2] += 16;
 VAR_7 = VAR_2->pointcontents (VAR_6, VAR_2->ps->clientNum );
 if ( VAR_7 ) {
  return VAR_4;
 }


 FUNC_2 (VAR_3.forward, 200, VAR_2->ps->velocity);
 VAR_2->ps->velocity[2] = 350;

 VAR_2->ps->pm_flags |= VAR_1;
 VAR_2->ps->pm_time = 2000;

 return VAR_5;
}
