
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (char*,char*,int) ;
 int FUNC_2 () ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 TYPE_1__* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

void FUNC_3(void) {
 FUNC_0 ("\n------- Input Initialization -------\n");

  VAR_6 = FUNC_1 ("in_mouse", "1", VAR_0);
  VAR_3 = FUNC_1 ("in_dgamouse", "1", VAR_0);


 VAR_8 = FUNC_1 ("in_subframe", "1", VAR_0);


 VAR_7 = FUNC_1 ("in_nograb", "0", 0);


  VAR_4 = FUNC_1 ("in_joystick", "0", VAR_0|VAR_1);

  VAR_5 = FUNC_1 ("in_debugjoystick", "0", VAR_2);
  VAR_9 = FUNC_1 ("joy_threshold", "0.15", VAR_0);

  if (VAR_6->value)
    VAR_10 = VAR_12;
  else
    VAR_10 = VAR_11;

  FUNC_2( );
 FUNC_0 ("------------------------------------\n");
}
