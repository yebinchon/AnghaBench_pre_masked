
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int flags; } ;
struct inode {int dummy; } ;


 struct nfs_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static inline void FUNC_5(struct inode *VAR_1)
{
 struct nfs_inode *VAR_2 = FUNC_0(VAR_1);

 FUNC_3();
 FUNC_1(VAR_0, &VAR_2->flags);
 FUNC_2();
 FUNC_4(&VAR_2->flags, VAR_0);
}
