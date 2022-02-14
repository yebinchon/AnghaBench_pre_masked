
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* msg; int fp; int * ahandle; } ;
typedef int SShellObj ;
typedef TYPE_1__ SSchedMsg ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_1 ;

int FUNC_3(char *VAR_2, int VAR_3, SShellObj *VAR_4) {
  SSchedMsg VAR_5;

  char *VAR_6 = FUNC_0(VAR_3);
  FUNC_1(VAR_6, VAR_2, VAR_3);
  VAR_5.msg = VAR_6;
  VAR_5.ahandle = VAR_4;
  VAR_5.fp = VAR_1;
  FUNC_2(VAR_0, &VAR_5);

  return VAR_3;
}
