
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_fattr {int valid; int ctime; } ;
struct inode {int i_ctime; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(const struct inode *VAR_1, const struct nfs_fattr *VAR_2)
{
 if (!(VAR_2->valid & VAR_0))
  return 0;
 return FUNC_0(&VAR_2->ctime, &VAR_1->i_ctime) > 0;
}
