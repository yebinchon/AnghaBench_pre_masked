
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int * uio_t ;
typedef int uio_buf ;
struct vfs_context {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,struct vfs_context*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int * FUNC_5 (int,int ,int ,int ,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int *,int ,struct vfs_context*) ;

__attribute__((used)) static int
FUNC_8(vnode_t VAR_8, char *VAR_9, struct vfs_context *VAR_10)
{
 uio_t VAR_11;
 char VAR_12[FUNC_1(1)];
 int VAR_13;

 if ((VAR_11 = FUNC_5(1, 0, VAR_4, VAR_5, VAR_12, sizeof(VAR_12))) == ((void*)0)) {
  VAR_13 = VAR_0;
 } else {
  FUNC_4(VAR_11, FUNC_0(VAR_9), 32);
  VAR_13 = FUNC_7(VAR_8, VAR_6, VAR_11, VAR_7, VAR_10);
  FUNC_6(VAR_11);
 }






 return (VAR_13);
}
