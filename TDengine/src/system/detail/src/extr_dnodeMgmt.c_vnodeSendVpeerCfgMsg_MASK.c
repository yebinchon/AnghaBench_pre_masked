
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vnode; } ;
typedef TYPE_1__ SVpeerCfgMsg ;
typedef int SMgmtObj ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,int) ;

void FUNC_3(int VAR_2) {
  char * VAR_3, *VAR_4;
  int VAR_5;
  SVpeerCfgMsg *VAR_6;
  SMgmtObj * VAR_7 = &VAR_1;

  VAR_4 = FUNC_1(VAR_7, VAR_0);
  if (VAR_4 == ((void*)0)) return;
  VAR_3 = VAR_4;

  VAR_6 = (SVpeerCfgMsg *)VAR_3;
  VAR_6->vnode = FUNC_0(VAR_2);
  VAR_3 += sizeof(SVpeerCfgMsg);

  VAR_5 = VAR_3 - VAR_4;
  FUNC_2(VAR_7, VAR_4, VAR_5);
}
