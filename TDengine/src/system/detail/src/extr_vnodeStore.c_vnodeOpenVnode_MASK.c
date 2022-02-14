
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {scalar_t__ maxSessions; } ;
struct TYPE_6__ {int vnode; TYPE_1__ cfg; int accessState; } ;
typedef TYPE_2__ SVnodeObj ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 TYPE_2__* VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,int *) ;

int FUNC_7(int VAR_6) {
  int32_t VAR_7 = VAR_0;

  SVnodeObj *VAR_8 = VAR_5 + VAR_6;

  VAR_8->vnode = VAR_6;
  VAR_8->accessState = VAR_1;


  if (VAR_8->cfg.maxSessions == 0) return 0;

  FUNC_1(&VAR_2);



  if ((VAR_7 = FUNC_5(VAR_6)) != VAR_0) {
    FUNC_2(&VAR_2);
    return VAR_7;
  }

  FUNC_4(VAR_6);

  if (VAR_6 > VAR_3) VAR_3 = VAR_6;

  FUNC_3();

  FUNC_2(&VAR_2);


  FUNC_6(VAR_8, ((void*)0));


  FUNC_0("vid:%d, vnode is opened, openVnodes:%d", VAR_6, VAR_4);

  return 0;
}
