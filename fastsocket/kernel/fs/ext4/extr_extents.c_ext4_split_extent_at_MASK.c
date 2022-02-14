
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; } ;
struct ext4_extent {void* ee_len; int ee_block; } ;
struct ext4_ext_path {struct ext4_extent* p_ext; } ;
typedef int orig_ex ;
typedef int handle_t ;
typedef scalar_t__ ext4_lblk_t ;
typedef scalar_t__ ext4_fsblk_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_4 (int *,struct inode*,struct ext4_ext_path*) ;
 unsigned int FUNC_5 (struct ext4_extent*) ;
 int FUNC_6 (int *,struct inode*,struct ext4_ext_path*,struct ext4_extent*,int) ;
 int FUNC_7 (struct ext4_extent*) ;
 int FUNC_8 (struct ext4_extent*) ;
 scalar_t__ FUNC_9 (struct ext4_extent*) ;
 int FUNC_10 (struct inode*,struct ext4_ext_path*) ;
 int FUNC_11 (struct ext4_extent*,scalar_t__) ;
 int FUNC_12 (struct inode*,struct ext4_ext_path*,struct ext4_extent*) ;
 int FUNC_13 (struct inode*,struct ext4_extent*) ;
 int FUNC_14 (char*,int ,unsigned long long) ;
 unsigned int FUNC_15 (struct inode*) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (struct ext4_extent*,struct ext4_extent*,int) ;

__attribute__((used)) static int FUNC_18(handle_t *VAR_5,
        struct inode *VAR_6,
        struct ext4_ext_path *VAR_7,
        ext4_lblk_t VAR_8,
        int VAR_9,
        int VAR_10)
{
 ext4_fsblk_t VAR_11;
 ext4_lblk_t VAR_12;
 struct ext4_extent *VAR_13, VAR_14, VAR_15;
 struct ext4_extent *VAR_16 = ((void*)0);
 unsigned int VAR_17, VAR_18;
 int VAR_19 = 0;

 FUNC_14("ext4_split_extents_at: inode %lu, logical"
  "block %llu\n", VAR_6->i_ino, (unsigned long long)VAR_8);

 FUNC_10(VAR_6, VAR_7);

 VAR_18 = FUNC_15(VAR_6);
 VAR_13 = VAR_7[VAR_18].p_ext;
 VAR_12 = FUNC_16(VAR_13->ee_block);
 VAR_17 = FUNC_5(VAR_13);
 VAR_11 = VAR_8 - VAR_12 + FUNC_9(VAR_13);

 FUNC_0(VAR_8 < VAR_12 || VAR_8 >= (VAR_12 + VAR_17));

 VAR_19 = FUNC_4(VAR_5, VAR_6, VAR_7 + VAR_18);
 if (VAR_19)
  goto out;

 if (VAR_8 == VAR_12) {





  if (VAR_9 & VAR_2)
   FUNC_8(VAR_13);
  else
   FUNC_7(VAR_13);

  if (!(VAR_10 & VAR_4))
   FUNC_12(VAR_6, VAR_7, VAR_13);

  VAR_19 = FUNC_3(VAR_5, VAR_6, VAR_7 + VAR_18);
  goto out;
 }


 FUNC_17(&VAR_15, VAR_13, sizeof(VAR_15));
 VAR_13->ee_len = FUNC_1(VAR_8 - VAR_12);
 if (VAR_9 & VAR_1)
  FUNC_8(VAR_13);





 VAR_19 = FUNC_3(VAR_5, VAR_6, VAR_7 + VAR_18);
 if (VAR_19)
  goto fix_extent_len;

 VAR_16 = &VAR_14;
 VAR_16->ee_block = FUNC_2(VAR_8);
 VAR_16->ee_len = FUNC_1(VAR_17 - (VAR_8 - VAR_12));
 FUNC_11(VAR_16, VAR_11);
 if (VAR_9 & VAR_2)
  FUNC_8(VAR_16);

 VAR_19 = FUNC_6(VAR_5, VAR_6, VAR_7, &VAR_14, VAR_10);
 if (VAR_19 == -VAR_0 && (VAR_3 & VAR_9)) {
  VAR_19 = FUNC_13(VAR_6, &VAR_15);
  if (VAR_19)
   goto fix_extent_len;

  VAR_13->ee_len = FUNC_1(VAR_17);
  FUNC_12(VAR_6, VAR_7, VAR_13);
  VAR_19 = FUNC_3(VAR_5, VAR_6, VAR_7 + VAR_18);
  goto out;
 } else if (VAR_19)
  goto fix_extent_len;

out:
 FUNC_10(VAR_6, VAR_7);
 return VAR_19;

fix_extent_len:
 VAR_13->ee_len = VAR_15.ee_len;
 FUNC_3(VAR_5, VAR_6, VAR_7 + VAR_18);
 return VAR_19;
}
