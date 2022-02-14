
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usercmd_t ;
struct TYPE_4__ {int cmdNumber; int * cmds; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_1( void ) {
 usercmd_t *VAR_7;
 int VAR_8;


 if ( VAR_3.state < VAR_0 ) {
  return;
 }

 VAR_5 = VAR_4 - VAR_6;



 if ( VAR_5 > 200 ) {
  VAR_5 = 200;
 }
 VAR_6 = VAR_4;



 VAR_2.cmdNumber++;
 VAR_8 = VAR_2.cmdNumber & VAR_1;
 VAR_2.cmds[VAR_8] = FUNC_0 ();
 VAR_7 = &VAR_2.cmds[VAR_8];
}
