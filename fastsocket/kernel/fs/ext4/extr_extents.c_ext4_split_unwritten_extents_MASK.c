
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_size; TYPE_1__* i_sb; int i_ino; } ;
struct ext4_extent_header {int dummy; } ;
struct ext4_extent {void* ee_len; void* ee_block; } ;
struct ext4_ext_path {struct ext4_extent* p_ext; struct ext4_extent_header* p_hdr; } ;
typedef int handle_t ;
typedef unsigned int ext4_lblk_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_2__ {int s_blocksize; int s_blocksize_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ext4_ext_path*) ;
 int FUNC_1 (struct ext4_ext_path*) ;
 void* FUNC_2 (unsigned int) ;
 void* FUNC_3 (unsigned int) ;
 int FUNC_4 (int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_5 (struct ext4_ext_path*) ;
 struct ext4_ext_path* FUNC_6 (struct inode*,unsigned int,struct ext4_ext_path*) ;
 int FUNC_7 (int *,struct inode*,struct ext4_ext_path*) ;
 unsigned int FUNC_8 (struct ext4_extent*) ;
 int FUNC_9 (int *,struct inode*,struct ext4_ext_path*,struct ext4_extent*,int) ;
 int FUNC_10 (struct ext4_extent*) ;
 scalar_t__ FUNC_11 (struct ext4_extent*) ;
 int FUNC_12 (struct inode*,struct ext4_ext_path*) ;
 int FUNC_13 (struct ext4_extent*,scalar_t__) ;
 int FUNC_14 (struct inode*,struct ext4_extent*) ;
 int FUNC_15 (char*,...) ;
 unsigned int FUNC_16 (struct inode*) ;
 unsigned int FUNC_17 (void*) ;

__attribute__((used)) static int FUNC_18(handle_t *VAR_2,
     struct inode *VAR_3,
     struct ext4_ext_path *VAR_4,
     ext4_lblk_t VAR_5,
     unsigned int VAR_6,
     int VAR_7)
{
 struct ext4_extent *VAR_8, VAR_9, VAR_10;
 struct ext4_extent *VAR_11 = ((void*)0);
 struct ext4_extent *VAR_12 = ((void*)0);
 struct ext4_extent *VAR_13 = ((void*)0);
 struct ext4_extent_header *VAR_14;
 ext4_lblk_t VAR_15, VAR_16;
 unsigned int VAR_17, VAR_18, VAR_19;
 ext4_fsblk_t VAR_20;
 int VAR_21 = 0;
 int VAR_22;

 FUNC_15("ext4_split_unwritten_extents: inode %lu, logical"
  "block %llu, max_blocks %u\n", VAR_3->i_ino,
  (unsigned long long)VAR_5, VAR_6);

 VAR_16 = (VAR_3->i_size + VAR_3->i_sb->s_blocksize - 1) >>
  VAR_3->i_sb->s_blocksize_bits;
 if (VAR_16 < VAR_5 + VAR_6)
  VAR_16 = VAR_5 + VAR_6;

 VAR_19 = FUNC_16(VAR_3);
 VAR_14 = VAR_4[VAR_19].p_hdr;
 VAR_8 = VAR_4[VAR_19].p_ext;
 VAR_15 = FUNC_17(VAR_8->ee_block);
 VAR_18 = FUNC_8(VAR_8);
 VAR_17 = VAR_18 - (VAR_5 - VAR_15);
 VAR_20 = VAR_5 - VAR_15 + FUNC_11(VAR_8);

 VAR_12 = VAR_8;
 VAR_10.ee_block = VAR_8->ee_block;
 VAR_10.ee_len = FUNC_2(VAR_18);
 FUNC_13(&VAR_10, FUNC_11(VAR_8));





 VAR_22 = VAR_15 + VAR_18 <= VAR_16;






 if ((VAR_5 == VAR_15) && (VAR_17 <= VAR_6))
  return VAR_17;

 VAR_21 = FUNC_7(VAR_2, VAR_3, VAR_4 + VAR_19);
 if (VAR_21)
  goto out;

 if (VAR_5 > VAR_15) {
  VAR_11 = VAR_8;
  VAR_11->ee_len = FUNC_2(VAR_5 - VAR_15);
  FUNC_10(VAR_11);
  FUNC_4(VAR_2, VAR_3, VAR_4 + VAR_19);
  VAR_12 = &VAR_9;
 }





 if (!VAR_11 && VAR_17 > VAR_6)
  VAR_12->ee_len = FUNC_2(VAR_6);

 if (VAR_17 > VAR_6) {
  unsigned int VAR_23;
  VAR_13 = &VAR_9;
  VAR_13->ee_block = FUNC_3(VAR_5 + VAR_6);
  FUNC_13(VAR_13, VAR_20 + VAR_6);
  VAR_13->ee_len = FUNC_2(VAR_17 - VAR_6);
  FUNC_10(VAR_13);
  VAR_21 = FUNC_9(VAR_2, VAR_3, VAR_4, VAR_13, VAR_7);
  if (VAR_21 == -VAR_0 && VAR_22) {
   if (VAR_7 & VAR_1) {
    VAR_21 = FUNC_14(VAR_3, VAR_13);
    if (VAR_21)
     goto fix_extent_len;
    VAR_6 = VAR_17;
    VAR_12->ee_len = FUNC_2(VAR_6);
    goto skip;
   }
   VAR_21 = FUNC_14(VAR_3, &VAR_10);
   if (VAR_21)
    goto fix_extent_len;

   VAR_8->ee_block = VAR_10.ee_block;
   VAR_8->ee_len = VAR_10.ee_len;
   FUNC_13(VAR_8, FUNC_11(&VAR_10));
   FUNC_4(VAR_2, VAR_3, VAR_4 + VAR_19);


   return VAR_17;

  } else if (VAR_21)
   goto fix_extent_len;




  VAR_23 = FUNC_16(VAR_3);




  VAR_18 -= FUNC_8(VAR_13);
  VAR_10.ee_len = FUNC_2(VAR_18);
  VAR_22 = VAR_15 + VAR_18 <= VAR_16;

  VAR_19 = VAR_23;
  FUNC_5(VAR_4);
  VAR_4 = FUNC_6(VAR_3, VAR_5, VAR_4);
  if (FUNC_0(VAR_4)) {
   VAR_21 = FUNC_1(VAR_4);
   goto out;
  }
  VAR_14 = VAR_4[VAR_19].p_hdr;
  VAR_8 = VAR_4[VAR_19].p_ext;
  if (VAR_12 != &VAR_9)
   VAR_12 = VAR_8;

  VAR_21 = FUNC_7(VAR_2, VAR_3, VAR_4 + VAR_19);
  if (VAR_21)
   goto out;

  VAR_17 = VAR_6;
 }
skip:





 if (VAR_11 && VAR_11 != VAR_8) {
  VAR_11 = VAR_8;
  VAR_11->ee_len = FUNC_2(VAR_5 - VAR_15);
  FUNC_10(VAR_11);
  FUNC_4(VAR_2, VAR_3, VAR_4 + VAR_19);
  VAR_12 = &VAR_9;
 }




 VAR_12->ee_block = FUNC_3(VAR_5);
 FUNC_13(VAR_12, VAR_20);
 VAR_12->ee_len = FUNC_2(VAR_17);
 FUNC_10(VAR_12);
 if (VAR_12 != VAR_8)
  goto insert;

 VAR_21 = FUNC_4(VAR_2, VAR_3, VAR_4 + VAR_19);
 FUNC_15("out here\n");
 goto out;
insert:
 VAR_21 = FUNC_9(VAR_2, VAR_3, VAR_4, &VAR_9, VAR_7);
 if (VAR_21 == -VAR_0 && VAR_22) {
  VAR_21 = FUNC_14(VAR_3, &VAR_10);
  if (VAR_21)
   goto fix_extent_len;

  VAR_8->ee_block = VAR_10.ee_block;
  VAR_8->ee_len = VAR_10.ee_len;
  FUNC_13(VAR_8, FUNC_11(&VAR_10));
  FUNC_4(VAR_2, VAR_3, VAR_4 + VAR_19);

  return VAR_17;
 } else if (VAR_21)
  goto fix_extent_len;
out:
 FUNC_12(VAR_3, VAR_4);
 return VAR_21 ? VAR_21 : VAR_17;

fix_extent_len:
 VAR_8->ee_block = VAR_10.ee_block;
 VAR_8->ee_len = VAR_10.ee_len;
 FUNC_13(VAR_8, FUNC_11(&VAR_10));
 FUNC_10(VAR_8);
 FUNC_4(VAR_2, VAR_3, VAR_4 + VAR_19);
 return VAR_21;
}
