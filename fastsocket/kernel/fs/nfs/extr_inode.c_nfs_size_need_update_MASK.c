
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_fattr {int valid; int size; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode const*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const struct inode *VAR_1, const struct nfs_fattr *VAR_2)
{
 if (!(VAR_2->valid & VAR_0))
  return 0;
 return FUNC_1(VAR_2->size) > FUNC_0(VAR_1);
}
