
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* msg; } ;
typedef TYPE_1__ SSchedMsg ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,char,int ) ;
 int * VAR_0 ;

void FUNC_4(SSchedMsg *VAR_1) {
  char VAR_2 = *VAR_1->msg;
  char *VAR_3 = VAR_1->msg + 1;
  FUNC_1("msg:%s is received from dnode", VAR_0[VAR_2]);

  FUNC_3(VAR_3, 0, VAR_2, FUNC_2(0));
  FUNC_0(VAR_1->msg);
}
