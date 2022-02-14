
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int * vfs_context_t ;
typedef int errno_t ;


 int * FUNC_0 () ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ) ;

errno_t
FUNC_3(vnode_t VAR_0, int VAR_1, vfs_context_t VAR_2)
{
 int VAR_3;

 if (VAR_2 == ((void*)0)) {
  VAR_2 = FUNC_0();
 }

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 FUNC_2(VAR_0);
 return (VAR_3);
}
