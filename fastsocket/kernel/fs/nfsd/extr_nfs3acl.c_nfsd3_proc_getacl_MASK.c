
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* fh_dentry; } ;
typedef TYPE_2__ svc_fh ;
struct svc_rqst {int dummy; } ;
struct posix_acl {int dummy; } ;
struct nfsd3_getaclres {int mask; struct posix_acl* acl_default; struct posix_acl* acl_access; int fh; } ;
struct nfsd3_getaclargs {int mask; int fh; } ;
struct inode {int i_mode; } ;
typedef scalar_t__ __be32 ;
struct TYPE_5__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct posix_acl*) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_2__* FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (struct svc_rqst*,int *,int ,int ) ;
 struct posix_acl* FUNC_5 (TYPE_2__*,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_6 (int) ;
 struct posix_acl* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct posix_acl*) ;

__attribute__((used)) static __be32 FUNC_9(struct svc_rqst * VAR_11,
  struct nfsd3_getaclargs *VAR_12, struct nfsd3_getaclres *VAR_13)
{
 svc_fh *VAR_14;
 struct posix_acl *VAR_15;
 __be32 VAR_16 = 0;

 VAR_14 = FUNC_3(&VAR_13->fh, &VAR_12->fh);
 VAR_16 = FUNC_4(VAR_11, &VAR_13->fh, 0, VAR_5);
 if (VAR_16)
  FUNC_2(VAR_16);

 if (VAR_12->mask & ~(VAR_6|VAR_7|VAR_8|VAR_9))
  FUNC_2(VAR_10);
 VAR_13->mask = VAR_12->mask;

 if (VAR_13->mask & (VAR_6|VAR_7)) {
  VAR_15 = FUNC_5(VAR_14, VAR_0);
  if (FUNC_0(VAR_15)) {
   int VAR_17 = FUNC_1(VAR_15);

   if (VAR_17 == -VAR_2 || VAR_17 == -VAR_3)
    VAR_15 = ((void*)0);
   else {
    VAR_16 = FUNC_6(VAR_17);
    goto fail;
   }
  }
  if (VAR_15 == ((void*)0)) {


   struct inode *VAR_18 = VAR_14->fh_dentry->d_inode;
   VAR_15 = FUNC_7(VAR_18->i_mode, VAR_4);
  }
  VAR_13->acl_access = VAR_15;
 }
 if (VAR_13->mask & (VAR_8|VAR_9)) {



  VAR_15 = FUNC_5(VAR_14, VAR_1);
  if (FUNC_0(VAR_15)) {
   int VAR_19 = FUNC_1(VAR_15);

   if (VAR_19 == -VAR_2 || VAR_19 == -VAR_3)
    VAR_15 = ((void*)0);
   else {
    VAR_16 = FUNC_6(VAR_19);
    goto fail;
   }
  }
  VAR_13->acl_default = VAR_15;
 }


 FUNC_2(0);

fail:
 FUNC_8(VAR_13->acl_access);
 FUNC_8(VAR_13->acl_default);
 FUNC_2(VAR_16);
}
