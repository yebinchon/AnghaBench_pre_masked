
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_extent_header {int eh_max; int eh_entries; } ;
struct ext4_ext_path {short p_depth; int * p_ext; int p_block; int * p_idx; struct ext4_extent_header* p_hdr; struct buffer_head* p_bh; } ;
struct buffer_head {int dummy; } ;
typedef int ext4_lblk_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ext4_ext_path* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,char*,short,short) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct inode*,struct ext4_ext_path*,int ) ;
 int FUNC_5 (struct inode*,struct ext4_ext_path*,int ) ;
 scalar_t__ FUNC_6 (struct inode*,struct ext4_extent_header*,short,struct buffer_head*) ;
 int FUNC_7 (struct ext4_ext_path*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct inode*,struct ext4_ext_path*) ;
 int FUNC_10 (int *) ;
 struct ext4_extent_header* FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (char*,short,int ,int ) ;
 short FUNC_13 (struct inode*) ;
 struct ext4_extent_header* FUNC_14 (struct inode*) ;
 int FUNC_15 (struct ext4_ext_path*) ;
 struct ext4_ext_path* FUNC_16 (int,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct buffer_head*) ;
 struct buffer_head* FUNC_19 (int ,int ) ;
 scalar_t__ FUNC_20 (int) ;

struct ext4_ext_path *
FUNC_21(struct inode *VAR_3, ext4_lblk_t VAR_4,
     struct ext4_ext_path *VAR_5)
{
 struct ext4_extent_header *VAR_6;
 struct buffer_head *VAR_7;
 short int VAR_8, VAR_9, VAR_10 = 0, VAR_11 = 0;

 VAR_6 = FUNC_14(VAR_3);
 VAR_8 = FUNC_13(VAR_3);


 if (!VAR_5) {
  VAR_5 = FUNC_16(sizeof(struct ext4_ext_path) * (VAR_8 + 2),
    VAR_2);
  if (!VAR_5)
   return FUNC_0(-VAR_1);
  VAR_11 = 1;
 }
 VAR_5[0].p_hdr = VAR_6;
 VAR_5[0].p_bh = ((void*)0);

 VAR_9 = VAR_8;

 while (VAR_9) {
  FUNC_12("depth %d: num %d, max %d\n",
     VAR_10, FUNC_17(VAR_6->eh_entries), FUNC_17(VAR_6->eh_max));

  FUNC_5(VAR_3, VAR_5 + VAR_10, VAR_4);
  VAR_5[VAR_10].p_block = FUNC_10(VAR_5[VAR_10].p_idx);
  VAR_5[VAR_10].p_depth = VAR_9;
  VAR_5[VAR_10].p_ext = ((void*)0);

  VAR_7 = FUNC_19(VAR_3->i_sb, VAR_5[VAR_10].p_block);
  if (FUNC_20(!VAR_7))
   goto err;
  if (!FUNC_3(VAR_7)) {
   if (FUNC_2(VAR_7) < 0) {
    FUNC_18(VAR_7);
    goto err;
   }
  }
  VAR_6 = FUNC_11(VAR_7);
  VAR_10++;
  if (FUNC_20(VAR_10 > VAR_8)) {
   FUNC_18(VAR_7);
   FUNC_1(VAR_3,
      "ppos %d > depth %d", VAR_10, VAR_8);
   goto err;
  }
  VAR_5[VAR_10].p_bh = VAR_7;
  VAR_5[VAR_10].p_hdr = VAR_6;
  VAR_9--;

  if (FUNC_6(VAR_3, VAR_6, VAR_9, VAR_7))
   goto err;
 }

 VAR_5[VAR_10].p_depth = VAR_9;
 VAR_5[VAR_10].p_ext = ((void*)0);
 VAR_5[VAR_10].p_idx = ((void*)0);


 FUNC_4(VAR_3, VAR_5 + VAR_10, VAR_4);

 if (VAR_5[VAR_10].p_ext)
  VAR_5[VAR_10].p_block = FUNC_8(VAR_5[VAR_10].p_ext);

 FUNC_9(VAR_3, VAR_5);

 return VAR_5;

err:
 FUNC_7(VAR_5);
 if (VAR_11)
  FUNC_15(VAR_5);
 return FUNC_0(-VAR_0);
}
