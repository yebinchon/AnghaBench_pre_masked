
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int numOfVnodes; int lastCreate; TYPE_1__* vnodeGid; } ;
struct TYPE_4__ {int vnode; int ip; } ;
typedef TYPE_2__ SVgObj ;
typedef int STabObj ;
typedef int SDnodeObj ;


 int VAR_0 ;
 char* FUNC_0 (int *,char*,int ) ;
 int * FUNC_1 (int ) ;
 char* FUNC_2 (int *,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char*,int) ;

int FUNC_5(STabObj *VAR_1, SVgObj *VAR_2) {
  char * VAR_3, *VAR_4;
  int VAR_5, VAR_6 = 0;
  SDnodeObj *VAR_7;
  uint64_t VAR_8;

  VAR_8 = FUNC_3();

  for (VAR_5 = 0; VAR_5 < VAR_2->numOfVnodes; ++VAR_5) {


    VAR_7 = FUNC_1(VAR_2->vnodeGid[VAR_5].ip);
    if (VAR_7 == ((void*)0)) continue;

    VAR_4 = FUNC_2(VAR_7, VAR_0, 64000);
    if (VAR_4 == ((void*)0)) continue;
    VAR_3 = FUNC_0(VAR_1, VAR_4, VAR_2->vnodeGid[VAR_5].vnode);
    VAR_6 = VAR_3 - VAR_4;

    FUNC_4(VAR_7, VAR_4, VAR_6);
  }

  VAR_2->lastCreate = VAR_8;

  return 0;
}
