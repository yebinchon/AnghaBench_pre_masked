
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct hpfs_inode_info {int ** i_rddir_off; } ;
typedef int loff_t ;


 int VAR_0 ;
 struct hpfs_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int **) ;
 int ** FUNC_2 (int,int ) ;
 int FUNC_3 (int **,int **,int) ;
 int FUNC_4 (char*) ;

void FUNC_5(struct inode *VAR_1, loff_t *VAR_2)
{
 struct hpfs_inode_info *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = 0;
 loff_t **VAR_5;

 if (VAR_3->i_rddir_off)
  for (; VAR_3->i_rddir_off[VAR_4]; VAR_4++)
   if (VAR_3->i_rddir_off[VAR_4] == VAR_2) return;
 if (!(VAR_4&0x0f)) {
  if (!(VAR_5 = FUNC_2((VAR_4+0x11) * sizeof(loff_t*), VAR_0))) {
   FUNC_4("HPFS: out of memory for position list\n");
   return;
  }
  if (VAR_3->i_rddir_off) {
   FUNC_3(VAR_5, VAR_3->i_rddir_off, VAR_4 * sizeof(loff_t));
   FUNC_1(VAR_3->i_rddir_off);
  }
  VAR_3->i_rddir_off = VAR_5;
 }
 VAR_3->i_rddir_off[VAR_4] = VAR_2;
 VAR_3->i_rddir_off[VAR_4 + 1] = ((void*)0);
}
