
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ thandle; TYPE_1__* vload; } ;
struct TYPE_13__ {int numOfVnodes; TYPE_2__* vnodeGid; int vgId; } ;
struct TYPE_12__ {size_t vnode; int ip; } ;
struct TYPE_11__ {int vgId; } ;
typedef TYPE_3__ SVgObj ;
typedef TYPE_4__ SDnodeObj ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 char* FUNC_1 (char*,TYPE_3__*,size_t) ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 char* FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*,char*,int) ;

int FUNC_7(SVgObj *VAR_1) {
  SDnodeObj *VAR_2;
  char * VAR_3, *VAR_4;
  int VAR_5 = 0;

  for (int VAR_6 = 0; VAR_6 < VAR_1->numOfVnodes; ++VAR_6) {
    VAR_2 = FUNC_2(VAR_1->vnodeGid[VAR_6].ip);
    if (VAR_2 == ((void*)0)) {
      FUNC_0("dnode:%s not there", FUNC_5(VAR_1->vnodeGid[VAR_6].ip));
      continue;
    }

    VAR_2->vload[VAR_1->vnodeGid[VAR_6].vnode].vgId = VAR_1->vgId;
    FUNC_3(VAR_2);

    if (VAR_2->thandle && VAR_1->numOfVnodes >= 1) {
      VAR_4 = FUNC_4(VAR_2, VAR_0);
      if (VAR_4 == ((void*)0)) continue;
      VAR_3 = FUNC_1(VAR_4, VAR_1, VAR_1->vnodeGid[VAR_6].vnode);
      VAR_5 = VAR_3 - VAR_4;

      FUNC_6(VAR_2, VAR_4, VAR_5);
    }
  }

  return 0;
}
