
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vnode_t ;
typedef int vfs_context_t ;
typedef int * mount_t ;
typedef int ino64_t ;
struct TYPE_3__ {int * val; } ;
typedef TYPE_1__ fsid_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int,int *,int ) ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;

int
FUNC_4(fsid_t *VAR_1, ino64_t VAR_2, vnode_t *VAR_3, vfs_context_t VAR_4)
{
 mount_t VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_1->val[0], 1);
 if (VAR_5 == ((void*)0)) {
  return VAR_0;
 }


 if (VAR_2 == 2) {
  VAR_6 = FUNC_0(VAR_5, VAR_3, VAR_4);
 } else {
  VAR_6 = FUNC_1(VAR_5, VAR_2, VAR_3, VAR_4);
 }

 FUNC_3(VAR_5);
 return VAR_6;
}
