
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
typedef int uio_t ;
typedef int uio_buf ;
struct vnode {int v_mount; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int ,struct vnode*,int ) ;
 int FUNC_3 (int ,int ,size_t) ;
 int FUNC_4 (int,int ,int ,int ,char*,int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct vnode*,char const*,int ,int,int ) ;

int
FUNC_8 (struct vnode *VAR_7, const char *VAR_8, char *VAR_9, size_t VAR_10)
{
 vfs_context_t VAR_11;
 int VAR_12 = VAR_6;
 char VAR_13[ FUNC_1(1) ];
        uio_t VAR_14;
 int VAR_15;

 if (FUNC_6(VAR_7->v_mount))
  return (VAR_0);

 VAR_11 = FUNC_5();
 VAR_14 = FUNC_4(1, 0, VAR_4, VAR_5,
        &VAR_13[0], sizeof(VAR_13));
 FUNC_3(VAR_14, FUNC_0(VAR_9), VAR_10);

 VAR_15 = FUNC_7(VAR_7, VAR_8, VAR_14, VAR_12, VAR_11);
 return (VAR_15);
}
