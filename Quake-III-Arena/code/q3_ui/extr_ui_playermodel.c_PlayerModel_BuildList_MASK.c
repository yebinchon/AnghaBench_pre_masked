
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_2__ {int nummodels; int numpages; int * modelnames; scalar_t__ modelpage; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,int,char*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,char*,int) ;
 int FUNC_7 (char*,int ) ;
 char* FUNC_8 (char*,char*) ;

__attribute__((used)) static void FUNC_9( void )
{
 int VAR_4;
 int VAR_5;
 char VAR_6[2048];
 char VAR_7[2048];
 char VAR_8[64];
 char* VAR_9;
 char* VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 qboolean VAR_15;

 VAR_15 = FUNC_5("com_buildscript");

 VAR_3.modelpage = 0;
 VAR_3.nummodels = 0;


 VAR_4 = FUNC_6("models/players", "/", VAR_6, 2048 );
 VAR_9 = VAR_6;
 for (VAR_11=0; VAR_11<VAR_4 && VAR_3.nummodels < VAR_1; VAR_11++,VAR_9+=VAR_13+1)
 {
  VAR_13 = FUNC_4(VAR_9);

  if (VAR_13 && VAR_9[VAR_13-1]=='/') VAR_9[VAR_13-1]='\0';

  if (!FUNC_3(VAR_9,".") || !FUNC_3(VAR_9,".."))
   continue;


  VAR_5 = FUNC_6( FUNC_8("models/players/%s",VAR_9), "tga", VAR_7, 2048 );
  VAR_10 = VAR_7;
  for (VAR_12=0; VAR_12<VAR_5 && VAR_3.nummodels < VAR_1;VAR_12++,VAR_10+=VAR_14+1)
  {
   VAR_14 = FUNC_4(VAR_10);

   FUNC_0(VAR_10,VAR_8);


   if (!FUNC_2(VAR_8,"icon_",5))
   {
    FUNC_1( VAR_3.modelnames[VAR_3.nummodels++],
     sizeof( VAR_3.modelnames[VAR_3.nummodels] ),
     "models/players/%s/%s", VAR_9, VAR_8 );


   }

   if( VAR_15 ) {
    FUNC_7( FUNC_8( "sound/player/announce/%s_wins.wav", VAR_8), VAR_2 );
   }
  }
 }



 VAR_3.numpages = VAR_3.nummodels/VAR_0;
 if (VAR_3.nummodels % VAR_0)
  VAR_3.numpages++;
}
