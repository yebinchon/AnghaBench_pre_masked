
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usercmd_t ;
typedef int qboolean ;
struct TYPE_2__ {int cmdNumber; int * cmds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

qboolean FUNC_1( int VAR_6, usercmd_t *VAR_7 ) {



 if ( VAR_6 > VAR_3.cmdNumber ) {
  FUNC_0( VAR_2, "CL_GetUserCmd: %i >= %i", VAR_6, VAR_3.cmdNumber );
 }



 if ( VAR_6 <= VAR_3.cmdNumber - VAR_0 ) {
  return VAR_4;
 }

 *VAR_7 = VAR_3.cmds[ VAR_6 & VAR_1 ];

 return VAR_5;
}
