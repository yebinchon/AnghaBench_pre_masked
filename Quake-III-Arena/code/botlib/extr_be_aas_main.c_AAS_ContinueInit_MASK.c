
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int filename; scalar_t__ savefile; scalar_t__ initialized; int loaded; } ;
struct TYPE_3__ {int (* Print ) (int ,char*,int ) ;} ;


 scalar_t__ FUNC_0 (float) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ,char*,int ) ;

void FUNC_10(float VAR_4)
{

 if (!VAR_2.loaded) return;

 if (VAR_2.initialized) return;

 if (FUNC_0(VAR_4)) return;

 FUNC_1();


 if (VAR_2.savefile || ((int)FUNC_6("forcewrite")))
 {

  if ((int)FUNC_7("aasoptimize", "0")) FUNC_3();

  if (FUNC_5(VAR_2.filename))
  {
   VAR_3.Print(VAR_1, "%s written succesfully\n", VAR_2.filename);
  }
  else
  {
   VAR_3.Print(VAR_0, "couldn't write %s\n", VAR_2.filename);
  }
 }

 FUNC_2();

 FUNC_4();
}
