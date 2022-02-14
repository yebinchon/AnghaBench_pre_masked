
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 void* FUNC_1 (char*,char*,int) ;
 int FUNC_2 () ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;

void FUNC_3( void ) {

 VAR_8 = FUNC_1 ("in_midi", "0", VAR_0);
 VAR_11 = FUNC_1 ("in_midiport", "1", VAR_0);
 VAR_9 = FUNC_1 ("in_midichannel", "1", VAR_0);
 VAR_10 = FUNC_1 ("in_mididevice", "0", VAR_0);

 FUNC_0( "midiinfo", VAR_3 );


  VAR_12 = FUNC_1 ("in_mouse", "1", VAR_0|VAR_1);
 VAR_7 = FUNC_1 ("in_logitechbug", "0", VAR_0);


 VAR_6 = FUNC_1 ("in_joystick", "0", VAR_0|VAR_1);
 VAR_5 = FUNC_1 ("in_joyBallScale", "0.02", VAR_0);
 VAR_4 = FUNC_1 ("in_debugjoystick", "0", VAR_2);

 VAR_13 = FUNC_1 ("joy_threshold", "0.15", VAR_0);

 FUNC_2();
}
