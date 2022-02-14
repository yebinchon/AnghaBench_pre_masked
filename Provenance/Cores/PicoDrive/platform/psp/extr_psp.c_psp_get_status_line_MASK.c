
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hour; int minutes; } ;
typedef TYPE_1__ pspTime ;
typedef int buff ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,int,char*,int,int,...) ;
 int FUNC_5 (char*) ;

char *FUNC_6(void)
{
 static char VAR_0[64];
 int VAR_1, VAR_2, VAR_3;
 pspTime VAR_4;

 VAR_1 = FUNC_3(&VAR_4);
 VAR_2 = FUNC_0();
 VAR_3 = FUNC_1();
 if (VAR_1 < 0 || VAR_2 < 0 || VAR_3 < 0) return ((void*)0);

 FUNC_4(VAR_0, sizeof(VAR_0), "%02i:%02i  bat: %3i%%", VAR_4.hour, VAR_4.minutes, VAR_2);
 if (!FUNC_2())
  FUNC_4(VAR_0+FUNC_5(VAR_0), sizeof(VAR_0)-FUNC_5(VAR_0), " (%i:%02i)", VAR_3/60, VAR_3%60);
 return VAR_0;
}
