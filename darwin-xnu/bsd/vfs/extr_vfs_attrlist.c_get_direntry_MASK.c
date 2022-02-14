
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int vfs_context_t ;
struct fd_vn_data {scalar_t__ fv_bufdone; scalar_t__ fv_buf; int fv_bufsiz; } ;
struct direntry {int dummy; } ;


 int FUNC_0 (int ,int ,struct fd_vn_data*,int*) ;

__attribute__((used)) static int
FUNC_1(vfs_context_t VAR_0, vnode_t VAR_1, struct fd_vn_data *VAR_2,
    int *VAR_3, struct direntry **VAR_4)
{
 int VAR_5;
 int VAR_6;

 *VAR_3 = 0;
 *VAR_4 = ((void*)0);
 VAR_6 = 0;
 if (!VAR_2->fv_bufsiz) {
  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_5);
  if (VAR_6) {
   return (VAR_6);
  }
  if (VAR_5) {
   *VAR_3 = VAR_5;
   return (VAR_6);
  }
 }

 *VAR_4 = (struct direntry *)(VAR_2->fv_buf + VAR_2->fv_bufdone);
 return (VAR_6);
}
