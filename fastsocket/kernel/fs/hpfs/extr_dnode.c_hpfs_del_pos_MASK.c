
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct hpfs_inode_info {int ** i_rddir_off; } ;
typedef int loff_t ;


 struct hpfs_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int **) ;

void FUNC_2(struct inode *VAR_0, loff_t *VAR_1)
{
 struct hpfs_inode_info *VAR_2 = FUNC_0(VAR_0);
 loff_t **VAR_3, **VAR_4;

 if (!VAR_2->i_rddir_off) goto not_f;
 for (VAR_3 = VAR_2->i_rddir_off; *VAR_3; VAR_3++) if (*VAR_3 == VAR_1) goto fnd;
 goto not_f;
 fnd:
 for (VAR_4 = VAR_3 + 1; *VAR_4; VAR_4++) ;
 *VAR_3 = *(VAR_4 - 1);
 *(VAR_4 - 1) = ((void*)0);
 if (VAR_4 - 1 == VAR_2->i_rddir_off) {
  FUNC_1(VAR_2->i_rddir_off);
  VAR_2->i_rddir_off = ((void*)0);
 }
 return;
 not_f:

 return;
}
