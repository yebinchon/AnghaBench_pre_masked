
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct vnop_getattr_args {TYPE_5__* a_vp; int a_context; struct vnode_attr* a_vap; } ;
struct TYPE_11__ {int tv_nsec; int tv_sec; } ;
struct TYPE_10__ {int tv_nsec; int tv_sec; } ;
struct TYPE_9__ {int tv_nsec; int tv_sec; } ;
struct vnode_attr {int va_active; TYPE_4__ va_change_time; TYPE_3__ va_modify_time; TYPE_2__ va_access_time; int va_flags; } ;
struct nfsmount {int nm_vers; } ;
struct TYPE_8__ {int specdata2; int specdata1; } ;
struct nfs_vattr {int * nva_timensec; int * nva_timesec; int nva_bytes; int nva_size; int nva_fileid; int nva_nlink; int nva_gid; int nva_uid; TYPE_1__ nva_rawdev; int nva_mode; int nva_type; } ;
typedef int dev_t ;
struct TYPE_12__ {char* v_name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*,int ,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct vnode_attr*,int ) ;
 int FUNC_2 (struct vnode_attr*,int ,int ) ;
 int FUNC_3 (struct vnode_attr*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 struct nfsmount* FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,struct nfs_vattr*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

int
FUNC_9(
 struct vnop_getattr_args *VAR_21)





{
 int VAR_22;
 struct nfs_vattr VAR_23;
 struct vnode_attr *VAR_24 = VAR_21->a_vap;
 struct nfsmount *VAR_25;
 dev_t VAR_26;






 FUNC_2(VAR_24, VAR_13, VAR_6);
 if ((VAR_24->va_active & VAR_0) == 0)
  return (0);

 if (FUNC_1(VAR_21->a_vap, VAR_16))
     FUNC_0("Getting attrs for 0x%llx, vname is %s\n",
           (uint64_t)FUNC_4(VAR_21->a_vp),
           VAR_21->a_vp->v_name ? VAR_21->a_vp->v_name : "empty");
 VAR_22 = FUNC_8(FUNC_5(VAR_21->a_vp), &VAR_23, VAR_21->a_context, VAR_4);
 if (VAR_22)
  return (VAR_22);


 VAR_25 = FUNC_6(VAR_21->a_vp);
 VAR_24->va_flags |= VAR_25 ? (VAR_25->nm_vers > 2 ? VAR_5 : 0) : 0;
 FUNC_2(VAR_24, VAR_19, VAR_23.nva_type);
 FUNC_2(VAR_24, VAR_14, VAR_23.nva_mode);
 VAR_26 = FUNC_7(VAR_23.nva_rawdev.specdata1, VAR_23.nva_rawdev.specdata2);
 FUNC_2(VAR_24, VAR_18, VAR_26);
 FUNC_2(VAR_24, VAR_20, VAR_23.nva_uid);
 FUNC_2(VAR_24, VAR_12, VAR_23.nva_gid);
 FUNC_2(VAR_24, VAR_17, VAR_23.nva_nlink);
 FUNC_2(VAR_24, VAR_11, VAR_23.nva_fileid);
 FUNC_2(VAR_24, VAR_10, VAR_23.nva_size);
 FUNC_2(VAR_24, VAR_9, VAR_23.nva_bytes);
 VAR_24->va_access_time.tv_sec = VAR_23.nva_timesec[VAR_1];
 VAR_24->va_access_time.tv_nsec = VAR_23.nva_timensec[VAR_1];
 FUNC_3(VAR_24, VAR_7);
 VAR_24->va_modify_time.tv_sec = VAR_23.nva_timesec[VAR_3];
 VAR_24->va_modify_time.tv_nsec = VAR_23.nva_timensec[VAR_3];
 FUNC_3(VAR_24, VAR_15);
 VAR_24->va_change_time.tv_sec = VAR_23.nva_timesec[VAR_2];
 VAR_24->va_change_time.tv_nsec = VAR_23.nva_timensec[VAR_2];
 FUNC_3(VAR_24, VAR_8);


 return (VAR_22);
}
