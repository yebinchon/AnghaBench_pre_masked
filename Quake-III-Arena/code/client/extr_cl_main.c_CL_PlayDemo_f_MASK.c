
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int retry ;
typedef int name ;
struct TYPE_4__ {char* demoName; int firstDemoFrameSkipped; int demoplaying; int demofile; } ;
struct TYPE_3__ {scalar_t__ state; char* servername; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,int *) ;
 int FUNC_3 () ;
 char* FUNC_4 (int) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int,char*,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,char*) ;
 int VAR_2 ;
 int FUNC_10 (char*,int *,int ) ;
 int VAR_3 ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*) ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_13 (char*) ;

void FUNC_14( void ) {
 char VAR_9[VAR_3];
 char *VAR_10, *VAR_11;
 int VAR_12, VAR_13;
 char VAR_14[VAR_3];

 if (FUNC_3() != 2) {
  FUNC_6 ("playdemo <demoname>\n");
  return;
 }


 FUNC_9( "sv_killserver", "1" );

 FUNC_0( VAR_8 );


 VAR_10 = FUNC_4(1);


 VAR_11 = VAR_10 + FUNC_13(VAR_10) - 6;
 if ((FUNC_13(VAR_10) > 6) && (VAR_11[0] == '.') && ((VAR_11[1] == 'd') || (VAR_11[1] == 'D')) && ((VAR_11[2] == 'm') || (VAR_11[2] == 'M')) && (VAR_11[3] == '_'))
 {
  VAR_12 = FUNC_12(VAR_11+4);
  VAR_13=0;
  while(VAR_6[VAR_13])
  {
   if (VAR_6[VAR_13] == VAR_12)
    break;
   VAR_13++;
  }
  if (VAR_6[VAR_13])
  {
   FUNC_7 (VAR_9, sizeof(VAR_9), "demos/%s", VAR_10);
   FUNC_10( VAR_9, &VAR_4.demofile, VAR_8 );
  } else {
   FUNC_6("Protocol %d not supported for demos\n", VAR_12);
   FUNC_11(VAR_14, VAR_10, sizeof(VAR_14));
   VAR_14[FUNC_13(VAR_14)-6] = 0;
   FUNC_2( VAR_14, VAR_9, &VAR_4.demofile );
  }
 } else {
  FUNC_2( VAR_10, VAR_9, &VAR_4.demofile );
 }

 if (!VAR_4.demofile) {
  FUNC_5( VAR_2, "couldn't open %s", VAR_9);
  return;
 }
 FUNC_11( VAR_4.demoName, FUNC_4(1), sizeof( VAR_4.demoName ) );

 FUNC_8();

 VAR_5.state = VAR_0;
 VAR_4.demoplaying = VAR_8;
 FUNC_11( VAR_5.servername, FUNC_4(1), sizeof( VAR_5.servername ) );


 while ( VAR_5.state >= VAR_0 && VAR_5.state < VAR_1 ) {
  FUNC_1();
 }


 VAR_4.firstDemoFrameSkipped = VAR_7;
}
