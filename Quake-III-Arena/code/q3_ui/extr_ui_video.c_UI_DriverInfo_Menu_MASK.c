
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int driverinfo_t ;
struct TYPE_9__ {int x; int y; int flags; int id; int callback; int name; void* type; } ;
struct TYPE_14__ {char* string; int width; int height; int focuspic; TYPE_1__ generic; int style; int color; } ;
struct TYPE_13__ {int draw; int fullscreen; } ;
struct TYPE_12__ {char* stringbuff; int numstrings; char** strings; TYPE_6__ menu; TYPE_8__ back; TYPE_8__ framer; TYPE_8__ framel; TYPE_8__ banner; } ;
struct TYPE_10__ {int extensions_string; } ;
struct TYPE_11__ {TYPE_2__ glconfig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_1 (TYPE_6__*,TYPE_8__*) ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (char*,int ,int) ;
 int VAR_12 ;
 int FUNC_3 (TYPE_6__*) ;
 int VAR_13 ;
 int FUNC_4 (TYPE_4__*,int ,int) ;
 int VAR_14 ;
 TYPE_4__ VAR_15 ;
 int FUNC_5 (char*) ;
 TYPE_3__ VAR_16 ;

__attribute__((used)) static void FUNC_6( void )
{
 char* VAR_17;
 int VAR_18;
 int VAR_19;


 FUNC_4( &VAR_15, 0 ,sizeof(driverinfo_t) );

 FUNC_0();

 VAR_15.menu.fullscreen = VAR_14;
 VAR_15.menu.draw = VAR_5;

 VAR_15.banner.generic.type = VAR_8;
 VAR_15.banner.generic.x = 320;
 VAR_15.banner.generic.y = 16;
 VAR_15.banner.string = "DRIVER INFO";
 VAR_15.banner.color = VAR_13;
 VAR_15.banner.style = VAR_12;

 VAR_15.framel.generic.type = VAR_7;
 VAR_15.framel.generic.name = VAR_2;
 VAR_15.framel.generic.flags = VAR_9;
 VAR_15.framel.generic.x = 0;
 VAR_15.framel.generic.y = 78;
 VAR_15.framel.width = 256;
 VAR_15.framel.height = 329;

 VAR_15.framer.generic.type = VAR_7;
 VAR_15.framer.generic.name = VAR_3;
 VAR_15.framer.generic.flags = VAR_9;
 VAR_15.framer.generic.x = 376;
 VAR_15.framer.generic.y = 76;
 VAR_15.framer.width = 256;
 VAR_15.framer.height = 334;

 VAR_15.back.generic.type = VAR_7;
 VAR_15.back.generic.name = VAR_0;
 VAR_15.back.generic.flags = VAR_10|VAR_11;
 VAR_15.back.generic.callback = VAR_4;
 VAR_15.back.generic.id = VAR_6;
 VAR_15.back.generic.x = 0;
 VAR_15.back.generic.y = 480-64;
 VAR_15.back.width = 128;
 VAR_15.back.height = 64;
 VAR_15.back.focuspic = VAR_1;





  FUNC_2(VAR_15.stringbuff, VAR_16.glconfig.extensions_string, 1024);


 VAR_17 = VAR_15.stringbuff;
 while ( VAR_15.numstrings<40 && *VAR_17 )
 {
  while ( *VAR_17 && *VAR_17 == ' ' )
   *VAR_17++ = '\0';


  if (*VAR_17 && *VAR_17 != ' ')
   VAR_15.strings[VAR_15.numstrings++] = VAR_17;

  while ( *VAR_17 && *VAR_17 != ' ' )
   VAR_17++;
 }


 for (VAR_18=0; VAR_18<VAR_15.numstrings; VAR_18++) {
  VAR_19 = FUNC_5(VAR_15.strings[VAR_18]);
  if (VAR_19 > 32) {
   VAR_15.strings[VAR_18][VAR_19-1] = '>';
   VAR_15.strings[VAR_18][VAR_19] = '\0';
  }
 }

 FUNC_1( &VAR_15.menu, &VAR_15.banner );
 FUNC_1( &VAR_15.menu, &VAR_15.framel );
 FUNC_1( &VAR_15.menu, &VAR_15.framer );
 FUNC_1( &VAR_15.menu, &VAR_15.back );

 FUNC_3( &VAR_15.menu );
}
