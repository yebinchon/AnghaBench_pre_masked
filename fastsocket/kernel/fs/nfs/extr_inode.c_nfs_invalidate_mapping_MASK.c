
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_inode {int cookieverf; int cache_validity; } ;
struct inode {TYPE_1__* i_sb; int i_lock; int i_mode; } ;
struct address_space {scalar_t__ nrpages; } ;
struct TYPE_2__ {int s_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 struct nfs_inode* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,long long) ;
 int FUNC_5 (struct address_space*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (struct address_space*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_3, struct address_space *VAR_4)
{
 struct nfs_inode *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;

 if (VAR_4->nrpages != 0) {
  if (FUNC_3(VAR_3->i_mode)) {
   VAR_6 = FUNC_9(VAR_4);
   if (VAR_6 < 0)
    return VAR_6;
  }
  VAR_6 = FUNC_5(VAR_4);
  if (VAR_6 < 0)
   return VAR_6;
 }
 FUNC_10(&VAR_3->i_lock);
 VAR_5->cache_validity &= ~VAR_1;
 if (FUNC_2(VAR_3->i_mode))
  FUNC_6(VAR_5->cookieverf, 0, sizeof(VAR_5->cookieverf));
 FUNC_11(&VAR_3->i_lock);
 FUNC_8(VAR_3, VAR_0);
 FUNC_7(VAR_3);
 FUNC_4(VAR_2, "NFS: (%s/%Ld) data cache invalidated\n",
   VAR_3->i_sb->s_id, (long long)FUNC_0(VAR_3));
 return 0;
}
