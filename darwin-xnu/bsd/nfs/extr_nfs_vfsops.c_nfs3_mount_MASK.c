
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int u_int64_t ;
struct TYPE_4__ {int nfsa_flags; int nfsa_bitmap; int nfsa_maxname; } ;
struct nfsmount {scalar_t__ nm_vers; int nm_lock; TYPE_2__ nm_fsattr; TYPE_1__* nm_fh; int nm_mountp; } ;
struct nfs_vattr {int dummy; } ;
struct nfs_fsattr {int dummy; } ;
typedef int * nfsnode_t ;
struct TYPE_3__ {int fh_len; int fh_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nfsmount*,int *,int ) ;
 int FUNC_6 (int *,int ,int ,int ,int ,int ,struct nfs_vattr*,int *) ;
 int FUNC_7 (struct nfsmount*,struct nfs_fsattr*) ;
 int FUNC_8 (int *,struct nfs_fsattr*,int ) ;
 int FUNC_9 (int ,int *,int *,int ,int ,struct nfs_vattr*,int *,int ,int ,int **) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

int
FUNC_13(
 struct nfsmount *VAR_9,
 vfs_context_t VAR_10,
 nfsnode_t *VAR_11)
{
 int VAR_12 = 0;
 struct nfs_vattr VAR_13;
 u_int64_t VAR_14;

 *VAR_11 = ((void*)0);

 if (!VAR_9->nm_fh)
  return (VAR_0);





 VAR_12 = FUNC_6(((void*)0), VAR_9->nm_mountp, VAR_9->nm_fh->fh_data, VAR_9->nm_fh->fh_len, 0,
   VAR_10, &VAR_13, &VAR_14);
 if (VAR_12)
  goto out;

 VAR_12 = FUNC_9(VAR_9->nm_mountp, ((void*)0), ((void*)0), VAR_9->nm_fh->fh_data, VAR_9->nm_fh->fh_len,
   &VAR_13, &VAR_14, VAR_8, VAR_7, VAR_11);
 if (*VAR_11)
  FUNC_10(*VAR_11);
 if (VAR_12)
  goto out;




 if (VAR_9->nm_vers == VAR_5) {
  FUNC_2(VAR_9->nm_fsattr.nfsa_bitmap, VAR_2);
  VAR_9->nm_fsattr.nfsa_maxname = VAR_4;
 } else if (VAR_9->nm_vers == VAR_6) {

  VAR_12 = FUNC_5(VAR_9, *VAR_11, VAR_10);
  if (VAR_12)
   goto out;


  if (FUNC_1(VAR_9->nm_fsattr.nfsa_bitmap, VAR_1) &&
      (VAR_9->nm_fsattr.nfsa_flags & VAR_3)) {
   struct nfs_fsattr VAR_15;
   if (!FUNC_8(*VAR_11, &VAR_15, VAR_10)) {

    FUNC_3(&VAR_9->nm_lock);
    FUNC_7(VAR_9, &VAR_15);
    FUNC_4(&VAR_9->nm_lock);
   }
  }
 }
out:
 if (*VAR_11 && VAR_12) {
  FUNC_11(FUNC_0(*VAR_11));
  FUNC_12(FUNC_0(*VAR_11));
  *VAR_11 = ((void*)0);
 }
 return (VAR_12);
}
