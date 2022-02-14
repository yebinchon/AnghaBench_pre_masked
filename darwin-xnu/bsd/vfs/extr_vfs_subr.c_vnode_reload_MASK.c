
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct TYPE_5__ {int v_iocount; int v_lflag; scalar_t__ v_usecount; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(vnode_t VAR_1)
{
 FUNC_1(VAR_1);

 if ((VAR_1->v_iocount > 1) || VAR_1->v_usecount) {
  FUNC_2(VAR_1);
  return(0);
 }
 if (VAR_1->v_iocount <= 0)
  FUNC_0("vnode_reload with no iocount %d", VAR_1->v_iocount);


 VAR_1->v_lflag |= VAR_0;
 FUNC_2(VAR_1);

 return (1);
}
