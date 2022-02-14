
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* msg; } ;
typedef TYPE_1__ SSchedMsg ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int * VAR_0 ;
 int FUNC_2 (char*,int ,char,int ) ;

void FUNC_3(SSchedMsg *VAR_1) {
  char VAR_2 = *VAR_1->msg;
  char *VAR_3 = VAR_1->msg + 1;

  FUNC_0("msg:%s is received from mgmt", VAR_0[VAR_2]);

  FUNC_2(VAR_3, 0, VAR_2, 0);

  FUNC_1(VAR_1->msg);
}
