
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize_bits; } ;
struct isofs_iget5_callback_data {unsigned long block; unsigned long offset; } ;
struct inode {int i_state; } ;


 long VAR_0 ;
 long VAR_1 ;
 struct inode* FUNC_0 (long) ;
 int VAR_2 ;
 struct inode* FUNC_1 (struct super_block*,unsigned long,int *,int *,struct isofs_iget5_callback_data*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 long FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;

struct inode *FUNC_5(struct super_block *VAR_5,
    unsigned long VAR_6,
    unsigned long VAR_7)
{
 unsigned long VAR_8;
 struct inode *VAR_9;
 struct isofs_iget5_callback_data VAR_10;
 long VAR_11;

 if (VAR_7 >= 1ul << VAR_5->s_blocksize_bits)
  return FUNC_0(-VAR_0);

 VAR_10.block = VAR_6;
 VAR_10.offset = VAR_7;

 VAR_8 = (VAR_6 << VAR_5->s_blocksize_bits) | VAR_7;

 VAR_9 = FUNC_1(VAR_5, VAR_8, &VAR_4,
    &VAR_3, &VAR_10);

 if (!VAR_9)
  return FUNC_0(-VAR_1);

 if (VAR_9->i_state & VAR_2) {
  VAR_11 = FUNC_3(VAR_9);
  if (VAR_11 < 0) {
   FUNC_2(VAR_9);
   VAR_9 = FUNC_0(VAR_11);
  } else {
   FUNC_4(VAR_9);
  }
 }

 return VAR_9;
}
