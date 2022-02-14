
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_cred {int dummy; } ;
struct nfs_access_entry {int mask; int jiffies; struct rpc_cred* cred; } ;
struct inode {int i_mode; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int (* access ) (struct inode*,struct nfs_access_entry*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_5 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (struct inode*,struct nfs_access_entry*) ;
 int FUNC_4 (struct inode*,struct rpc_cred*,struct nfs_access_entry*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct inode*,struct nfs_access_entry*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_7, struct rpc_cred *VAR_8, int VAR_9)
{
 struct nfs_access_entry VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_7, VAR_8, &VAR_10);
 if (VAR_11 == 0)
  goto out;


 VAR_10.mask = VAR_2 | VAR_4 | VAR_3;
 VAR_10.cred = VAR_8;
 VAR_10.jiffies = VAR_6;
 VAR_11 = FUNC_1(VAR_7)->access(VAR_7, &VAR_10);
 if (VAR_11 != 0) {
  if (VAR_11 == -VAR_1) {
   FUNC_5(VAR_7);
   if (!FUNC_2(VAR_7->i_mode))
    FUNC_6(VAR_5, &FUNC_0(VAR_7)->flags);
  }
  return VAR_11;
 }
 FUNC_3(VAR_7, &VAR_10);
out:
 if ((VAR_9 & ~VAR_10.mask & (VAR_3 | VAR_4 | VAR_2)) == 0)
  return 0;
 return -VAR_0;
}
