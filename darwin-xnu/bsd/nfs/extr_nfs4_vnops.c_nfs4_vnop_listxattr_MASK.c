
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int * uio_t ;
typedef scalar_t__ uint64_t ;
struct vnop_listxattr_args {int * a_size; int a_vp; int * a_uio; int a_context; } ;
struct TYPE_15__ {int nfsa_flags; } ;
struct nfsmount {TYPE_1__ nm_fsattr; } ;
struct nfsbuf {scalar_t__ nb_flags; scalar_t__ nb_data; } ;
struct nfs_vattr {int nva_flags; int nva_bitmap; } ;
struct nfs_dir_buf_header {int ndbh_count; int ndbh_entry_end; scalar_t__ ndbh_flags; int ndbh_ncgen; } ;
struct direntry {scalar_t__ d_namlen; scalar_t__ d_seekoff; int d_name; } ;
typedef TYPE_2__* nfsnode_t ;
struct TYPE_17__ {int biocache_readdirs; } ;
struct TYPE_16__ {int n_flag; int n_ncgen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_15 ;
 struct direntry* FUNC_3 (struct direntry*) ;
 struct direntry* FUNC_4 (struct nfsbuf*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_5 (int,int *) ;
 TYPE_2__* FUNC_6 (int ) ;
 struct nfsmount* FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 (TYPE_2__*,int,int ) ;
 int FUNC_9 (TYPE_2__*,scalar_t__,int ,int ,int ,struct nfsbuf**) ;
 int FUNC_10 (struct nfsbuf*,int ) ;
 int FUNC_11 (struct nfsbuf*,int) ;
 int FUNC_12 (TYPE_2__*,struct nfs_vattr*,int ,int ) ;
 int FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (struct nfsmount*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*,int ) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (int ,int ,int ,int) ;
 TYPE_3__ VAR_23 ;
 int FUNC_20 (char*,scalar_t__,int,int) ;
 scalar_t__ FUNC_21 (int *) ;
 int FUNC_22 (int ,scalar_t__,int *) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;

int
FUNC_26(
 struct vnop_listxattr_args *VAR_24)







{
 vfs_context_t VAR_25 = VAR_24->a_context;
 nfsnode_t VAR_26 = FUNC_6(VAR_24->a_vp);
 uio_t VAR_27 = VAR_24->a_uio;
 nfsnode_t VAR_28 = ((void*)0);
 struct nfsmount *VAR_29;
 int VAR_30, VAR_31, VAR_32;
 struct nfs_vattr VAR_33;
 uint64_t VAR_34, VAR_35, VAR_36 = 0;
 struct nfsbuf *VAR_37 = ((void*)0);
 struct nfs_dir_buf_header *VAR_38;
 struct direntry *VAR_39;

 VAR_29 = FUNC_7(VAR_24->a_vp);
 if (FUNC_14(VAR_29))
  return (VAR_5);

 if (!(VAR_29->nm_fsattr.nfsa_flags & VAR_18))
  return (VAR_4);

 VAR_30 = FUNC_12(VAR_26, &VAR_33, VAR_25, VAR_19);
 if (VAR_30)
  return (VAR_30);
 if (FUNC_2(VAR_33.nva_bitmap, VAR_16) &&
     !(VAR_33.nva_flags & VAR_17))
  return (0);

 if ((VAR_30 = FUNC_17(VAR_26, FUNC_23(VAR_25))))
  return (VAR_30);
 VAR_28 = FUNC_8(VAR_26, 1, VAR_25);
 FUNC_15(VAR_26);
 if (!VAR_28)
  goto out;

 if ((VAR_30 = FUNC_16(VAR_28)))
  goto out;

 if (VAR_28->n_flag & VAR_22) {
  VAR_28->n_flag &= ~VAR_22;
  FUNC_13(VAR_28);
  FUNC_18(VAR_28);
  VAR_30 = FUNC_19(FUNC_1(VAR_28), 0, VAR_25, 1);
  if (!VAR_30)
   VAR_30 = FUNC_16(VAR_28);
  if (VAR_30)
   goto out;
 }




 if (VAR_28->n_flag & VAR_21) {
  FUNC_13(VAR_28);
  FUNC_18(VAR_28);
  if ((VAR_30 = FUNC_19(FUNC_1(VAR_28), 0, VAR_25, 1)))
   goto out;
 } else {
  FUNC_18(VAR_28);
 }

 if ((VAR_30 = FUNC_12(VAR_28, &VAR_33, VAR_25, VAR_20)))
  goto out;

 if (VAR_27 && (FUNC_21(VAR_27) == 0))
  goto out;

 VAR_31 = 0;
 VAR_35 = VAR_36 = 0;

 while (!VAR_30 && !VAR_31) {
  FUNC_5(1, &VAR_23.biocache_readdirs);
  VAR_34 = VAR_35;
getbuffer:
  VAR_30 = FUNC_9(VAR_28, VAR_36, VAR_15, FUNC_23(VAR_25), VAR_9, &VAR_37);
  if (VAR_30)
   goto out;
  VAR_38 = (struct nfs_dir_buf_header*)VAR_37->nb_data;
  if (!FUNC_0(VAR_37->nb_flags, VAR_10) || !FUNC_0(VAR_38->ndbh_flags, VAR_12)) {
   if (!FUNC_0(VAR_37->nb_flags, VAR_10)) {
    VAR_38->ndbh_flags = 0;
    VAR_38->ndbh_count = 0;
    VAR_38->ndbh_entry_end = sizeof(*VAR_38);
    VAR_38->ndbh_ncgen = VAR_28->n_ncgen;
   }
   VAR_30 = FUNC_10(VAR_37, VAR_25);
   if (VAR_30 == VAR_14)
    goto getbuffer;
   if (VAR_30)
    FUNC_11(VAR_37, 1);
   if (VAR_30 && (VAR_30 != VAR_5) && (VAR_30 != VAR_8) && (VAR_30 != VAR_1) && (VAR_30 != VAR_7)) {
    if (!FUNC_16(VAR_28)) {
     FUNC_13(VAR_28);
     FUNC_18(VAR_28);
    }
    FUNC_19(FUNC_1(VAR_28), 0, VAR_25, 1);
    if (VAR_30 == VAR_13)
     VAR_30 = VAR_3;
   }
   if (VAR_30)
    goto out;
  }


  VAR_39 = FUNC_4(VAR_37);
  for (VAR_32=0; VAR_32 < VAR_38->ndbh_count; VAR_32++) {
   if (!FUNC_25(VAR_39->d_name)) {
    if (VAR_27 == ((void*)0)) {
     *VAR_24->a_size += VAR_39->d_namlen + 1;
    } else if (FUNC_21(VAR_27) < (VAR_39->d_namlen + 1)) {
     VAR_30 = VAR_6;
    } else {
     VAR_30 = FUNC_22(VAR_39->d_name, VAR_39->d_namlen+1, VAR_27);
     if (VAR_30 && (VAR_30 != VAR_0))
      VAR_30 = VAR_6;
    }
   }
   VAR_35 = VAR_39->d_seekoff;
   VAR_39 = FUNC_3(VAR_39);
  }

  if (VAR_32 == VAR_38->ndbh_count) {

   VAR_36 = VAR_35;

   if (FUNC_0(VAR_38->ndbh_flags, VAR_11))
    VAR_31 = 1;
  }
  if (!VAR_30 && !VAR_31 && (VAR_35 == VAR_34)) {
   FUNC_20("nfs readdir cookie didn't change 0x%llx, %d/%d\n", VAR_34, VAR_32, VAR_38->ndbh_count);
   VAR_30 = VAR_2;
  }
  FUNC_11(VAR_37, 1);
 }
out:
 if (VAR_28)
  FUNC_24(FUNC_1(VAR_28));
 return (VAR_30);
}
