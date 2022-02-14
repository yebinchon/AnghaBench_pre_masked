
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* msg; int * thandle; int * ahandle; int fp; } ;
typedef TYPE_1__ SSchedMsg ;
typedef int SMgmtObj ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int ,TYPE_1__*) ;

int FUNC_2(SMgmtObj *VAR_3, char *VAR_4, int VAR_5) {
  FUNC_0("msg:%s is sent to mnode", VAR_2[*(VAR_4-1)]);




  SSchedMsg VAR_6;
  VAR_6.fp = VAR_1;
  VAR_6.msg = VAR_4 - 1;
  VAR_6.ahandle = ((void*)0);
  VAR_6.thandle = ((void*)0);
  FUNC_1(VAR_0, &VAR_6);

  return 0;
}
