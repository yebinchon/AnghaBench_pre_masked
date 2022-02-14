
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {unsigned int i_ino; TYPE_1__* i_sb; int i_mode; } ;
struct ext4_extent_header {int dummy; } ;
struct ext4_extent {void* ee_len; int ee_block; int ee_start_hi; int ee_start_lo; } ;
struct ext4_ext_path {struct ext4_extent* p_ext; struct ext4_extent_header* p_hdr; int p_block; } ;
struct ext4_allocation_request {unsigned short lleft; unsigned short lright; unsigned short goal; unsigned short logical; unsigned int len; scalar_t__ flags; struct inode* inode; int pright; int pleft; } ;
struct buffer_head {unsigned int b_blocknr; int b_bdev; int b_state; } ;
typedef int handle_t ;
typedef unsigned short ext4_lblk_t ;
struct TYPE_5__ {scalar_t__ flag; } ;
typedef TYPE_2__ ext4_io_end_t ;
typedef unsigned int ext4_fsblk_t ;
struct TYPE_6__ {int i_aiodio_unwritten; TYPE_2__* cur_aio_dio; } ;
struct TYPE_4__ {int s_bdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,char*,unsigned short,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 scalar_t__ FUNC_2 (struct ext4_ext_path*) ;
 int FUNC_3 (struct ext4_ext_path*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct inode*,unsigned short,struct ext4_ext_path*,unsigned int) ;
 void* FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned short) ;
 int FUNC_10 (struct inode*,unsigned int,int) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*,struct ext4_extent*,struct ext4_ext_path*) ;
 int FUNC_13 (struct ext4_ext_path*) ;
 struct ext4_ext_path* FUNC_14 (struct inode*,unsigned short,int *) ;
 unsigned short FUNC_15 (struct inode*,struct ext4_ext_path*,unsigned short) ;
 void* FUNC_16 (struct ext4_extent*) ;
 int FUNC_17 (int *,struct inode*,unsigned short,unsigned int,struct ext4_ext_path*,int,unsigned int,struct buffer_head*,unsigned int) ;
 scalar_t__ FUNC_18 (struct inode*,unsigned short,struct ext4_extent*) ;
 int FUNC_19 (int *,struct inode*,struct ext4_ext_path*,struct ext4_extent*,int) ;
 int FUNC_20 (struct ext4_extent*) ;
 int FUNC_21 (struct ext4_extent*) ;
 unsigned int FUNC_22 (struct ext4_extent*) ;
 int FUNC_23 (struct inode*,struct ext4_ext_path*,unsigned short) ;
 int FUNC_24 (struct inode*,unsigned short,unsigned int,unsigned int) ;
 int FUNC_25 (struct inode*,struct ext4_ext_path*,unsigned short*,int *) ;
 int FUNC_26 (struct inode*,struct ext4_ext_path*,unsigned short*,int *) ;
 int FUNC_27 (struct inode*,struct ext4_ext_path*) ;
 int FUNC_28 (struct ext4_extent*,unsigned int) ;
 int FUNC_29 (int *,struct inode*,unsigned int,void*,int) ;
 unsigned int FUNC_30 (int *,struct ext4_allocation_request*,int*) ;
 int FUNC_31 (struct inode*,int ) ;
 int FUNC_32 (int *,struct inode*,int) ;
 int FUNC_33 (char*,unsigned short,unsigned int,unsigned int,...) ;
 int FUNC_34 (struct inode*) ;
 scalar_t__ FUNC_35 (unsigned short,unsigned short,unsigned short) ;
 int FUNC_36 (struct ext4_ext_path*) ;
 unsigned short FUNC_37 (int ) ;
 int FUNC_38 (struct buffer_head*) ;
 int FUNC_39 (struct buffer_head*) ;
 scalar_t__ FUNC_40 (int) ;

