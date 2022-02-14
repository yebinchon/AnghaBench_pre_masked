
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int vfs_context_t ;
typedef int u_int32_t ;
struct removexattr_args {int options; int path; int attrname; } ;
struct nameidata {int ni_vp; } ;
typedef int proc_t ;
typedef int attrname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (struct nameidata*,int ,int ,int ,int,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,char*,int,size_t*) ;
 int FUNC_4 (struct nameidata*) ;
 int FUNC_5 (struct nameidata*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*,int,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char*) ;

int
FUNC_10(proc_t VAR_14, struct removexattr_args *VAR_15, int *VAR_16)
{
 vnode_t VAR_17;
 struct nameidata VAR_18;
 char VAR_19[VAR_10+1];
 int VAR_20 = FUNC_0(VAR_14) ? VAR_9 : VAR_8;
 vfs_context_t VAR_21 = FUNC_6();
 size_t VAR_22;
 u_int32_t VAR_23;
 int VAR_24;

 if (VAR_15->options & (VAR_13 | VAR_11))
  return (VAR_0);

 VAR_24 = FUNC_3(VAR_15->attrname, VAR_19, sizeof(VAR_19), &VAR_22);
 if (VAR_24 != 0) {
  return (VAR_24);
 }
 if (FUNC_9(VAR_19))
  return(VAR_1);
 VAR_23 = (VAR_15->options & VAR_12) ? 0 : VAR_2;
 FUNC_1(&VAR_18, VAR_6, VAR_7, VAR_23, VAR_20, VAR_15->path, VAR_21);
 if ((VAR_24 = FUNC_4(&VAR_18))) {
  return (VAR_24);
 }
 VAR_17 = VAR_18.ni_vp;
 FUNC_5(&VAR_18);

 VAR_24 = FUNC_7(VAR_17, VAR_19, VAR_15->options, VAR_21);







 FUNC_8(VAR_17);
 *VAR_16 = 0;
 return (VAR_24);
}
