
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int shader_t ;
struct TYPE_2__ {int ** sortedShaders; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_1__ VAR_4 ;

void FUNC_0( unsigned VAR_5, int *VAR_6, shader_t **VAR_7,
      int *VAR_8, int *VAR_9 ) {
 *VAR_8 = ( VAR_5 >> VAR_2 ) & 31;
 *VAR_7 = VAR_4.sortedShaders[ ( VAR_5 >> VAR_3 ) & (VAR_0-1) ];
 *VAR_6 = ( VAR_5 >> VAR_1 ) & 1023;
 *VAR_9 = VAR_5 & 3;
}
