
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_extent {void* ee_block; void* ee_len; } ;
struct ext4_ext_path {int p_hdr; struct ext4_extent* p_ext; } ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
typedef scalar_t__ ext4_fsblk_t ;


 int VAR_0 ;
 struct ext4_extent* FUNC_0 (int ) ;
 int FUNC_1 (struct ext4_extent*,struct ext4_extent*) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct inode*,struct ext4_extent*,struct ext4_extent*) ;
 int FUNC_5 (int ,char*,int,int,int) ;
 int FUNC_6 (struct ext4_extent*) ;
 scalar_t__ FUNC_7 (struct ext4_extent*) ;
 int FUNC_8 (struct ext4_extent*,scalar_t__) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (int *,struct inode*,struct ext4_ext_path*,struct ext4_extent*,struct ext4_extent*,struct ext4_extent*,struct ext4_extent*,struct ext4_extent*) ;

__attribute__((used)) static int
FUNC_12(handle_t *VAR_1, struct inode *VAR_2,
       struct ext4_ext_path *VAR_3, struct ext4_extent *VAR_4,
       ext4_lblk_t *VAR_5)
{
 struct ext4_extent *VAR_6, *VAR_7, *VAR_8, *VAR_9;
 struct ext4_extent VAR_10, VAR_11, VAR_12;
 ext4_lblk_t VAR_13;
 ext4_fsblk_t VAR_14;
 int VAR_15, VAR_16, VAR_17;
 int VAR_18 = FUNC_9(VAR_2);
 int VAR_19;

 VAR_7 = VAR_8 = VAR_6 = VAR_3[VAR_18].p_ext;
 VAR_15 = FUNC_6(VAR_6);
 VAR_11.ee_len = VAR_12.ee_len = 0;

 VAR_10.ee_block = FUNC_3(*VAR_5);
 FUNC_8(&VAR_10, FUNC_7(VAR_4));
 VAR_10.ee_len = VAR_4->ee_len;
 VAR_16 = FUNC_6(&VAR_10);
 VAR_13 = FUNC_10(VAR_10.ee_block) + VAR_16 - 1;
 VAR_14 = FUNC_7(&VAR_10) + VAR_16 - 1;







 if (FUNC_10(VAR_6->ee_block) < FUNC_10(VAR_10.ee_block) &&
  FUNC_10(VAR_10.ee_block) <
  FUNC_10(VAR_6->ee_block) + VAR_15) {
  VAR_11.ee_len = FUNC_2(FUNC_10(VAR_10.ee_block) -
            FUNC_10(VAR_6->ee_block));
  FUNC_1(VAR_6, &VAR_11);
 } else if (VAR_6 > FUNC_0(VAR_3[VAR_18].p_hdr)) {
  VAR_9 = VAR_6 - 1;




  if (FUNC_4(VAR_2, VAR_9,
            &VAR_10)) {
   VAR_7 = VAR_9;
   VAR_11.ee_len = FUNC_2(
    FUNC_6(VAR_9) +
    VAR_16);
   FUNC_1(VAR_9, &VAR_11);
   VAR_10.ee_len = 0;
  }
 }






 if (FUNC_10(VAR_6->ee_block) + VAR_15 - 1 < VAR_13) {
  FUNC_5(VAR_2->i_sb,
   "new_ext_end(%u) should be less than or equal to "
   "oext->ee_block(%u) + oext_alen(%d) - 1",
   VAR_13, FUNC_10(VAR_6->ee_block),
   VAR_15);
  VAR_19 = -VAR_0;
  goto out;
 }







 if (FUNC_10(VAR_6->ee_block) <= VAR_13 &&
  VAR_13 < FUNC_10(VAR_6->ee_block) + VAR_15 - 1) {
  VAR_12.ee_len =
   FUNC_2(FUNC_10(VAR_6->ee_block) +
   VAR_15 - 1 - VAR_13);
  FUNC_1(VAR_6, &VAR_12);
  VAR_17 = FUNC_6(&VAR_12);
  FUNC_8(&VAR_12,
   (FUNC_7(VAR_8) + VAR_15 - VAR_17));
  VAR_12.ee_block =
   FUNC_3(FUNC_10(VAR_8->ee_block) +
   VAR_15 - VAR_17);
 }

 VAR_19 = FUNC_11(VAR_1, VAR_2, VAR_3, VAR_7,
    VAR_8, &VAR_11, &VAR_10, &VAR_12);
out:
 return VAR_19;
}