int FUNC_41(handle_t *VAR_13, struct inode *VAR_14,
   ext4_lblk_t VAR_15,
   unsigned int VAR_16, struct buffer_head *VAR_17,
   int VAR_18)
{
 struct ext4_ext_path *VAR_19 = ((void*)0);
 struct ext4_extent_header *VAR_20;
 struct ext4_extent VAR_21, *VAR_22;
 ext4_fsblk_t VAR_23;
 int VAR_24 = 0, VAR_25, VAR_26;
 unsigned int VAR_27 = 0;
 struct ext4_allocation_request VAR_28;
 ext4_io_end_t *VAR_29 = FUNC_1(VAR_14)->cur_aio_dio;

 FUNC_5(VAR_0, &VAR_17->b_state);
 FUNC_33("blocks %u/%u requested for inode %lu\n",
   VAR_15, VAR_16, VAR_14->i_ino);


 if (FUNC_18(VAR_14, VAR_15, &VAR_21)) {
  if (!VAR_21.ee_start_lo && !VAR_21.ee_start_hi) {
   if ((VAR_18 & VAR_4) == 0) {




    goto out2;
   }

  } else {

   VAR_23 = VAR_15
       - FUNC_37(VAR_21.ee_block)
       + FUNC_22(&VAR_21);

   VAR_27 = FUNC_16(&VAR_21) -
     (VAR_15 - FUNC_37(VAR_21.ee_block));
   goto out;
  }
 }


 VAR_19 = FUNC_14(VAR_14, VAR_15, ((void*)0));
 if (FUNC_2(VAR_19)) {
  VAR_24 = FUNC_3(VAR_19);
  VAR_19 = ((void*)0);
  goto out2;
 }

 VAR_25 = FUNC_34(VAR_14);






 if (FUNC_40(VAR_19[VAR_25].p_ext == ((void*)0) && VAR_25 != 0)) {
  FUNC_0(VAR_14, "bad extent address "
     "iblock: %d, depth: %d pblock %lld",
     VAR_15, VAR_25, VAR_19[VAR_25].p_block);
  VAR_24 = -VAR_2;
  goto out2;
 }
 VAR_20 = VAR_19[VAR_25].p_hdr;

 VAR_22 = VAR_19[VAR_25].p_ext;
 if (VAR_22) {
  ext4_lblk_t VAR_30 = FUNC_37(VAR_22->ee_block);
  ext4_fsblk_t VAR_31 = FUNC_22(VAR_22);
  unsigned short VAR_32;





  VAR_32 = FUNC_16(VAR_22);

  if (FUNC_35(VAR_15, VAR_30, VAR_32)) {
   VAR_23 = VAR_15 - VAR_30 + VAR_31;

   VAR_27 = VAR_32 - (VAR_15 - VAR_30);
   FUNC_33("%u fit into %u:%d -> %llu\n", VAR_15,
     VAR_30, VAR_32, VAR_23);





   if (!FUNC_20(VAR_22)) {
    FUNC_24(VAR_14, VAR_30,
     VAR_32, VAR_31);
    goto out;
   }
   VAR_26 = FUNC_17(
    VAR_13, VAR_14, VAR_15, VAR_16, VAR_19,
    VAR_18, VAR_27, VAR_17, VAR_23);
   return VAR_26;
  }
 }





 if ((VAR_18 & VAR_4) == 0) {




  FUNC_23(VAR_14, VAR_19, VAR_15);
  goto out2;
 }





 VAR_28.lleft = VAR_15;
 VAR_24 = FUNC_25(VAR_14, VAR_19, &VAR_28.lleft, &VAR_28.pleft);
 if (VAR_24)
  goto out2;
 VAR_28.lright = VAR_15;
 VAR_24 = FUNC_26(VAR_14, VAR_19, &VAR_28.lright, &VAR_28.pright);
 if (VAR_24)
  goto out2;







 if (VAR_16 > VAR_11 &&
     !(VAR_18 & VAR_8))
  VAR_16 = VAR_11;
 else if (VAR_16 > VAR_12 &&
   (VAR_18 & VAR_8))
  VAR_16 = VAR_12;


 VAR_21.ee_block = FUNC_9(VAR_15);
 VAR_21.ee_len = FUNC_8(VAR_16);
 VAR_24 = FUNC_12(VAR_14, &VAR_21, VAR_19);
 if (VAR_24)
  VAR_27 = FUNC_16(&VAR_21);
 else
  VAR_27 = VAR_16;


 VAR_28.inode = VAR_14;
 VAR_28.goal = FUNC_15(VAR_14, VAR_19, VAR_15);
 VAR_28.logical = VAR_15;
 VAR_28.len = VAR_27;
 if (FUNC_4(VAR_14->i_mode))
  VAR_28.flags = VAR_9;
 else

  VAR_28.flags = 0;
 VAR_23 = FUNC_30(VAR_13, &VAR_28, &VAR_24);
 if (!VAR_23)
  goto out2;
 FUNC_33("allocate new block: goal %llu, found %llu/%u\n",
    VAR_28.goal, VAR_23, VAR_27);


 FUNC_28(&VAR_21, VAR_23);
 VAR_21.ee_len = FUNC_8(VAR_28.len);

 if (VAR_18 & VAR_8){
  FUNC_21(&VAR_21);
  if ((VAR_18 & ~VAR_7) ==
      VAR_6) {
   if (VAR_29 && (VAR_29->flag != VAR_1)) {
    VAR_29->flag = VAR_1;
    FUNC_6(&FUNC_1(VAR_14)->i_aiodio_unwritten);
   } else
    FUNC_31(VAR_14,
           VAR_10);
  }
 }

 VAR_24 = FUNC_7(VAR_13, VAR_14, VAR_15, VAR_19, VAR_28.len);
 if (VAR_24)
  goto out2;

 VAR_24 = FUNC_19(VAR_13, VAR_14, VAR_19, &VAR_21, VAR_18);
 if (VAR_24) {
  int VAR_33 = VAR_18 & VAR_5 ?
   VAR_3 : 0;



  FUNC_11(VAR_14);
  FUNC_29(VAR_13, VAR_14, FUNC_22(&VAR_21),
     FUNC_16(&VAR_21), VAR_33);
  goto out2;
 }


 VAR_23 = FUNC_22(&VAR_21);
 VAR_27 = FUNC_16(&VAR_21);
 if (VAR_27 > VAR_16)
  VAR_27 = VAR_16;
 FUNC_39(VAR_17);





 if (VAR_18 & VAR_5)
  FUNC_10(VAR_14, VAR_27, 1);





 if ((VAR_18 & VAR_8) == 0) {
  FUNC_24(VAR_14, VAR_15, VAR_27, VAR_23);
  FUNC_32(VAR_13, VAR_14, 1);
 } else
  FUNC_32(VAR_13, VAR_14, 0);
out:
 if (VAR_27 > VAR_16)
  VAR_27 = VAR_16;
 FUNC_27(VAR_14, VAR_19);
 FUNC_38(VAR_17);
 VAR_17->b_bdev = VAR_14->i_sb->s_bdev;
 VAR_17->b_blocknr = VAR_23;
out2:
 if (VAR_19) {
  FUNC_13(VAR_19);
  FUNC_36(VAR_19);
 }

 return VAR_24 ? VAR_24 : VAR_27;
}
