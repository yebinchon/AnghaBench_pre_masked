
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vnode_t ;
typedef int vfs_context_t ;
typedef int uio_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint16_t ;
typedef int thread_t ;
struct vnop_readdir_args {int a_flags; int* a_eofflag; int* a_numdirent; int a_uio; int a_vp; int a_context; } ;
struct nfsmount {int nm_vers; int nm_state; } ;
struct nfsbuf {scalar_t__ nb_flags; scalar_t__ nb_data; } ;
struct nfs_dir_buf_header {scalar_t__ ndbh_count; int ndbh_entry_end; scalar_t__ ndbh_flags; int ndbh_ncgen; } ;
struct direntry {scalar_t__ d_seekoff; scalar_t__ d_reclen; int d_namlen; int d_name; int d_type; int d_ino; } ;
struct dirent {int d_name; scalar_t__ d_namlen; int d_type; int d_ino; scalar_t__ d_reclen; } ;
typedef TYPE_2__* nfsnode_t ;
typedef int dent ;
struct TYPE_14__ {int biocache_readdirs; } ;
struct TYPE_12__ {int nva_flags; } ;
struct TYPE_13__ {int n_flag; int n_ncgen; TYPE_1__ n_vattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct direntry* FUNC_1 (struct direntry*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 struct direntry* FUNC_3 (struct nfsbuf*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (int,int *) ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 TYPE_2__* FUNC_7 (int ) ;
 struct nfsmount* FUNC_8 (int ) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (TYPE_2__*,scalar_t__,int ,int ,int ,struct nfsbuf**) ;
 int FUNC_11 (struct nfsbuf*,int ) ;
 int FUNC_12 (struct nfsbuf*,int) ;
 int FUNC_13 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_14 (TYPE_2__*,scalar_t__,int*,scalar_t__*) ;
 int FUNC_15 (TYPE_2__*,int *,int ,int ) ;
 int FUNC_16 (TYPE_2__*) ;
 scalar_t__ FUNC_17 (struct nfsmount*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (int ,int ,int ,int) ;
 TYPE_3__ VAR_22 ;
 int FUNC_21 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_22 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int ) ;
 int FUNC_25 (int ,scalar_t__) ;
 int FUNC_26 (char*,scalar_t__,int ) ;
 int FUNC_27 (int ) ;
 scalar_t__ FUNC_28 (int ) ;

int
FUNC_29(
 struct vnop_readdir_args *VAR_23)
{
 vfs_context_t VAR_24 = VAR_23->a_context;
 vnode_t VAR_25 = VAR_23->a_vp;
 nfsnode_t VAR_26 = FUNC_7(VAR_25);
 struct nfsmount *VAR_27;
 uio_t VAR_28 = VAR_23->a_uio;
 int VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;
 uint16_t VAR_36, VAR_37, VAR_38, VAR_39;
 uint64_t VAR_40, VAR_41, VAR_42 = 0;
 struct nfsbuf *VAR_43 = ((void*)0);
 struct nfs_dir_buf_header *VAR_44;
 struct direntry *VAR_45, *VAR_46;
 struct dirent VAR_47;
 char *VAR_48 = ((void*)0);
 thread_t VAR_49;

 VAR_27 = FUNC_8(VAR_25);
 if (FUNC_17(VAR_27))
  return (VAR_3);
 VAR_30 = VAR_27->nm_vers;
 VAR_33 = (VAR_27->nm_state & VAR_13);
 VAR_31 = (VAR_23->a_flags & VAR_21);

 if (FUNC_28(VAR_25) != VAR_20)
  return (VAR_4);

 if (VAR_23->a_eofflag)
  *VAR_23->a_eofflag = 0;

 if (FUNC_24(VAR_28) == 0)
  return (0);

 if ((VAR_30 >= VAR_16) && (VAR_26->n_vattr.nva_flags & VAR_15)) {

  return (0);
 }

 VAR_49 = FUNC_27(VAR_24);
 VAR_32 = VAR_35 = 0;
 VAR_41 = FUNC_23(VAR_28);
 VAR_34 = VAR_33 && FUNC_4(VAR_41);

 if ((VAR_29 = FUNC_18(VAR_26)))
  goto out;

 if (VAR_26->n_flag & VAR_19) {
  VAR_26->n_flag &= ~VAR_19;
  FUNC_16(VAR_26);
  FUNC_19(VAR_26);
  VAR_29 = FUNC_20(VAR_25, 0, VAR_24, 1);
  if (!VAR_29)
   VAR_29 = FUNC_18(VAR_26);
  if (VAR_29)
   goto out;
 }




 if (!VAR_41) {
  if (VAR_26->n_flag & VAR_18) {
   FUNC_16(VAR_26);
   FUNC_19(VAR_26);
   if ((VAR_29 = FUNC_20(VAR_25, 0, VAR_24, 1)))
    goto out;
  } else {
   FUNC_19(VAR_26);
  }

  if ((VAR_29 = FUNC_15(VAR_26, ((void*)0), VAR_24, VAR_17)))
   goto out;
 } else {
  FUNC_19(VAR_26);
 }

 VAR_29 = FUNC_14(VAR_26, VAR_41, &VAR_34, &VAR_42);
 if (VAR_29) {
  if (VAR_29 < 0) {
   VAR_35 = 1;
   VAR_29 = 0;
  }
  if (VAR_23->a_eofflag)
   *VAR_23->a_eofflag = 1;
 }

 while (!VAR_29 && !VAR_35) {
  FUNC_6(1, &VAR_22.biocache_readdirs);
  VAR_40 = VAR_41;
getbuffer:
  VAR_29 = FUNC_10(VAR_26, VAR_42, VAR_14, VAR_49, VAR_7, &VAR_43);
  if (VAR_29)
   goto out;
  VAR_44 = (struct nfs_dir_buf_header*)VAR_43->nb_data;
  if (!FUNC_0(VAR_43->nb_flags, VAR_8) || !FUNC_0(VAR_44->ndbh_flags, VAR_10)) {
   if (!FUNC_0(VAR_43->nb_flags, VAR_8)) {
    VAR_44->ndbh_flags = 0;
    VAR_44->ndbh_count = 0;
    VAR_44->ndbh_entry_end = sizeof(*VAR_44);
    VAR_44->ndbh_ncgen = VAR_26->n_ncgen;
   }
   VAR_29 = FUNC_11(VAR_43, VAR_24);
   if (VAR_29 == VAR_12)
    goto getbuffer;
   if (VAR_29)
    FUNC_12(VAR_43, 1);
   if (VAR_29 && (VAR_29 != VAR_3) && (VAR_29 != VAR_6) && (VAR_29 != VAR_0) && (VAR_29 != VAR_5)) {
    if (!FUNC_18(VAR_26)) {
     FUNC_16(VAR_26);
     FUNC_19(VAR_26);
    }
    FUNC_20(VAR_25, 0, VAR_24, 1);
    if (VAR_29 == VAR_11)
     VAR_29 = VAR_2;
   }
   if (VAR_29)
    goto out;
  }


  VAR_45 = FUNC_3(VAR_43);
  VAR_36 = 0;
  if ((VAR_42 != VAR_40) && !(VAR_34 && FUNC_5(VAR_42, VAR_40))) {
   VAR_46 = ((void*)0);
   VAR_37 = 0;
   for (; (VAR_36 < VAR_44->ndbh_count) && (VAR_40 != VAR_45->d_seekoff); VAR_36++) {
    if (VAR_34 && !VAR_46 && FUNC_5(VAR_40, VAR_45->d_seekoff)) {
     VAR_37 = VAR_36;
     VAR_46 = VAR_45;
    }
    VAR_41 = VAR_45->d_seekoff;
    VAR_45 = FUNC_1(VAR_45);
   }
   if ((VAR_36 == VAR_44->ndbh_count) && VAR_46) {
    VAR_36 = VAR_37;
    VAR_45 = VAR_46;
   }
   if (VAR_36 < VAR_44->ndbh_count) {
    VAR_41 = VAR_45->d_seekoff;
    VAR_45 = FUNC_1(VAR_45);
    VAR_36++;
   }
  }
  VAR_34 = 0;


  for (; VAR_36 < VAR_44->ndbh_count; VAR_36++) {
   if (VAR_31) {
    VAR_38 = VAR_45->d_reclen;
    VAR_48 = (char*)VAR_45;
   } else {
    if (!VAR_48) {
     VAR_48 = (char*)&VAR_47;
     FUNC_9(VAR_48, sizeof(VAR_47));
    }
    if (VAR_45->d_namlen > (sizeof(VAR_47.d_name) - 1))
     VAR_39 = sizeof(VAR_47.d_name) - 1;
    else
     VAR_39 = VAR_45->d_namlen;
    VAR_38 = FUNC_2(VAR_39);
    VAR_47.d_reclen = VAR_38;
    VAR_47.d_ino = VAR_45->d_ino;
    VAR_47.d_type = VAR_45->d_type;
    VAR_47.d_namlen = VAR_39;
    FUNC_22(VAR_47.d_name, VAR_45->d_name, VAR_39 + 1);
   }

   if (VAR_38 > FUNC_24(VAR_28)) {
    VAR_35 = 1;
    break;
   }
   if ((VAR_29 = FUNC_26(VAR_48, VAR_38, VAR_28)))
    break;
   VAR_32++;
   VAR_41 = VAR_45->d_seekoff;
   VAR_45 = FUNC_1(VAR_45);
  }

  if (VAR_36 == VAR_44->ndbh_count) {

   VAR_42 = VAR_41;

   if (FUNC_0(VAR_44->ndbh_flags, VAR_9)) {
    VAR_35 = 1;
    if (VAR_23->a_eofflag)
     *VAR_23->a_eofflag = 1;
   }
  }
  if (!VAR_29)
   FUNC_25(VAR_28, VAR_41);
  if (!VAR_29 && !VAR_35 && (VAR_41 == VAR_40)) {
   FUNC_21("nfs readdir cookie didn't change 0x%llx, %d/%d\n", VAR_40, VAR_36, VAR_44->ndbh_count);
   VAR_29 = VAR_1;
  }
  FUNC_12(VAR_43, 1);
 }

 if (!VAR_29)
  FUNC_13(VAR_26, VAR_41, VAR_42);

 if (VAR_23->a_numdirent)
  *VAR_23->a_numdirent = VAR_32;
out:
 return (VAR_29);
}
