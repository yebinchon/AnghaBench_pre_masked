
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int id; } ;
typedef TYPE_7__ menucommon_s ;
struct TYPE_14__ {int string; } ;
struct TYPE_13__ {int string; } ;
struct TYPE_16__ {int modelpage; char** modelnames; int selectedmodel; TYPE_6__ skinname; TYPE_5__ modelname; int modelskin; TYPE_4__* picbuttons; TYPE_2__* pics; } ;
struct TYPE_11__ {int flags; } ;
struct TYPE_12__ {TYPE_3__ generic; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_10__ {TYPE_1__ generic; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 TYPE_8__ VAR_8 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static void FUNC_7( void* VAR_9, int VAR_10 )
{
 int VAR_11;
 int VAR_12;
 char* VAR_13;
 char* VAR_14;
 int VAR_15;

 if (VAR_10 != VAR_7)
  return;

 for (VAR_15=0; VAR_15<VAR_4*VAR_3; VAR_15++)
 {

   VAR_8.pics[VAR_15].generic.flags &= ~VAR_5;
   VAR_8.picbuttons[VAR_15].generic.flags |= VAR_6;
 }


 VAR_15 = ((menucommon_s*)VAR_9)->id - VAR_0;
 VAR_8.pics[VAR_15].generic.flags |= VAR_5;
 VAR_8.picbuttons[VAR_15].generic.flags &= ~VAR_6;


 VAR_11 = VAR_8.modelpage*VAR_2 + VAR_15;
 VAR_13 = VAR_8.modelnames[VAR_11] + FUNC_4("models/players/");
 VAR_14 = FUNC_5(VAR_13,"icon_");
 if (VAR_14)
 {

  FUNC_1(VAR_8.modelskin,VAR_13,VAR_14-VAR_13+1);
  FUNC_3(VAR_8.modelskin,VAR_14 + 5);


  VAR_12 = VAR_14-VAR_13;
  if (VAR_12 > 16)
   VAR_12 = 16;
  FUNC_1( VAR_8.modelname.string, VAR_13, VAR_12 );
  FUNC_2( VAR_8.modelname.string );


  VAR_12 = FUNC_4(VAR_14+5)+1;
  if (VAR_12 > 16)
   VAR_12 = 16;
  FUNC_1( VAR_8.skinname.string, VAR_14+5, VAR_12 );
  FUNC_2( VAR_8.skinname.string );

  VAR_8.selectedmodel = VAR_11;

  if( FUNC_6() > VAR_1 ) {
   FUNC_0();
  }
 }
}
