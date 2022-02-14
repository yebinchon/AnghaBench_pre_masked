
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int vfs_context_t ;
typedef int * uio_t ;
typedef int uio_buf ;
typedef int u_int32_t ;
struct setxattr_args {int options; int size; int value; int position; int path; int attrname; } ;
struct nameidata {int ni_vp; } ;
typedef int proc_t ;
typedef int attrname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (struct nameidata*,int ,int ,int ,int,int ,int ) ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,char*,int,size_t*) ;
 int FUNC_5 (struct nameidata*) ;
 int FUNC_6 (struct nameidata*) ;
 int FUNC_7 (int *,int ,int ) ;
 int * FUNC_8 (int,int ,int,int ,char*,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,char*,int *,int,int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (char*) ;

int
FUNC_13(proc_t VAR_16, struct setxattr_args *VAR_17, int *VAR_18)
{
 vnode_t VAR_19;
 struct nameidata VAR_20;
 char VAR_21[VAR_12+1];
 vfs_context_t VAR_22 = FUNC_9();
 uio_t VAR_23 = ((void*)0);
 int VAR_24 = FUNC_0(VAR_16) ? VAR_10 : VAR_9;
 size_t VAR_25;
 u_int32_t VAR_26;
 int VAR_27;
 char VAR_28[ FUNC_2(1) ];

 if (VAR_17->options & (VAR_15 | VAR_13))
  return (VAR_0);

 VAR_27 = FUNC_4(VAR_17->attrname, VAR_21, sizeof(VAR_21), &VAR_25);
 if (VAR_27 != 0) {
  if (VAR_27 == VAR_2) {

   return (VAR_1);
  }

  return VAR_27;
 }
 if (FUNC_12(VAR_21))
  return(VAR_2);
 if (VAR_17->size != 0 && VAR_17->value == 0) {
  return (VAR_0);
 }

 VAR_26 = (VAR_17->options & VAR_14) ? 0 : VAR_3;
 FUNC_1(&VAR_20, VAR_7, VAR_8, VAR_26, VAR_24, VAR_17->path, VAR_22);
 if ((VAR_27 = FUNC_5(&VAR_20))) {
  return (VAR_27);
 }
 VAR_19 = VAR_20.ni_vp;
 FUNC_6(&VAR_20);

 VAR_23 = FUNC_8(1, VAR_17->position, VAR_24, VAR_11,
                             &VAR_28[0], sizeof(VAR_28));
 FUNC_7(VAR_23, VAR_17->value, VAR_17->size);

 VAR_27 = FUNC_10(VAR_19, VAR_21, VAR_23, VAR_17->options, VAR_22);







 FUNC_11(VAR_19);
 *VAR_18 = 0;
 return (VAR_27);
}
