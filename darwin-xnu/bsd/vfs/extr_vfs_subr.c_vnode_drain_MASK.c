
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int errno_t ;
struct TYPE_3__ {int v_lflag; int v_iocount; int v_lock; int v_owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int*,int *,int ,char*,int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static errno_t
FUNC_3(vnode_t VAR_3)
{

 if (VAR_3->v_lflag & VAR_2) {
  FUNC_2("vnode_drain: recursive drain");
  return(VAR_0);
 }
 VAR_3->v_lflag |= VAR_2;
 VAR_3->v_owner = FUNC_0();

 while (VAR_3->v_iocount > 1)
  FUNC_1(&VAR_3->v_iocount, &VAR_3->v_lock, VAR_1, "vnode_drain", ((void*)0));

 VAR_3->v_lflag &= ~VAR_2;

 return(0);
}
