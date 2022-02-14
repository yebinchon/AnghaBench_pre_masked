
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_blkbits; scalar_t__ i_ino; int i_sb; } ;
struct file {TYPE_1__* f_dentry; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {int p_depth; struct ext4_extent* p_ext; } ;
typedef int pgoff_t ;
typedef int ext4_lblk_t ;
typedef int __u64 ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*,struct inode*) ;
 int FUNC_1 (struct inode*,struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*,struct ext4_extent*,struct ext4_extent*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int ,char*,int,int) ;
 int FUNC_6 (struct ext4_ext_path*) ;
 int FUNC_7 (struct ext4_extent*) ;
 int FUNC_8 (struct ext4_extent*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,int,struct ext4_ext_path**) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct ext4_ext_path*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (struct inode*,struct inode*,int,int,int*) ;
 int FUNC_16 (struct inode*,struct inode*) ;
 int FUNC_17 (struct inode*,struct inode*) ;
 int FUNC_18 (struct inode*,struct ext4_ext_path*,struct ext4_extent**) ;
 int FUNC_19 (int,int) ;
 int FUNC_20 (struct file*,struct inode*,int,int,int,int,int*) ;

int
FUNC_21(struct file *VAR_4, struct file *VAR_5,
   __u64 VAR_6, __u64 VAR_7, __u64 VAR_8,
   __u64 *VAR_9)
{
 struct inode *VAR_10 = VAR_4->f_dentry->d_inode;
 struct inode *VAR_11 = VAR_5->f_dentry->d_inode;
 struct ext4_ext_path *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 struct ext4_extent *VAR_14, *VAR_15, *VAR_16;
 ext4_lblk_t VAR_17 = VAR_6;
 ext4_lblk_t VAR_18, VAR_19, VAR_20, VAR_21, VAR_22 = 0;
 ext4_lblk_t VAR_23;
 pgoff_t VAR_24 = 0, VAR_25;
 int VAR_26, VAR_27, VAR_28, VAR_29 = 0;
 int VAR_30 = VAR_3 >> VAR_10->i_blkbits;
 int VAR_31;
 int VAR_32;
 int VAR_33;


 if (VAR_10->i_ino == VAR_11->i_ino) {
  FUNC_3("ext4 move extent: The argument files should not "
   "be same file [ino:orig %lu, donor %lu]\n",
   VAR_10->i_ino, VAR_11->i_ino);
  return -VAR_0;
 }


 VAR_26 = FUNC_16(VAR_10, VAR_11);
 if (VAR_26 < 0)
  return VAR_26;


 FUNC_0(VAR_10, VAR_11);

 VAR_26 = FUNC_15(VAR_10, VAR_11, VAR_6,
        VAR_7, &VAR_8);
 if (VAR_26)
  goto out;

 VAR_21 = (FUNC_11(VAR_10) - 1) >> VAR_10->i_blkbits;
 VAR_18 = VAR_17 + VAR_8 - 1;
 if (VAR_21 < VAR_18)
  VAR_8 -= VAR_18 - VAR_21;

 VAR_26 = FUNC_10(VAR_10, VAR_17, &VAR_12);
 if (VAR_26)
  goto out;


 VAR_26 = FUNC_10(VAR_10, VAR_17, &VAR_13);
 if (VAR_26)
  goto out;

 VAR_28 = FUNC_9(VAR_10);
 VAR_15 = VAR_13[VAR_28].p_ext;





 if (FUNC_13(VAR_15->ee_block) +
  FUNC_7(VAR_15) - 1 < VAR_17) {




  VAR_29 = FUNC_18(VAR_10,
     VAR_13, &VAR_15);
  if (VAR_29 < 0) {
   VAR_26 = VAR_29;
   goto out;
  }
  VAR_29 = FUNC_18(VAR_10, VAR_12,
       &VAR_16);
  if (VAR_29 < 0) {
   VAR_26 = VAR_29;
   goto out;
  }
  VAR_19 = FUNC_13(VAR_15->ee_block);
 } else if (FUNC_13(VAR_15->ee_block) > VAR_17)

  VAR_19 = FUNC_13(VAR_15->ee_block);
 else
  VAR_19 = VAR_17;


 if (FUNC_13(VAR_15->ee_block) > VAR_18) {
  FUNC_3("ext4 move extent: The specified range of file "
       "may be the hole\n");
  VAR_26 = -VAR_0;
  goto out;
 }


 VAR_20 = FUNC_19(FUNC_13(VAR_15->ee_block) +
    FUNC_7(VAR_15), VAR_18 + 1) -
       FUNC_14(FUNC_13(VAR_15->ee_block), VAR_17);

 while (!VAR_29 && FUNC_13(VAR_15->ee_block) <= VAR_18) {
  VAR_22 += VAR_20;


  if (VAR_19 + VAR_22 - 1 > VAR_18)
   VAR_22 = VAR_18 - VAR_19 + 1;

  VAR_14 = VAR_15;
  VAR_29 = FUNC_18(VAR_10, VAR_13,
      &VAR_15);
  if (VAR_29 < 0) {
   VAR_26 = VAR_29;
   break;
  }
  VAR_20 = FUNC_7(VAR_15);





  if (FUNC_2(VAR_10,
            VAR_14, VAR_15) &&
      VAR_18 >= FUNC_13(VAR_15->ee_block) &&
      !VAR_29)
   continue;


  VAR_33 = FUNC_8(VAR_14);

  VAR_31 = VAR_19 % VAR_30;





  if (VAR_31 + VAR_22 > VAR_30) {

   VAR_32 =
     VAR_30 - VAR_31;
  } else {

   VAR_32 = VAR_22;
  }

  VAR_24 = VAR_19 >>
    (VAR_2 - VAR_10->i_blkbits);
  VAR_25 = (VAR_19 + VAR_22 - 1) >>
    (VAR_2 - VAR_10->i_blkbits);
  VAR_19 = FUNC_13(VAR_15->ee_block);
  VAR_23 = VAR_22;
  FUNC_1(VAR_10, VAR_11);

  while (VAR_24 <= VAR_25) {


   VAR_32 = FUNC_20(
      VAR_4, VAR_11,
      VAR_24,
      VAR_31,
      VAR_32, VAR_33,
      &VAR_26);


   *VAR_9 += VAR_32;
   if (VAR_26 < 0)
    break;
   if (*VAR_9 > VAR_8) {
    FUNC_5(VAR_10->i_sb,
     "We replaced blocks too much! "
     "sum of replaced: %llu requested: %llu",
     *VAR_9, VAR_8);
    VAR_26 = -VAR_1;
    break;
   }

   VAR_24++;
   VAR_31 = 0;
   VAR_23 -= VAR_32;
   if (VAR_23 > VAR_30)
    VAR_32 = VAR_30;
   else
    VAR_32 = VAR_23;
  }

  FUNC_0(VAR_10, VAR_11);
  if (VAR_26 < 0)
   break;


  if (VAR_13)
   FUNC_6(VAR_13);
  VAR_26 = FUNC_10(VAR_10, VAR_19, &VAR_13);
  if (VAR_26)
   break;
  VAR_28 = VAR_13->p_depth;


  if (VAR_12)
   FUNC_6(VAR_12);
  VAR_26 = FUNC_10(VAR_10, VAR_19, &VAR_12);
  if (VAR_26)
   break;

  VAR_15 = VAR_13[VAR_28].p_ext;
  VAR_20 = FUNC_7(VAR_15);
  VAR_22 = 0;

 }
out:
 if (*VAR_9) {
  FUNC_4(VAR_10);
  FUNC_4(VAR_11);
 }

 if (VAR_12) {
  FUNC_6(VAR_12);
  FUNC_12(VAR_12);
 }
 if (VAR_13) {
  FUNC_6(VAR_13);
  FUNC_12(VAR_13);
 }
 FUNC_1(VAR_10, VAR_11);
 VAR_27 = FUNC_17(VAR_10, VAR_11);

 if (VAR_26)
  return VAR_26;
 else if (VAR_27)
  return VAR_27;

 return 0;
}
