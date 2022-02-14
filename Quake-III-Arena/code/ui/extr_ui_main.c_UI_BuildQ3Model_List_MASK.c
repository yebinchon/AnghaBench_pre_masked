
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int scratch ;
struct TYPE_2__ {int q3HeadCount; char** q3HeadNames; int * q3HeadIcons; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,char*,int) ;
 int FUNC_7 (char*) ;
 TYPE_1__ VAR_1 ;
 char* FUNC_8 (char*,char*,...) ;

__attribute__((used)) static void FUNC_9( void )
{
 int VAR_2;
 int VAR_3;
 char VAR_4[2048];
 char VAR_5[2048];
 char VAR_6[64];
 char VAR_7[256];
 char* VAR_8;
 char* VAR_9;
 int VAR_10;
 int VAR_11, VAR_12, VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_1.q3HeadCount = 0;


 VAR_2 = FUNC_6("models/players", "/", VAR_4, 2048 );
 VAR_8 = VAR_4;
 for (VAR_10=0; VAR_10<VAR_2 && VAR_1.q3HeadCount < VAR_0; VAR_10++,VAR_8+=VAR_14+1)
 {
  VAR_14 = FUNC_5(VAR_8);

  if (VAR_14 && VAR_8[VAR_14-1]=='/') VAR_8[VAR_14-1]='\0';

  if (!FUNC_4(VAR_8,".") || !FUNC_4(VAR_8,".."))
   continue;


  VAR_3 = FUNC_6( FUNC_8("models/players/%s",VAR_8), "tga", VAR_5, 2048 );
  VAR_9 = VAR_5;
  for (VAR_11=0; VAR_11<VAR_3 && VAR_1.q3HeadCount < VAR_0;VAR_11++,VAR_9+=VAR_15+1)
  {
   VAR_15 = FUNC_5(VAR_9);

   FUNC_0(VAR_9,VAR_6);


   if (FUNC_3(VAR_6, "icon_", 5) == 0 && !(FUNC_2(VAR_6,"icon_blue") == 0 || FUNC_2(VAR_6,"icon_red") == 0))
   {
    if (FUNC_2(VAR_6, "icon_default") == 0) {
     FUNC_1( VAR_7, sizeof(VAR_7), VAR_8);
    } else {
     FUNC_1( VAR_7, sizeof(VAR_7), "%s/%s",VAR_8, VAR_6 + 5);
    }
    VAR_13 = 0;
    for(VAR_12=0;VAR_12<VAR_1.q3HeadCount;VAR_12++) {
     if (!FUNC_2(VAR_7, VAR_1.q3HeadNames[VAR_1.q3HeadCount])) {
      VAR_13 = 1;
      break;
     }
    }
    if (!VAR_13) {
     FUNC_1( VAR_1.q3HeadNames[VAR_1.q3HeadCount], sizeof(VAR_1.q3HeadNames[VAR_1.q3HeadCount]), VAR_7);
     VAR_1.q3HeadIcons[VAR_1.q3HeadCount++] = FUNC_7(FUNC_8("models/players/%s/%s",VAR_8,VAR_6));
    }
   }

  }
 }

}
