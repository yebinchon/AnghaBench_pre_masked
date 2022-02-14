
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int* vec3_t ;
typedef int qboolean ;
struct TYPE_3__ {int origin; } ;
typedef TYPE_1__ bot_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int*) ;

qboolean FUNC_2(bot_state_t *VAR_2) {
 vec3_t VAR_3;

 FUNC_0(VAR_2->origin, VAR_3);
 VAR_3[2] -= 23;
 return (FUNC_1(VAR_3) & (VAR_0|VAR_1));
}
