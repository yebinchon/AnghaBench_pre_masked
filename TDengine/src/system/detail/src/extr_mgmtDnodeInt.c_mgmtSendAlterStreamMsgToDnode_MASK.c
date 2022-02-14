
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int status; int uid; int sid; int vnode; } ;
struct TYPE_9__ {int sid; } ;
struct TYPE_11__ {int status; int uid; TYPE_2__ gid; } ;
struct TYPE_10__ {int numOfVnodes; TYPE_1__* vnodeGid; } ;
struct TYPE_8__ {scalar_t__ ip; int vnode; } ;
typedef TYPE_3__ SVgObj ;
typedef TYPE_4__ STabObj ;
typedef int SDnodeObj ;
typedef TYPE_5__ SAlterStreamMsg ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (scalar_t__) ;
 char* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,int) ;

int FUNC_5(STabObj *VAR_1, SVgObj *VAR_2) {
  SAlterStreamMsg *VAR_3;
  char * VAR_4, *VAR_5;
  int VAR_6, VAR_7 = 0;
  SDnodeObj * VAR_8;

  for (VAR_6 = 0; VAR_6 < VAR_2->numOfVnodes; ++VAR_6) {
    if (VAR_2->vnodeGid[VAR_6].ip == 0) continue;

    VAR_8 = FUNC_2(VAR_2->vnodeGid[VAR_6].ip);
    if (VAR_8 == ((void*)0)) continue;

    VAR_5 = FUNC_3(VAR_8, VAR_0);
    if (VAR_5 == ((void*)0)) continue;
    VAR_4 = VAR_5;

    VAR_3 = (SAlterStreamMsg *)VAR_4;
    VAR_3->vnode = FUNC_1(VAR_2->vnodeGid[VAR_6].vnode);
    VAR_3->sid = FUNC_0(VAR_1->gid.sid);
    VAR_3->uid = VAR_1->uid;
    VAR_3->status = VAR_1->status;

    VAR_4 += sizeof(SAlterStreamMsg);
    VAR_7 = VAR_4 - VAR_5;

    FUNC_4(VAR_8, VAR_5, VAR_7);
  }

  return 0;
}
