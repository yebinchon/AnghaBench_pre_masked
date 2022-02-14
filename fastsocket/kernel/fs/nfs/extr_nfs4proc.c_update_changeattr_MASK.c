
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int cache_validity; scalar_t__ change_attr; } ;
struct nfs4_change_info {scalar_t__ before; scalar_t__ after; int atomic; } ;
struct inode {int i_lock; } ;


 struct nfs_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_3, struct nfs4_change_info *VAR_4)
{
 struct nfs_inode *VAR_5 = FUNC_0(VAR_3);

 FUNC_3(&VAR_3->i_lock);
 VAR_5->cache_validity |= VAR_0|VAR_2|VAR_1;
 if (!VAR_4->atomic || VAR_4->before != VAR_5->change_attr)
  FUNC_1(VAR_3);
 VAR_5->change_attr = VAR_4->after;
 FUNC_2(VAR_3);
 FUNC_4(&VAR_3->i_lock);
}
