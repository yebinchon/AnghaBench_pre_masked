
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct hpfs_inode_info {int ** i_rddir_off; } ;
typedef int loff_t ;


 struct hpfs_inode_info* FUNC_0 (struct inode*) ;
 void FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct inode *VAR_0, void (*VAR_1)(loff_t *, loff_t, loff_t),
    loff_t VAR_2, loff_t VAR_3)
{
 struct hpfs_inode_info *VAR_4 = FUNC_0(VAR_0);
 loff_t **VAR_5;

 if (!VAR_4->i_rddir_off) return;
 for (VAR_5 = VAR_4->i_rddir_off; *VAR_5; VAR_5++) (*VAR_1)(*VAR_5, VAR_2, VAR_3);
 return;
}
