
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ realtime; int state; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 void* FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 () ;
 void* VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 void* VAR_31 ;
 void* VAR_32 ;
 void* VAR_33 ;
 void* VAR_34 ;
 void* VAR_35 ;
 void* VAR_36 ;
 void* VAR_37 ;
 void* VAR_38 ;
 void* VAR_39 ;
 void* VAR_40 ;
 void* VAR_41 ;
 void* VAR_42 ;
 void* VAR_43 ;
 void* VAR_44 ;
 void* VAR_45 ;
 void* VAR_46 ;
 void* VAR_47 ;
 void* VAR_48 ;
 void* VAR_49 ;
 void* VAR_50 ;
 void* VAR_51 ;
 void* VAR_52 ;
 void* VAR_53 ;
 void* VAR_54 ;
 TYPE_1__ VAR_55 ;
 void* VAR_56 ;
 void* VAR_57 ;
 void* VAR_58 ;
 void* VAR_59 ;
 void* VAR_60 ;
 void* VAR_61 ;
 void* VAR_62 ;

void FUNC_10( void ) {
 FUNC_5( "----- Client Initialization -----\n" );

 FUNC_6 ();

 FUNC_0 ();

 VAR_55.state = VAR_0;

 VAR_55.realtime = 0;

 FUNC_1 ();




 VAR_41 = FUNC_7( "cl_noprint", "0", 0 );
 VAR_38 = FUNC_7 ("cl_motd", "1", 0);

 VAR_53 = FUNC_7 ("cl_timeout", "200", 0);

 VAR_51 = FUNC_7 ("cl_timeNudge", "0", VAR_26 );
 VAR_50 = FUNC_7 ("cl_shownet", "0", VAR_26 );
 VAR_48 = FUNC_7 ("cl_showSend", "0", VAR_26 );
 VAR_49 = FUNC_7 ("cl_showTimeDelta", "0", VAR_26 );
 VAR_35 = FUNC_7 ("cl_freezeDemo", "0", VAR_26 );
 VAR_62 = FUNC_7 ("rconPassword", "", VAR_26 );
 VAR_28 = FUNC_7( "activeAction", "", VAR_26 );

 VAR_52 = FUNC_7 ("timedemo", "0", 0);
 VAR_31 = FUNC_7 ("cl_avidemo", "0", 0);
 VAR_33 = FUNC_7 ("cl_forceavidemo", "0", 0);

 VAR_61 = FUNC_7 ("rconAddress", "", 0);

 VAR_54 = FUNC_7 ("cl_yawspeed", "140", VAR_23);
 VAR_43 = FUNC_7 ("cl_pitchspeed", "140", VAR_23);
 VAR_30 = FUNC_7 ("cl_anglespeedkey", "1.5", 0);

 VAR_37 = FUNC_7 ("cl_maxpackets", "30", VAR_23 );
 VAR_42 = FUNC_7 ("cl_packetdup", "1", VAR_23 );

 VAR_44 = FUNC_7 ("cl_run", "1", VAR_23);
 VAR_45 = FUNC_7 ("sensitivity", "5", VAR_23);
 VAR_40 = FUNC_7 ("cl_mouseAccel", "0", VAR_23);
 VAR_34 = FUNC_7( "cl_freelook", "1", VAR_23 );

 VAR_47 = FUNC_7 ("cl_showmouserate", "0", 0);

 VAR_29 = FUNC_7 ("cl_allowDownload", "0", VAR_23);

 VAR_32 = FUNC_7 ("cl_conXOffset", "0", 0);




 VAR_36 = FUNC_7 ("r_inGameVideo", "1", VAR_23);


 VAR_46 = FUNC_7 ("cl_serverStatusResendTime", "750", 0);



 FUNC_7 ("cg_autoswitch", "1", VAR_23);

 VAR_58 = FUNC_7 ("m_pitch", "0.022", VAR_23);
 VAR_60 = FUNC_7 ("m_yaw", "0.022", VAR_23);
 VAR_57 = FUNC_7 ("m_forward", "0.25", VAR_23);
 VAR_59 = FUNC_7 ("m_side", "0.25", VAR_23);




 VAR_56 = FUNC_7 ("m_filter", "0", VAR_23);


 VAR_39 = FUNC_7( "cl_motdString", "", VAR_24 );

 FUNC_7( "cl_maxPing", "800", VAR_23 );



 FUNC_7 ("name", "UnnamedPlayer", VAR_27 | VAR_23 );
 FUNC_7 ("rate", "3000", VAR_27 | VAR_23 );
 FUNC_7 ("snaps", "20", VAR_27 | VAR_23 );
 FUNC_7 ("model", "sarge", VAR_27 | VAR_23 );
 FUNC_7 ("headmodel", "sarge", VAR_27 | VAR_23 );
 FUNC_7 ("team_model", "james", VAR_27 | VAR_23 );
 FUNC_7 ("team_headmodel", "*james", VAR_27 | VAR_23 );
 FUNC_7 ("g_redTeam", "Stroggs", VAR_25 | VAR_23);
 FUNC_7 ("g_blueTeam", "Pagans", VAR_25 | VAR_23);
 FUNC_7 ("color1", "4", VAR_27 | VAR_23 );
 FUNC_7 ("color2", "5", VAR_27 | VAR_23 );
 FUNC_7 ("handicap", "100", VAR_27 | VAR_23 );
 FUNC_7 ("teamtask", "0", VAR_27 );
 FUNC_7 ("sex", "male", VAR_27 | VAR_23 );
 FUNC_7 ("cl_anonymous", "0", VAR_27 | VAR_23 );

 FUNC_7 ("password", "", VAR_27);
 FUNC_7 ("cg_predictItems", "1", VAR_27 | VAR_23 );



 FUNC_7 ("cg_viewsize", "100", VAR_23 );




 FUNC_4 ("cmd", VAR_5);
 FUNC_4 ("configstrings", VAR_2);
 FUNC_4 ("clientinfo", VAR_1);
 FUNC_4 ("snd_restart", VAR_20);
 FUNC_4 ("vid_restart", VAR_22);
 FUNC_4 ("disconnect", VAR_4);
 FUNC_4 ("record", VAR_14);
 FUNC_4 ("demo", VAR_11);
 FUNC_4 ("cinematic", VAR_10);
 FUNC_4 ("stoprecord", VAR_21);
 FUNC_4 ("connect", VAR_3);
 FUNC_4 ("reconnect", VAR_13);
 FUNC_4 ("localservers", VAR_7);
 FUNC_4 ("globalservers", VAR_6);
 FUNC_4 ("rcon", VAR_12);
 FUNC_4 ("setenv", VAR_18 );
 FUNC_4 ("ping", VAR_9 );
 FUNC_4 ("serverstatus", VAR_16 );
 FUNC_4 ("showip", VAR_19 );
 FUNC_4 ("fs_openedList", VAR_8 );
 FUNC_4 ("fs_referencedList", VAR_15 );
 FUNC_4 ("model", VAR_17 );
 FUNC_2();

 FUNC_9 ();

 FUNC_3 ();

 FUNC_8( "cl_running", "1" );

 FUNC_5( "----- Client Initialization Complete -----\n" );
}
