
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int vfs_context_t ;
typedef size_t user_ssize_t ;
typedef int * uio_t ;
typedef int uio_buf ;
typedef int u_int32_t ;
struct nameidata {int ni_vp; } ;
struct getxattr_args {int options; int size; int value; int position; int attrname; int path; } ;
typedef int proc_t ;
typedef int attrname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct nameidata*,int ,int ,int ,int,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ,char*,int,size_t*) ;
 int FUNC_4 (struct nameidata*) ;
 int FUNC_5 (struct nameidata*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int *,int ,size_t) ;
 int * FUNC_8 (int,int ,int,int ,char*,int) ;
 size_t FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,int *,size_t*,int,int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (char*) ;

int
FUNC_15(proc_t VAR_13, struct getxattr_args *VAR_14, user_ssize_t *VAR_15)
{
 vnode_t VAR_16;
 struct nameidata VAR_17;
 char VAR_18[VAR_8+1];
 vfs_context_t VAR_19 = FUNC_10();
 uio_t VAR_20 = ((void*)0);
 int VAR_21 = FUNC_0(VAR_13) ? VAR_7 : VAR_6;
 size_t VAR_22 = 0;
 size_t VAR_23;
 u_int32_t VAR_24;
 int VAR_25;
 char VAR_26[ FUNC_2(1) ];

 if (VAR_14->options & (VAR_12 | VAR_10))
  return (VAR_0);

 VAR_24 = (VAR_14->options & VAR_11) ? 0 : VAR_2;
 FUNC_1(&VAR_17, VAR_3, VAR_4, VAR_24, VAR_21, VAR_14->path, VAR_19);
 if ((VAR_25 = FUNC_4(&VAR_17))) {
  return (VAR_25);
 }
 VAR_16 = VAR_17.ni_vp;
 FUNC_5(&VAR_17);

 VAR_25 = FUNC_3(VAR_14->attrname, VAR_18, sizeof(VAR_18), &VAR_23);
 if (VAR_25 != 0) {
  goto out;
 }
 if (FUNC_14(VAR_18)) {
  if (!FUNC_11(VAR_19) || FUNC_6(VAR_18, "com.apple.system.Security") != 0) {
   VAR_25 = VAR_1;
   goto out;
  }
 }
 if (VAR_14->size == 0xffffffff || VAR_14->size == (size_t)-1)
  goto no_uio;

 if (VAR_14->value) {
  if (VAR_14->size > (size_t)VAR_9)
   VAR_14->size = VAR_9;

  VAR_20 = FUNC_8(1, VAR_14->position, VAR_21, VAR_5,
                              &VAR_26[0], sizeof(VAR_26));
  FUNC_7(VAR_20, VAR_14->value, VAR_14->size);
 }
no_uio:
 VAR_25 = FUNC_12(VAR_16, VAR_18, VAR_20, &VAR_22, VAR_14->options, VAR_19);
out:
 FUNC_13(VAR_16);

 if (VAR_20) {
  *VAR_15 = VAR_14->size - FUNC_9(VAR_20);
 } else {
  *VAR_15 = (user_ssize_t)VAR_22;
 }

 return (VAR_25);
}
