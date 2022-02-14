
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int cache_validity; } ;
struct nfs_fattr {int valid; } ;
struct inode {int i_mode; } ;


 int VAR_0 ;
 struct nfs_inode* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,struct nfs_fattr*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_4, struct nfs_fattr *VAR_5)
{
 struct nfs_inode *VAR_6 = FUNC_0(VAR_4);

 VAR_6->cache_validity |= VAR_1|VAR_3;
 if (FUNC_1(VAR_4->i_mode)) {
  VAR_6->cache_validity |= VAR_2;
  FUNC_2(VAR_4);
 }
 if ((VAR_5->valid & VAR_0) == 0)
  return 0;
 return FUNC_3(VAR_4, VAR_5);
}
