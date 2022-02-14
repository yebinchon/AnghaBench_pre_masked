
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int vfs_context_t ;
struct fileproc {int dummy; } ;
typedef int proc_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,struct fileproc*,int ) ;
 int FUNC_1 (int ,int,struct fileproc**,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int
FUNC_4(vfs_context_t VAR_1, int VAR_2, vnode_t *VAR_3)
{
 int VAR_4;
 vnode_t VAR_5;
 struct fileproc *VAR_6;
 proc_t VAR_7 = FUNC_2(VAR_1);

 *VAR_3 = VAR_0;

 VAR_4 = FUNC_1(VAR_7, VAR_2, &VAR_6, &VAR_5);
 if (VAR_4)
  return (VAR_4);

 VAR_4 = FUNC_3(VAR_5);
 if (VAR_4) {
  (void)FUNC_0(VAR_7, VAR_2, VAR_6, 0);
  return (VAR_4);
 }

 (void)FUNC_0(VAR_7, VAR_2, VAR_6, 0);
 *VAR_3 = VAR_5;
 return (VAR_4);
}
