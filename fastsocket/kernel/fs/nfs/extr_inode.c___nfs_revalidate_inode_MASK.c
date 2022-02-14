
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_server {int dummy; } ;
struct nfs_inode {int cache_validity; int flags; } ;
struct nfs_fattr {int dummy; } ;
struct inode {TYPE_1__* i_sb; int i_mode; } ;
struct TYPE_4__ {int (* getattr ) (struct nfs_server*,int ,struct nfs_fattr*) ;} ;
struct TYPE_3__ {int s_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 struct nfs_inode* FUNC_2 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ,long long,...) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 struct nfs_fattr* FUNC_8 () ;
 int FUNC_9 (struct nfs_fattr*) ;
 int FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (struct inode*,struct nfs_fattr*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (struct nfs_server*,int ,struct nfs_fattr*) ;

int
FUNC_16(struct nfs_server *VAR_6, struct inode *VAR_7)
{
 int VAR_8 = -VAR_1;
 struct nfs_fattr *VAR_9 = ((void*)0);
 struct nfs_inode *VAR_10 = FUNC_2(VAR_7);

 FUNC_6(VAR_5, "NFS: revalidating (%s/%Ld)\n",
  VAR_7->i_sb->s_id, (long long)FUNC_1(VAR_7));

 if (FUNC_7(VAR_7))
  goto out;
 if (FUNC_4(VAR_7))
  goto out;

 VAR_8 = -VAR_0;
 VAR_9 = FUNC_8();
 if (VAR_9 == ((void*)0))
  goto out;

 FUNC_10(VAR_7, VAR_2);
 VAR_8 = FUNC_3(VAR_7)->getattr(VAR_6, FUNC_0(VAR_7), VAR_9);
 if (VAR_8 != 0) {
  FUNC_6(VAR_5, "nfs_revalidate_inode: (%s/%Ld) getattr failed, error=%d\n",
    VAR_7->i_sb->s_id,
    (long long)FUNC_1(VAR_7), VAR_8);
  if (VAR_8 == -VAR_1) {
   FUNC_13(VAR_7);
   if (!FUNC_5(VAR_7->i_mode))
    FUNC_14(VAR_4, &FUNC_2(VAR_7)->flags);
  }
  goto out;
 }

 VAR_8 = FUNC_11(VAR_7, VAR_9);
 if (VAR_8) {
  FUNC_6(VAR_5, "nfs_revalidate_inode: (%s/%Ld) refresh failed, error=%d\n",
    VAR_7->i_sb->s_id,
    (long long)FUNC_1(VAR_7), VAR_8);
  goto out;
 }

 if (VAR_10->cache_validity & VAR_3)
  FUNC_12(VAR_7);

 FUNC_6(VAR_5, "NFS: (%s/%Ld) revalidation complete\n",
  VAR_7->i_sb->s_id,
  (long long)FUNC_1(VAR_7));

 out:
 FUNC_9(VAR_9);
 return VAR_8;
}
