
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sfx_t ;
typedef scalar_t__ qboolean ;
struct TYPE_2__ {int integer; } ;
typedef TYPE_1__ cvar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int (*) ()) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (char*,char*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;

void FUNC_10( void ) {
 cvar_t *VAR_17;
 qboolean VAR_18;

 FUNC_2("\n------- sound initialization -------\n");

 VAR_15 = FUNC_3 ("s_volume", "0.8", VAR_0);
 VAR_7 = FUNC_3 ("s_musicvolume", "0.25", VAR_0);
 VAR_9 = FUNC_3 ("s_separation", "0.5", VAR_0);
 VAR_3 = FUNC_3 ("s_doppler", "1", VAR_0);
 VAR_4 = FUNC_3 ("s_khz", "22", VAR_0);
 VAR_6 = FUNC_3 ("s_mixahead", "0.2", VAR_0);

 VAR_5 = FUNC_3 ("s_mixPreStep", "0.05", VAR_0);
 VAR_10 = FUNC_3 ("s_show", "0", VAR_1);
 VAR_14 = FUNC_3 ("s_testsound", "0", VAR_1);

 VAR_17 = FUNC_3 ("s_initsound", "1", 0);
 if ( !VAR_17->integer ) {
  FUNC_2 ("not initializing.\n");
  FUNC_2("------------------------------------\n");
  return;
 }

 FUNC_0("play", FUNC_6);
 FUNC_0("music", FUNC_5);
 FUNC_0("s_list", FUNC_8);
 FUNC_0("s_info", FUNC_7);
 FUNC_0("s_stop", FUNC_9);

 VAR_18 = FUNC_4();
 FUNC_2("------------------------------------\n");

 if ( VAR_18 ) {
  VAR_12 = 1;
  VAR_11 = 1;


  FUNC_1(VAR_16, 0, sizeof(sfx_t *)*VAR_2);

  VAR_13 = 0;
  VAR_8 = 0;

  FUNC_9 ();

  FUNC_7();
 }

}
