
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* int32_t ;
struct TYPE_13__ {int numOfVnodes; TYPE_1__* vload; int privateIp; } ;
struct TYPE_12__ {int vgId; } ;
struct TYPE_11__ {int vnode; } ;
struct TYPE_10__ {int vgId; } ;
typedef TYPE_2__ SVpeerCfgMsg ;
typedef TYPE_3__ SVgObj ;
typedef TYPE_4__ SDnodeObj ;


 char VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int,int ,...) ;
 char* FUNC_2 (char*,TYPE_3__*,int) ;
 TYPE_3__* FUNC_3 (int ) ;
 char* FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*,char*,int) ;

int FUNC_7(char *VAR_2, int VAR_3, SDnodeObj *VAR_4) {
  char * VAR_5, *VAR_6;
  int VAR_7 = 0;
  SVpeerCfgMsg *VAR_8 = (SVpeerCfgMsg *)VAR_2;
  SVgObj * VAR_9 = ((void*)0);

  int VAR_10 = FUNC_0(VAR_8->vnode);

  VAR_6 = FUNC_4(VAR_4, VAR_1);
  if (VAR_6 == ((void*)0)) return 0;
  VAR_5 = VAR_6;

  if (VAR_10 < VAR_4->numOfVnodes) VAR_9 = FUNC_3(VAR_4->vload[VAR_10].vgId);

  if (VAR_9) {
    *VAR_5 = 0;
    VAR_5++;
    VAR_5 = FUNC_2(VAR_5, VAR_9, VAR_10);
    FUNC_1("dnode:%s, vnode:%d, vgroup:%d, send create meter msg, code:%d", FUNC_5(VAR_4->privateIp), VAR_10, VAR_9->vgId, *VAR_5);
  } else {
    FUNC_1("dnode:%s, vnode:%d, no vgroup info, vgroup:%d", FUNC_5(VAR_4->privateIp), VAR_10, VAR_4->vload[VAR_10].vgId);
    *VAR_5 = VAR_0;
    VAR_5++;
    *(int32_t *)VAR_5 = FUNC_0(VAR_10);
    VAR_5 += sizeof(int32_t);
  }

  VAR_7 = VAR_5 - VAR_6;
  FUNC_6(VAR_4, VAR_6, VAR_7);

  return 0;
}
