
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
typedef int uio_t ;
typedef int uio_buf ;
struct vnode {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,size_t) ;
 int FUNC_3 (int,int ,int ,int ,char*,int) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct vnode*,char const*,int ,size_t*,int,int ) ;

int
FUNC_7 (struct vnode *VAR_3, const char *VAR_4, char *VAR_5, size_t VAR_6,
     size_t *VAR_7)
{
 vfs_context_t VAR_8 = FUNC_5();
 int VAR_9 = VAR_2;
 char VAR_10[ FUNC_1(1) ];
        uio_t VAR_11;
 int VAR_12;

 VAR_11 = FUNC_3(1, 0, VAR_1, VAR_0,
        &VAR_10[0], sizeof(VAR_10));
 FUNC_2(VAR_11, FUNC_0(VAR_5), VAR_6);

 VAR_12 = FUNC_6(VAR_3, VAR_4, VAR_11, VAR_7, VAR_9, VAR_8);
 *VAR_7 = VAR_6 - FUNC_4(VAR_11);

 return (VAR_12);
}
