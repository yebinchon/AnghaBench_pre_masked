
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tempHighwater; scalar_t__ temp; scalar_t__ permanent; scalar_t__ mark; } ;
struct TYPE_5__ {scalar_t__ tempHighwater; scalar_t__ temp; scalar_t__ permanent; scalar_t__ mark; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_1__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int * VAR_4 ;

void FUNC_6( void ) {


 FUNC_1();
 FUNC_2();

 FUNC_4();

 FUNC_0();

 VAR_1.mark = 0;
 VAR_1.permanent = 0;
 VAR_1.temp = 0;
 VAR_1.tempHighwater = 0;

 VAR_0.mark = 0;
 VAR_0.permanent = 0;
 VAR_0.temp = 0;
 VAR_0.tempHighwater = 0;

 VAR_2 = &VAR_1;
 VAR_3 = &VAR_0;

 FUNC_3( "Hunk_Clear: reset the hunk ok\n" );
 FUNC_5();



}
