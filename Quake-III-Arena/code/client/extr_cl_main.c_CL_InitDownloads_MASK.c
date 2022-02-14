
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int missingfiles ;
struct TYPE_6__ {int integer; } ;
struct TYPE_5__ {char* downloadList; } ;
struct TYPE_4__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,int,int ) ;
 TYPE_3__* VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_4(void) {
  char VAR_6[1024];

  if ( !VAR_1->integer )
  {


    if (FUNC_3( VAR_6, sizeof( VAR_6 ), VAR_4 ) )
    {


      FUNC_2( "\nWARNING: You are missing some files referenced by the server:\n%s"
                  "You might not be able to join the game\n"
                  "Go to the setting menu to turn on autodownload, or get the file elsewhere\n\n", VAR_6 );
    }
  }
  else if ( FUNC_3( VAR_2.downloadList, sizeof( VAR_2.downloadList ) , VAR_5 ) ) {

    FUNC_2("Need paks: %s\n", VAR_2.downloadList );

  if ( *VAR_2.downloadList ) {

   VAR_3.state = VAR_0;
   FUNC_1();
   return;
  }

 }

 FUNC_0();
}
