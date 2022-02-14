
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_17__ {int status; } ;
struct TYPE_16__ {int meterId; int sid; int vnode; } ;
struct TYPE_13__ {int sid; } ;
struct TYPE_15__ {TYPE_2__ gid; int meterId; } ;
struct TYPE_14__ {int numOfVnodes; int lastRemove; TYPE_1__* vnodeGid; } ;
struct TYPE_12__ {int vnode; int ip; } ;
typedef TYPE_3__ SVgObj ;
typedef TYPE_4__ STabObj ;
typedef TYPE_5__ SRemoveMeterMsg ;
typedef TYPE_6__ SDnodeObj ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_6__* FUNC_4 (int ) ;
 char* FUNC_5 (TYPE_6__*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_6__*,char*,int) ;
 int FUNC_8 (char*,int ) ;

int FUNC_9(STabObj *VAR_2, SVgObj *VAR_3) {
  SRemoveMeterMsg *VAR_4;
  char * VAR_5, *VAR_6;
  int VAR_7, VAR_8 = 0;
  SDnodeObj * VAR_9;
  char VAR_10[20];
  uint64_t VAR_11;

  VAR_11 = FUNC_6();

  for (VAR_7 = 0; VAR_7 < VAR_3->numOfVnodes; ++VAR_7) {


    VAR_9 = FUNC_4(VAR_3->vnodeGid[VAR_7].ip);
    if (VAR_9 == ((void*)0)) continue;

    VAR_6 = FUNC_5(VAR_9, VAR_1);
    if (VAR_6 == ((void*)0)) continue;
    VAR_5 = VAR_6;

    VAR_4 = (SRemoveMeterMsg *)VAR_5;
    VAR_4->vnode = FUNC_1(VAR_3->vnodeGid[VAR_7].vnode);
    VAR_4->sid = FUNC_0(VAR_2->gid.sid);
    FUNC_3(VAR_4->meterId, VAR_2->meterId, VAR_0);

    VAR_5 += sizeof(SRemoveMeterMsg);
    VAR_8 = VAR_5 - VAR_6;

    FUNC_7(VAR_9, VAR_6, VAR_8);

    FUNC_8(VAR_10, VAR_3->vnodeGid[VAR_7].ip);
    FUNC_2("dnode:%s vid:%d, send remove meter msg, sid:%d status:%d", VAR_10, VAR_3->vnodeGid[VAR_7].vnode,
           VAR_2->gid.sid, VAR_9->status);
  }

  VAR_3->lastRemove = VAR_11;

  return 0;
}
