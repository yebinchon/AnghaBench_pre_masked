
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; } ;
struct inode {int i_size; int i_mutex; int i_ctime; int i_mtime; struct address_space* i_mapping; struct super_block* i_sb; } ;
struct address_space {scalar_t__ nrpages; } ;
typedef int loff_t ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
struct TYPE_2__ {int i_data_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct super_block*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int *,struct address_space*,int,int,int ) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*,int,int) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (struct inode*,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,struct inode*) ;
 int FUNC_18 (int *,struct inode*) ;
 int FUNC_19 (int *,struct inode*) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (struct address_space*,int,int) ;
 int FUNC_22 (struct inode*) ;
 scalar_t__ FUNC_23 (struct address_space*,int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (struct inode*,int,int) ;
 int FUNC_27 (int *) ;

int FUNC_28(struct inode *VAR_5, loff_t VAR_6, loff_t VAR_7)
{
 struct super_block *VAR_8 = VAR_5->i_sb;
 ext4_lblk_t VAR_9, VAR_10;
 struct address_space *VAR_11 = VAR_5->i_mapping;
 handle_t *VAR_12;
 loff_t VAR_13, VAR_14, VAR_15;
 loff_t VAR_16, VAR_17;
 int VAR_18, VAR_19 = 0;





 if (VAR_11->nrpages && FUNC_23(VAR_11, VAR_2)) {
  VAR_19 = FUNC_21(VAR_11,
   VAR_6, VAR_6 + VAR_7 - 1);

  if (VAR_19)
   return VAR_19;
 }

 FUNC_24(&VAR_5->i_mutex);

 if (FUNC_2(VAR_5) || FUNC_4(VAR_5)) {
  VAR_19 = -VAR_0;
  goto out_mutex;
 }
 if (FUNC_5(VAR_5)) {
  VAR_19 = -VAR_1;
  goto out_mutex;
 }


 if (VAR_6 >= VAR_5->i_size)
  goto out_mutex;





 if (VAR_6 + VAR_7 > VAR_5->i_size) {
  VAR_7 = VAR_5->i_size +
     VAR_4 - (VAR_5->i_size & (VAR_4 - 1)) -
     VAR_6;
 }

 VAR_13 = (VAR_6 + VAR_4 - 1) >> VAR_3;
 VAR_14 = (VAR_6 + VAR_7) >> VAR_3;

 VAR_16 = VAR_13 << VAR_3;
 VAR_17 = VAR_14 << VAR_3;


 if (VAR_17 > VAR_16) {
  FUNC_26(VAR_5, VAR_16,
      VAR_17 - 1);
 }


 VAR_19 = FUNC_22(VAR_5);
 if (VAR_19)
  goto out_mutex;

 VAR_18 = FUNC_20(VAR_5);
 VAR_12 = FUNC_15(VAR_5, VAR_18);
 if (FUNC_3(VAR_12)) {
  VAR_19 = FUNC_7(VAR_12);
  goto out_mutex;
 }

 VAR_19 = FUNC_18(VAR_12, VAR_5);
 if (VAR_19)
  goto out;







 if (VAR_13 > VAR_14) {




  VAR_19 = FUNC_10(VAR_12,
   VAR_11, VAR_6, VAR_7, 0);

  if (VAR_19)
   goto out;
 } else {




  VAR_15 = VAR_16 - VAR_6;
  if (VAR_15 > 0) {
   VAR_19 = FUNC_10(VAR_12, VAR_11,
         VAR_6, VAR_15, 0);
   if (VAR_19)
    goto out;
  }





  VAR_15 = VAR_6 + VAR_7 - VAR_17;
  if (VAR_15 > 0) {
   VAR_19 = FUNC_10(VAR_12, VAR_11,
     VAR_17, VAR_15, 0);
   if (VAR_19)
    goto out;
  }
 }





 if (VAR_5->i_size >> VAR_3 == VAR_14 &&
    VAR_5->i_size % VAR_4 != 0) {

  VAR_15 = VAR_4 -
   (VAR_5->i_size & (VAR_4 - 1));

  if (VAR_15 > 0) {
   VAR_19 = FUNC_10(VAR_12,
     VAR_11, VAR_5->i_size, VAR_15, 0);

   if (VAR_19)
    goto out;
  }
 }

 VAR_9 = (VAR_6 + VAR_8->s_blocksize - 1) >>
  FUNC_0(VAR_8);
 VAR_10 = (VAR_6 + VAR_7) >> FUNC_0(VAR_8);


 if (VAR_9 >= VAR_10)
  goto out;

 FUNC_8(&FUNC_1(VAR_5)->i_data_sem);
 FUNC_12(VAR_5);
 FUNC_11(VAR_5);

 VAR_19 = FUNC_13(VAR_5, VAR_9, VAR_10 - 1);

 FUNC_12(VAR_5);
 FUNC_11(VAR_5);

 if (FUNC_6(VAR_5))
  FUNC_14(VAR_12);

 FUNC_27(&FUNC_1(VAR_5)->i_data_sem);

out:
 FUNC_19(VAR_12, VAR_5);
 VAR_5->i_mtime = VAR_5->i_ctime = FUNC_9(VAR_5);
 FUNC_17(VAR_12, VAR_5);
 FUNC_16(VAR_12);
out_mutex:
 FUNC_25(&VAR_5->i_mutex);
 return VAR_19;
}
