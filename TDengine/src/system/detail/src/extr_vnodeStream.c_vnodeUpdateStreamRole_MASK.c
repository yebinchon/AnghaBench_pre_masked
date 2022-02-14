
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ status; int streamRole; int vnode; } ;
typedef TYPE_1__ SVnodeObj ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;

void FUNC_3(SVnodeObj *VAR_1) {


  int VAR_2 = (VAR_1->status == VAR_0) ? 1 : 0;
  if (VAR_2 != VAR_1->streamRole) {
    FUNC_0("vid:%d, stream role is changed to:%d", VAR_1->vnode, VAR_2);
    VAR_1->streamRole = VAR_2;
    if (VAR_2) {
      FUNC_2(VAR_1, ((void*)0));
    } else {
      FUNC_1(VAR_1);
    }
  } else {
    FUNC_0("vid:%d, stream role is keep to:%d", VAR_1->vnode, VAR_2);
  }
}
