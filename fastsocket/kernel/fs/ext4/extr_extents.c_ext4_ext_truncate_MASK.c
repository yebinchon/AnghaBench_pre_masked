
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; } ;
struct inode {int i_size; int i_ctime; int i_mtime; scalar_t__ i_nlink; struct super_block* i_sb; struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
struct TYPE_2__ {int i_disksize; int i_data_sem; } ;


 int FUNC_0 (struct super_block*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct address_space*,int) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,int,scalar_t__) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (struct inode*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,struct inode*) ;
 scalar_t__ FUNC_14 (int *,struct inode*) ;
 int FUNC_15 (int *,struct inode*) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (int *) ;

void FUNC_19(struct inode *VAR_1)
{
 struct address_space *VAR_2 = VAR_1->i_mapping;
 struct super_block *VAR_3 = VAR_1->i_sb;
 ext4_lblk_t VAR_4;
 handle_t *VAR_5;
 int VAR_6 = 0;





 FUNC_17(VAR_1);




 VAR_6 = FUNC_16(VAR_1);
 VAR_5 = FUNC_11(VAR_1, VAR_6);
 if (FUNC_2(VAR_5))
  return;

 if (VAR_1->i_size & (VAR_3->s_blocksize - 1))
  FUNC_5(VAR_5, VAR_2, VAR_1->i_size);

 if (FUNC_14(VAR_5, VAR_1))
  goto out_stop;

 FUNC_4(&FUNC_1(VAR_1)->i_data_sem);
 FUNC_8(VAR_1);

 FUNC_7(VAR_1);
 FUNC_1(VAR_1)->i_disksize = VAR_1->i_size;
 FUNC_13(VAR_5, VAR_1);

 VAR_4 = (VAR_1->i_size + VAR_3->s_blocksize - 1)
   >> FUNC_0(VAR_3);
 VAR_6 = FUNC_9(VAR_1, VAR_4, VAR_0 - 1);




 if (FUNC_3(VAR_1))
  FUNC_10(VAR_5);

out_stop:
 FUNC_18(&FUNC_1(VAR_1)->i_data_sem);







 if (VAR_1->i_nlink)
  FUNC_15(VAR_5, VAR_1);

 VAR_1->i_mtime = VAR_1->i_ctime = FUNC_6(VAR_1);
 FUNC_13(VAR_5, VAR_1);
 FUNC_12(VAR_5);
}
