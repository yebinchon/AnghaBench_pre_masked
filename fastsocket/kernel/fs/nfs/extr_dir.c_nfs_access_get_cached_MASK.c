
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_cred {int dummy; } ;
struct nfs_inode {int cache_validity; int access_cache; int access_cache_entry_lru; scalar_t__ attrtimeo; } ;
struct nfs_access_entry {int lru; int rb_node; int mask; int cred; scalar_t__ jiffies; } ;
struct inode {int i_lock; } ;


 int VAR_0 ;
 struct nfs_inode* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct nfs_access_entry*) ;
 struct nfs_access_entry* FUNC_4 (struct inode*,struct rpc_cred*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_3, struct rpc_cred *VAR_4, struct nfs_access_entry *VAR_5)
{
 struct nfs_inode *VAR_6 = FUNC_0(VAR_3);
 struct nfs_access_entry *VAR_7;
 int VAR_8 = -VAR_0;

 FUNC_8(&VAR_3->i_lock);
 if (VAR_6->cache_validity & VAR_1)
  goto out_zap;
 VAR_7 = FUNC_4(VAR_3, VAR_4);
 if (VAR_7 == ((void*)0))
  goto out;
 if (!FUNC_6(VAR_3) &&
     !FUNC_10(VAR_2, VAR_7->jiffies, VAR_7->jiffies + VAR_6->attrtimeo))
  goto out_stale;
 VAR_5->jiffies = VAR_7->jiffies;
 VAR_5->cred = VAR_7->cred;
 VAR_5->mask = VAR_7->mask;
 FUNC_2(&VAR_7->lru, &VAR_6->access_cache_entry_lru);
 VAR_8 = 0;
out:
 FUNC_9(&VAR_3->i_lock);
 return VAR_8;
out_stale:
 FUNC_7(&VAR_7->rb_node, &VAR_6->access_cache);
 FUNC_1(&VAR_7->lru);
 FUNC_9(&VAR_3->i_lock);
 FUNC_3(VAR_7);
 return -VAR_0;
out_zap:
 FUNC_9(&VAR_3->i_lock);
 FUNC_5(VAR_3);
 return -VAR_0;
}
