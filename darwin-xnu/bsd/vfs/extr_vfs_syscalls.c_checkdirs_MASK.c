
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
struct cdirargs {TYPE_1__* newdp; TYPE_1__* olddp; } ;
struct TYPE_8__ {int v_usecount; int v_mountedhere; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__**,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int,int ,void*,int *,int *) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(vnode_t VAR_4, vfs_context_t VAR_5)
{
 vnode_t VAR_6;
 vnode_t VAR_7;
 int VAR_8;
 struct cdirargs VAR_9;

 if (VAR_4->v_usecount == 1)
  return(0);
 VAR_8 = FUNC_0(VAR_4->v_mountedhere, &VAR_6, VAR_5);

 if (VAR_8 != 0) {



  return(VAR_8);
 }

 VAR_9.olddp = VAR_4;
 VAR_9.newdp = VAR_6;

 FUNC_2(VAR_0 | VAR_1, VAR_2, (void *)&VAR_9, ((void*)0), ((void*)0));

 if (VAR_3 == VAR_4) {
  FUNC_4(VAR_6);
  VAR_7 = VAR_3;
  VAR_3 = VAR_6;
  FUNC_5(VAR_7);
 }

 FUNC_3(VAR_6);
 return(0);
}
