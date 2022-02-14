
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {char* string; } ;
struct TYPE_6__ {char* string; } ;
struct TYPE_5__ {int string; } ;
struct TYPE_8__ {int nummodels; char** modelnames; int selectedmodel; int modelpage; TYPE_3__ skinname; TYPE_2__ modelname; int modelskin; TYPE_1__ playername; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;
 TYPE_4__ VAR_1 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int ,int) ;

__attribute__((used)) static void FUNC_8( void )
{
 int VAR_2;
 int VAR_3;
 char VAR_4[64];
 char* VAR_5;
 char* VAR_6;


 FUNC_7( "name", VAR_1.playername.string, 16 );
 FUNC_0( VAR_1.playername.string );


 FUNC_7( "model", VAR_1.modelskin, 64 );


 for (VAR_2=0; VAR_2<VAR_1.nummodels; VAR_2++)
 {

  VAR_5 = VAR_1.modelnames[VAR_2] + FUNC_5("models/players/");
  VAR_6 = FUNC_6(VAR_5,"icon_");
  if (VAR_6)
  {
   FUNC_2(VAR_4,VAR_5,VAR_6-VAR_5+1);
   FUNC_4(VAR_4,VAR_6 + 5);
  }
  else
   continue;

  if (!FUNC_1( VAR_1.modelskin, VAR_4 ))
  {

   VAR_1.selectedmodel = VAR_2;
   VAR_1.modelpage = VAR_2/VAR_0;


   VAR_3 = VAR_6-VAR_5;
   if (VAR_3 > 16)
    VAR_3 = 16;
   FUNC_2( VAR_1.modelname.string, VAR_5, VAR_3 );
   FUNC_3( VAR_1.modelname.string );


   VAR_3 = FUNC_5(VAR_6+5)+1;
   if (VAR_3 > 16)
    VAR_3 = 16;
   FUNC_2( VAR_1.skinname.string, VAR_6+5, VAR_3 );
   FUNC_3( VAR_1.skinname.string );
   break;
  }
 }
}
