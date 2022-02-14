
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* sid; void* vnode; } ;
typedef int SMgmtObj ;
typedef TYPE_1__ SMeterCfgMsg ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int VAR_1 ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,int) ;

int FUNC_3(int VAR_2, int VAR_3) {
  char * VAR_4, *VAR_5;
  int VAR_6;
  SMeterCfgMsg *VAR_7;
  SMgmtObj * VAR_8 = &VAR_1;

  VAR_5 = FUNC_1(VAR_8, VAR_0);
  if (VAR_5 == ((void*)0)) return -1;
  VAR_4 = VAR_5;

  VAR_7 = (SMeterCfgMsg *)VAR_4;
  VAR_7->vnode = FUNC_0(VAR_2);
  VAR_7->sid = FUNC_0(VAR_3);
  VAR_4 += sizeof(SMeterCfgMsg);

  VAR_6 = VAR_4 - VAR_5;
  return FUNC_2(VAR_8, VAR_5, VAR_6);
}
