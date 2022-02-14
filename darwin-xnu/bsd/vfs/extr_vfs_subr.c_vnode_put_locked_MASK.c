
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
struct TYPE_11__ {int v_iocount; scalar_t__ v_usecount; int v_lflag; int v_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int,int,int ) ;
 int FUNC_9 (TYPE_1__*) ;

int
FUNC_10(vnode_t VAR_5)
{
 vfs_context_t VAR_6 = FUNC_3();




retry:
 if (VAR_5->v_iocount < 1)
  FUNC_2("vnode_put(%p): iocount < 1", VAR_5);

 if ((VAR_5->v_usecount > 0) || (VAR_5->v_iocount > 1)) {
  FUNC_4(VAR_5);
  return(0);
 }
 if ((VAR_5->v_lflag & (VAR_1 | VAR_3)) == VAR_3) {

         VAR_5->v_lflag &= ~VAR_3;
         FUNC_9(VAR_5);

  FUNC_0(VAR_5, VAR_6);

  FUNC_7(VAR_5);
  goto retry;
 }
        VAR_5->v_lflag &= ~VAR_3;

 if ((VAR_5->v_lflag & (VAR_2 | VAR_4 | VAR_1)) == VAR_2) {
         FUNC_6(VAR_5);
         FUNC_8(VAR_5, 1, 1, 0);
 }
 FUNC_4(VAR_5);
 FUNC_5(VAR_5);

 return(0);
}
