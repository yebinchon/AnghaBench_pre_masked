
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {int p_depth; TYPE_1__* p_hdr; struct buffer_head* p_bh; void* p_block; scalar_t__ p_idx; struct ext4_extent* p_ext; } ;
struct buffer_head {int dummy; } ;
typedef struct ext4_ext_path handle_t ;
typedef int ext4_lblk_t ;
struct TYPE_7__ {scalar_t__ eh_entries; int eh_max; scalar_t__ eh_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct ext4_ext_path*) ;
 int FUNC_4 (struct ext4_ext_path*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct inode*,TYPE_1__*,int) ;
 scalar_t__ FUNC_9 (struct inode*,TYPE_1__*,int,struct buffer_head*) ;
 int FUNC_10 (struct ext4_ext_path*,struct inode*,struct ext4_ext_path*) ;
 int FUNC_11 (struct ext4_ext_path*) ;
 struct ext4_ext_path* FUNC_12 (struct inode*,int,int *) ;
 int FUNC_13 (struct ext4_ext_path*,struct inode*,struct ext4_ext_path*) ;
 int FUNC_14 (struct ext4_extent*) ;
 int FUNC_15 (struct inode*) ;
 scalar_t__ FUNC_16 (struct ext4_extent*) ;
 scalar_t__ FUNC_17 (struct ext4_ext_path*) ;
 int FUNC_18 (struct ext4_ext_path*,struct inode*,struct ext4_ext_path*) ;
 int FUNC_19 (struct ext4_ext_path*,struct inode*,struct ext4_ext_path*,int,int) ;
 int FUNC_20 (struct inode*,int ) ;
 int FUNC_21 (scalar_t__) ;
 struct ext4_ext_path* FUNC_22 (struct inode*,int) ;
 int FUNC_23 (struct ext4_ext_path*) ;
 int FUNC_24 (struct ext4_ext_path*,struct inode*,struct ext4_ext_path*,int,int,int) ;
 TYPE_1__* FUNC_25 (struct buffer_head*) ;
 int FUNC_26 (char*,...) ;
 int FUNC_27 (struct inode*) ;
 TYPE_1__* FUNC_28 (struct inode*) ;
 int FUNC_29 (struct ext4_ext_path*) ;
 struct ext4_ext_path* FUNC_30 (int,int ) ;
 void* FUNC_31 (scalar_t__) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (struct ext4_ext_path*,int ,int) ;
 struct buffer_head* FUNC_34 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_35(struct inode *VAR_9, ext4_lblk_t VAR_10,
    ext4_lblk_t VAR_11)
{
 struct super_block *VAR_12 = VAR_9->i_sb;
 int VAR_13 = FUNC_27(VAR_9);
 struct ext4_ext_path *VAR_14 = ((void*)0);
 handle_t *VAR_15;
 int VAR_16 = 0, VAR_17 = 0;

 FUNC_26("truncate since %u to %u\n", VAR_10, VAR_11);


 VAR_15 = FUNC_22(VAR_9, VAR_13 + 1);
 if (FUNC_3(VAR_15))
  return FUNC_4(VAR_15);

again:
 FUNC_15(VAR_9);
 if (VAR_11 < VAR_7 - 1) {
  struct ext4_extent *VAR_18;
  ext4_lblk_t VAR_19;


  VAR_14 = FUNC_12(VAR_9, VAR_11, ((void*)0));
  if (FUNC_3(VAR_14)) {
   FUNC_23(VAR_15);
   return FUNC_4(VAR_14);
  }
  VAR_13 = FUNC_27(VAR_9);

  VAR_18 = VAR_14[VAR_13].p_ext;
  if (!VAR_18) {
   if (VAR_13) {
    FUNC_0(VAR_9,
       "path[%d].p_hdr == NULL",
       VAR_13);
    VAR_17 = -VAR_1;
   }
   goto out;
  }

  VAR_19 = FUNC_32(VAR_18->ee_block);







  if (VAR_11 >= VAR_19 &&
      VAR_11 < VAR_19 + FUNC_14(VAR_18) - 1) {
   int VAR_20 = 0;

   if (FUNC_16(VAR_18))
    VAR_20 = VAR_3 |
          VAR_4;







   VAR_17 = FUNC_24(VAR_15, VAR_9, VAR_14,
     VAR_11 + 1, VAR_20,
     VAR_5 |
     VAR_6);

   if (VAR_17 < 0)
    goto out;
  }
 }




 VAR_13 = FUNC_27(VAR_9);
 if (VAR_14) {
  int VAR_21 = VAR_16 = VAR_13;
  while (--VAR_21 > 0)
   VAR_14[VAR_21].p_block =
    FUNC_31(VAR_14[VAR_21].p_hdr->eh_entries)+1;
 } else {
  VAR_14 = FUNC_30(sizeof(struct ext4_ext_path) * (VAR_13 + 1),
          VAR_8);
  if (VAR_14 == ((void*)0)) {
   FUNC_23(VAR_15);
   return -VAR_2;
  }
  VAR_14[0].p_depth = VAR_13;
  VAR_14[0].p_hdr = FUNC_28(VAR_9);
  VAR_16 = 0;

  if (FUNC_8(VAR_9, VAR_14[0].p_hdr, VAR_13)) {
   VAR_17 = -VAR_1;
   goto out;
  }
 }
 VAR_17 = 0;

 while (VAR_16 >= 0 && VAR_17 == 0) {
  if (VAR_16 == VAR_13) {

   VAR_17 = FUNC_19(VAR_15, VAR_9, VAR_14,
     VAR_10, VAR_11);

   FUNC_6(VAR_14[VAR_16].p_bh);
   VAR_14[VAR_16].p_bh = ((void*)0);
   VAR_16--;
   continue;
  }


  if (!VAR_14[VAR_16].p_hdr) {
   FUNC_26("initialize header\n");
   VAR_14[VAR_16].p_hdr = FUNC_25(VAR_14[VAR_16].p_bh);
  }

  if (!VAR_14[VAR_16].p_idx) {

   VAR_14[VAR_16].p_idx = FUNC_2(VAR_14[VAR_16].p_hdr);
   VAR_14[VAR_16].p_block = FUNC_31(VAR_14[VAR_16].p_hdr->eh_entries)+1;
   FUNC_26("init index ptr: hdr 0x%p, num %d\n",
      VAR_14[VAR_16].p_hdr,
      FUNC_31(VAR_14[VAR_16].p_hdr->eh_entries));
  } else {

   VAR_14[VAR_16].p_idx--;
  }

  FUNC_26("level %d - index, first 0x%p, cur 0x%p\n",
    VAR_16, FUNC_1(VAR_14[VAR_16].p_hdr),
    VAR_14[VAR_16].p_idx);
  if (FUNC_17(VAR_14 + VAR_16)) {
   struct buffer_head *VAR_22;

   FUNC_26("move to level %d (block %llu)\n",
      VAR_16 + 1, FUNC_21(VAR_14[VAR_16].p_idx));
   FUNC_33(VAR_14 + VAR_16 + 1, 0, sizeof(*VAR_14));
   VAR_22 = FUNC_34(VAR_12, FUNC_21(VAR_14[VAR_16].p_idx));
   if (!VAR_22) {

    VAR_17 = -VAR_1;
    break;
   }
   if (FUNC_5(VAR_16 + 1 > VAR_13)) {
    VAR_17 = -VAR_1;
    break;
   }
   if (FUNC_9(VAR_9, FUNC_25(VAR_22),
       VAR_13 - VAR_16 - 1, VAR_22)) {
    VAR_17 = -VAR_1;
    break;
   }
   VAR_14[VAR_16 + 1].p_bh = VAR_22;



   VAR_14[VAR_16].p_block = FUNC_31(VAR_14[VAR_16].p_hdr->eh_entries);
   VAR_16++;
  } else {

   if (VAR_14[VAR_16].p_hdr->eh_entries == 0 && VAR_16 > 0) {



    VAR_17 = FUNC_18(VAR_15, VAR_9, VAR_14 + VAR_16);
   }

   FUNC_6(VAR_14[VAR_16].p_bh);
   VAR_14[VAR_16].p_bh = ((void*)0);
   VAR_16--;
   FUNC_26("return to level %d\n", VAR_16);
  }
 }


 if (VAR_14->p_hdr->eh_entries == 0) {




  VAR_17 = FUNC_13(VAR_15, VAR_9, VAR_14);
  if (VAR_17 == 0) {
   FUNC_28(VAR_9)->eh_depth = 0;
   FUNC_28(VAR_9)->eh_max =
    FUNC_7(FUNC_20(VAR_9, 0));
   VAR_17 = FUNC_10(VAR_15, VAR_9, VAR_14);
  }
 }
out:
 FUNC_11(VAR_14);
 FUNC_29(VAR_14);
 if (VAR_17 == -VAR_0) {
  VAR_14 = ((void*)0);
  goto again;
 }
 FUNC_23(VAR_15);

 return VAR_17;
}
