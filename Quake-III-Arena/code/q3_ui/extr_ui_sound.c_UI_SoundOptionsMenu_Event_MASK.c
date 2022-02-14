
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int id; } ;
typedef TYPE_4__ menucommon_s ;
struct TYPE_8__ {int curvalue; } ;
struct TYPE_7__ {int curvalue; } ;
struct TYPE_6__ {int curvalue; } ;
struct TYPE_10__ {TYPE_3__ quality; TYPE_2__ musicvolume; TYPE_1__ sfxvolume; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_5__ VAR_2 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void FUNC_7( void* VAR_3, int VAR_4 ) {
 if( VAR_4 != VAR_1 ) {
  return;
 }

 switch( ((menucommon_s*)VAR_3)->id ) {
 case 132:
  FUNC_4();
  FUNC_2();
  break;

 case 134:
  FUNC_4();
  FUNC_0();
  break;

 case 128:
  break;

 case 130:
  FUNC_4();
  FUNC_3();
  break;

 case 133:
  FUNC_6( "s_volume", VAR_2.sfxvolume.curvalue / 10 );
  break;

 case 131:
  FUNC_6( "s_musicvolume", VAR_2.musicvolume.curvalue / 10 );
  break;

 case 129:
  if( VAR_2.quality.curvalue ) {
   FUNC_6( "s_khz", 22 );
   FUNC_6( "s_compression", 0 );
  }
  else {
   FUNC_6( "s_khz", 11 );
   FUNC_6( "s_compression", 1 );
  }
  FUNC_1();
  FUNC_5( VAR_0, "snd_restart\n" );
  break;
 case 135:
  FUNC_4();
  break;
 }
}
