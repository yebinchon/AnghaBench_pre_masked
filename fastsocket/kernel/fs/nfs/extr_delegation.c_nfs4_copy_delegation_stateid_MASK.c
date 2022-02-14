
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int delegation; } ;
struct nfs_delegation {int type; int stateid; } ;
struct inode {int dummy; } ;
typedef int nfs4_stateid ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct nfs_delegation*) ;
 struct nfs_delegation* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

bool FUNC_6(nfs4_stateid *VAR_2, struct inode *VAR_3,
  fmode_t VAR_4)
{
 struct nfs_inode *VAR_5 = FUNC_0(VAR_3);
 struct nfs_delegation *VAR_6;
 bool VAR_7;

 VAR_4 &= VAR_0|VAR_1;
 FUNC_4();
 VAR_6 = FUNC_3(VAR_5->delegation);
 VAR_7 = (VAR_6 != ((void*)0) && (VAR_6->type & VAR_4) == VAR_4);
 if (VAR_7) {
  FUNC_1(VAR_2, &VAR_6->stateid);
  FUNC_2(VAR_6);
 }
 FUNC_5();
 return VAR_7;
}
