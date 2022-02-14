
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_extent_idx {int dummy; } ;
struct ext4_extent_header {int dummy; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {int p_depth; struct ext4_extent_header* p_hdr; struct ext4_extent_idx* p_idx; struct ext4_extent* p_ext; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ ext4_lblk_t ;
typedef int ext4_fsblk_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,char*,scalar_t__,...) ;
 struct ext4_extent* FUNC_1 (struct ext4_extent_header*) ;
 struct ext4_extent_idx* FUNC_2 (struct ext4_extent_header*) ;
 struct ext4_extent* FUNC_3 (struct ext4_extent_header*) ;
 struct ext4_extent_idx* FUNC_4 (struct ext4_extent_header*) ;
 scalar_t__ FUNC_5 (struct inode*,struct ext4_extent_header*,int,struct buffer_head*) ;
 int FUNC_6 (struct ext4_extent*) ;
 int FUNC_7 (struct ext4_extent*) ;
 int FUNC_8 (struct ext4_extent_idx*) ;
 struct ext4_extent_header* FUNC_9 (struct buffer_head*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct buffer_head*) ;
 struct buffer_head* FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int) ;

int
FUNC_14(struct inode *VAR_1, struct ext4_ext_path *VAR_2,
   ext4_lblk_t *VAR_3, ext4_fsblk_t *VAR_4)
{
 struct buffer_head *VAR_5 = ((void*)0);
 struct ext4_extent_header *VAR_6;
 struct ext4_extent_idx *VAR_7;
 struct ext4_extent *VAR_8;
 ext4_fsblk_t VAR_9;
 int VAR_10;
 int VAR_11;

 if (FUNC_13(VAR_2 == ((void*)0))) {
  FUNC_0(VAR_1, "path == NULL *logical %d!", *VAR_3);
  return -VAR_0;
 }
 VAR_10 = VAR_2->p_depth;
 *VAR_4 = 0;

 if (VAR_10 == 0 && VAR_2->p_ext == ((void*)0))
  return 0;





 VAR_8 = VAR_2[VAR_10].p_ext;
 VAR_11 = FUNC_6(VAR_8);
 if (*VAR_3 < FUNC_10(VAR_8->ee_block)) {
  if (FUNC_13(FUNC_1(VAR_2[VAR_10].p_hdr) != VAR_8)) {
   FUNC_0(VAR_1,
      "first_extent(path[%d].p_hdr) != ex",
      VAR_10);
   return -VAR_0;
  }
  while (--VAR_10 >= 0) {
   VAR_7 = VAR_2[VAR_10].p_idx;
   if (FUNC_13(VAR_7 != FUNC_2(VAR_2[VAR_10].p_hdr))) {
    FUNC_0(VAR_1,
       "ix != EXT_FIRST_INDEX *logical %d!",
       *VAR_3);
    return -VAR_0;
   }
  }
  *VAR_3 = FUNC_10(VAR_8->ee_block);
  *VAR_4 = FUNC_7(VAR_8);
  return 0;
 }

 if (FUNC_13(*VAR_3 < (FUNC_10(VAR_8->ee_block) + VAR_11))) {
  FUNC_0(VAR_1,
     "logical %d < ee_block %d + ee_len %d!",
     *VAR_3, FUNC_10(VAR_8->ee_block), VAR_11);
  return -VAR_0;
 }

 if (VAR_8 != FUNC_3(VAR_2[VAR_10].p_hdr)) {

  VAR_8++;
  *VAR_3 = FUNC_10(VAR_8->ee_block);
  *VAR_4 = FUNC_7(VAR_8);
  return 0;
 }


 while (--VAR_10 >= 0) {
  VAR_7 = VAR_2[VAR_10].p_idx;
  if (VAR_7 != FUNC_4(VAR_2[VAR_10].p_hdr))
   goto got_index;
 }


 return 0;

got_index:



 VAR_7++;
 VAR_9 = FUNC_8(VAR_7);
 while (++VAR_10 < VAR_2->p_depth) {
  VAR_5 = FUNC_12(VAR_1->i_sb, VAR_9);
  if (VAR_5 == ((void*)0))
   return -VAR_0;
  VAR_6 = FUNC_9(VAR_5);

  if (FUNC_5(VAR_1, VAR_6,
      VAR_2->p_depth - VAR_10, VAR_5)) {
   FUNC_11(VAR_5);
   return -VAR_0;
  }
  VAR_7 = FUNC_2(VAR_6);
  VAR_9 = FUNC_8(VAR_7);
  FUNC_11(VAR_5);
 }

 VAR_5 = FUNC_12(VAR_1->i_sb, VAR_9);
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 VAR_6 = FUNC_9(VAR_5);
 if (FUNC_5(VAR_1, VAR_6, VAR_2->p_depth - VAR_10, VAR_5)) {
  FUNC_11(VAR_5);
  return -VAR_0;
 }
 VAR_8 = FUNC_1(VAR_6);
 *VAR_3 = FUNC_10(VAR_8->ee_block);
 *VAR_4 = FUNC_7(VAR_8);
 FUNC_11(VAR_5);
 return 0;
}
