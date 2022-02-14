
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int * thandle; } ;
struct TYPE_9__ {int vnode; } ;
struct TYPE_8__ {int vnode; int ip; } ;
typedef TYPE_1__ SVnodeGid ;
typedef TYPE_2__ SFreeVnodeMsg ;
typedef TYPE_3__ SDnodeObj ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 TYPE_3__* FUNC_3 (int ) ;
 char* FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,char*,int) ;

int FUNC_7(SVnodeGid *VAR_1) {
  SFreeVnodeMsg *VAR_2;
  char * VAR_3, *VAR_4;
  int VAR_5 = 0;
  SDnodeObj * VAR_6;

  VAR_6 = FUNC_3(VAR_1->ip);
  if (VAR_6 == ((void*)0)) {
    FUNC_1("dnode:%s not there", FUNC_5(VAR_1->ip));
    return -1;
  }

  if (VAR_6->thandle == ((void*)0)) {
    FUNC_2("dnode:%s offline, failed to send Vpeer msg", FUNC_5(VAR_1->ip));
    return -1;
  }

  VAR_4 = FUNC_4(VAR_6, VAR_0);
  if (VAR_4 == ((void*)0)) return -1;
  VAR_3 = VAR_4;

  VAR_2 = (SFreeVnodeMsg *)VAR_3;
  VAR_2->vnode = FUNC_0(VAR_1->vnode);

  VAR_3 += sizeof(SFreeVnodeMsg);

  VAR_5 = VAR_3 - VAR_4;
  FUNC_6(VAR_6, VAR_4, VAR_5);

  return 0;
}
