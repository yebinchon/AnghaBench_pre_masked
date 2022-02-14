
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vnode_t ;
typedef int vfs_context_t ;
typedef int uint32_t ;
typedef int uaddr ;
struct xdrbuf {int xb_flags; } ;
struct TYPE_11__ {int sin_port; int sin_addr; } ;
struct nfs_dlmount {char* ndm_mntfrom; scalar_t__ ndm_sotype; int ndm_fhlen; int * ndm_fh; TYPE_1__ ndm_saddr; scalar_t__ ndm_nfsv3; } ;
struct mount {int dummy; } ;
typedef TYPE_3__* mount_t ;
struct TYPE_13__ {int mnt_flag; TYPE_2__* mnt_vtable; } ;
struct TYPE_12__ {int vfc_refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int*,int) ;
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
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 char* FUNC_3 (int ,int *,char*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (char*,TYPE_3__*,int ,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char*,TYPE_3__**) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (int,struct xdrbuf*,int) ;
 int FUNC_15 (int,struct xdrbuf*,int*,int) ;
 int FUNC_16 (int,struct xdrbuf*,int *,int ) ;
 int FUNC_17 (int,struct xdrbuf*,char*,int) ;
 char* FUNC_18 (struct xdrbuf*) ;
 int FUNC_19 (int,struct xdrbuf*) ;
 int FUNC_20 (struct xdrbuf*) ;
 int FUNC_21 (struct xdrbuf*,int *,int ) ;
 int FUNC_22 (struct xdrbuf*) ;
 int FUNC_23 (struct xdrbuf*,int) ;

__attribute__((used)) static int
FUNC_24(
 struct nfs_dlmount *VAR_19,
 const char *VAR_20,
 int VAR_21,
 vnode_t *VAR_22,
 mount_t *VAR_23,
 vfs_context_t VAR_24)
{
 mount_t VAR_25;
 int VAR_26, VAR_27;
 char *VAR_28, *VAR_29, *VAR_30, *VAR_31, *VAR_32;
 char VAR_33[VAR_2];
 struct xdrbuf VAR_34;
 uint32_t VAR_35[VAR_6];
 uint32_t VAR_36[VAR_13];
 uint32_t VAR_37[VAR_13];
 uint32_t VAR_38, VAR_39, VAR_40;

 if ((VAR_26 = FUNC_12("nfs", VAR_19->ndm_mntfrom, &VAR_25))) {
  FUNC_10("nfs_mount_diskless: NFS not configured\n");
  return (VAR_26);
 }

 VAR_25->mnt_flag |= VAR_21;
 if (!(VAR_21 & VAR_3))
  VAR_25->mnt_flag &= ~VAR_3;


 VAR_31 = VAR_19->ndm_mntfrom;
 if (*VAR_31 == '[') {
  while (*VAR_31 && (*VAR_31 != ']'))
   VAR_31++;
  if (*VAR_31 == ']')
   VAR_31++;
 }
 while (*VAR_31 && (*VAR_31 != ':'))
  VAR_31++;
 VAR_32 = VAR_31;
 while (*VAR_31 && (*VAR_31 == ':'))
  VAR_31++;

 VAR_29 = VAR_31;
 while (*VAR_29 && (*VAR_29 == '/'))
  VAR_29++;
 VAR_27 = 0;
 while (*VAR_29) {
  VAR_27++;
  while (*VAR_29 && (*VAR_29 != '/'))
   VAR_29++;
  while (*VAR_29 && (*VAR_29 == '/'))
   VAR_29++;
 }


 if (FUNC_3(VAR_0, &VAR_19->ndm_saddr.sin_addr, VAR_33, sizeof(VAR_33)) != VAR_33) {
  FUNC_10("nfs_mount_diskless: bad address\n");
  return (VAR_1);
 }


 FUNC_2(VAR_35, VAR_6);
 FUNC_1(VAR_35, VAR_11);
 FUNC_1(VAR_35, VAR_12);
 FUNC_1(VAR_35, VAR_10);
 FUNC_1(VAR_35, VAR_7);
 FUNC_1(VAR_35, VAR_8);
 FUNC_1(VAR_35, VAR_9);


 FUNC_2(VAR_36, VAR_13);
 FUNC_2(VAR_37, VAR_13);
 FUNC_1(VAR_36, VAR_14);
 FUNC_1(VAR_37, VAR_14);


 FUNC_21(&VAR_34, ((void*)0), 0);
 FUNC_14(VAR_26, &VAR_34, VAR_5);
 VAR_38 = FUNC_22(&VAR_34);
 FUNC_14(VAR_26, &VAR_34, 0);
 FUNC_14(VAR_26, &VAR_34, VAR_15);
 FUNC_15(VAR_26, &VAR_34, VAR_35, VAR_6);
 VAR_39 = FUNC_22(&VAR_34);
 FUNC_14(VAR_26, &VAR_34, 0);
 FUNC_14(VAR_26, &VAR_34, VAR_19->ndm_nfsv3 ? 3 : 2);
 FUNC_17(VAR_26, &VAR_34, ((VAR_19->ndm_sotype == VAR_16) ? "udp" : "tcp"), 3);
 FUNC_14(VAR_26, &VAR_34, FUNC_9(VAR_19->ndm_saddr.sin_port));
 FUNC_16(VAR_26, &VAR_34, &VAR_19->ndm_fh[0], VAR_19->ndm_fhlen);

 FUNC_14(VAR_26, &VAR_34, 1);
 FUNC_14(VAR_26, &VAR_34, 1);
 FUNC_17(VAR_26, &VAR_34, VAR_19->ndm_mntfrom, (VAR_32 - VAR_19->ndm_mntfrom));
 FUNC_14(VAR_26, &VAR_34, 1);
 FUNC_17(VAR_26, &VAR_34, VAR_33, FUNC_11(VAR_33));
 FUNC_14(VAR_26, &VAR_34, 0);
 FUNC_14(VAR_26, &VAR_34, VAR_27);
 VAR_29 = VAR_31;
 while (*VAR_29 && (*VAR_29 == '/'))
  VAR_29++;
 while (*VAR_29) {
  VAR_30 = VAR_29;
  while (*VAR_29 && (*VAR_29 != '/'))
   VAR_29++;
  FUNC_17(VAR_26, &VAR_34, VAR_30, (VAR_29 - VAR_30));
  if (VAR_26)
   break;
  while (*VAR_29 && (*VAR_29 == '/'))
   VAR_29++;
 }
 FUNC_14(VAR_26, &VAR_34, 0);
 FUNC_14(VAR_26, &VAR_34, VAR_21);
 FUNC_19(VAR_26, &VAR_34);


 VAR_40 = FUNC_22(&VAR_34);
 if (!VAR_26) {
  VAR_26 = FUNC_23(&VAR_34, VAR_38);
  FUNC_14(VAR_26, &VAR_34, VAR_40 - VAR_38 + VAR_18 );
 }
 if (!VAR_26) {
  VAR_26 = FUNC_23(&VAR_34, VAR_39);
  FUNC_14(VAR_26, &VAR_34, VAR_40 - VAR_39 - VAR_18 );
 }
 if (VAR_26) {
  FUNC_10("nfs_mount_diskless: error %d assembling mount args\n", VAR_26);
  FUNC_20(&VAR_34);
  return (VAR_26);
 }

 VAR_28 = FUNC_18(&VAR_34);
 VAR_34.xb_flags &= ~VAR_17;


 if ((VAR_26 = FUNC_8(VAR_28, VAR_25, VAR_24, VAR_22))) {
  FUNC_10("nfs_mountroot: mount %s failed: %d\n", VAR_20, VAR_26);

  FUNC_5();
  VAR_25->mnt_vtable->vfc_refcount--;
  FUNC_6();
  FUNC_13(VAR_25);
  FUNC_7(VAR_25);



  FUNC_0(VAR_25, sizeof(struct mount), VAR_4);
 } else {
  *VAR_23 = VAR_25;
 }
 FUNC_20(&VAR_34);
 return (VAR_26);
}
