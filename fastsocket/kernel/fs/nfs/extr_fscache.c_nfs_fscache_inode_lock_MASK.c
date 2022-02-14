
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int flags; } ;
struct inode {int dummy; } ;


 struct nfs_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct inode *VAR_3)
{
 struct nfs_inode *VAR_4 = FUNC_0(VAR_3);

 while (FUNC_1(VAR_0, &VAR_4->flags))
  FUNC_2(&VAR_4->flags, VAR_0,
       VAR_2, VAR_1);
}
