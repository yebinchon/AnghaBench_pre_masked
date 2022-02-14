
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int vfs_context_t ;
struct componentname {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct componentname*) ;
 int FUNC_1 (int ,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_2(vnode_t VAR_1, struct componentname *VAR_2, int VAR_3, vfs_context_t VAR_4)
{

#pragma unused(cnp)


 int VAR_5;

 if (!VAR_3) {
  VAR_5 = FUNC_1(VAR_1, ((void*)0), VAR_0, VAR_4);
  if (VAR_5)
   return VAR_5;
 }






 return 0;
}
