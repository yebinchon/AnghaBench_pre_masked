
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_access_entry {int mask; int cred; int jiffies; int rb_node; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int access_cache_inode_lru; int flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct nfs_access_entry* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct inode*,struct nfs_access_entry*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int *) ;

void FUNC_13(struct inode *VAR_5, struct nfs_access_entry *VAR_6)
{
 struct nfs_access_entry *VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_0);
 if (VAR_7 == ((void*)0))
  return;
 FUNC_1(&VAR_7->rb_node);
 VAR_7->jiffies = VAR_6->jiffies;
 VAR_7->cred = FUNC_3(VAR_6->cred);
 VAR_7->mask = VAR_6->mask;

 FUNC_6(VAR_5, VAR_7);


 FUNC_8();
 FUNC_2(&VAR_4);
 FUNC_7();


 if (!FUNC_12(VAR_1, &FUNC_0(VAR_5)->flags)) {
  FUNC_9(&VAR_3);
  if (!FUNC_11(VAR_1, &FUNC_0(VAR_5)->flags))
   FUNC_5(&FUNC_0(VAR_5)->access_cache_inode_lru,
     &VAR_2);
  FUNC_10(&VAR_3);
 }
}
