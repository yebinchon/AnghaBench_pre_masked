
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* persistant; } ;
typedef TYPE_1__ playerState_t ;
typedef int buf ;


 int FUNC_0 (int,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*,int) ;
 char* FUNC_2 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__,char*,int) ;

char *FUNC_7(void) {
 int VAR_5, VAR_6, VAR_7;
 char VAR_8[VAR_2];
 static char VAR_9[32];
 static int VAR_10;
 playerState_t VAR_11;

 if (!VAR_10)
  VAR_10 = FUNC_5("sv_maxclients");

 VAR_6 = -999999;
 VAR_7 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_10 && VAR_5 < VAR_1; VAR_5++) {
  FUNC_6(VAR_0+VAR_5, VAR_8, sizeof(VAR_8));

  if (!FUNC_4(VAR_8) || !FUNC_4(FUNC_2(VAR_8, "n"))) continue;

  if (FUNC_3(FUNC_2(VAR_8, "t")) == VAR_4) continue;

  FUNC_0(VAR_5, &VAR_11);
  if (VAR_11.persistant[VAR_3] > VAR_6) {
   VAR_6 = VAR_11.persistant[VAR_3];
   VAR_7 = VAR_5;
  }
 }
 FUNC_1(VAR_7, VAR_9, 32);
 return VAR_9;
}
