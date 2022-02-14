
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct list_blocks_struct {int dummy; } ;
struct inode {scalar_t__ i_blocks; int i_ino; int i_nlink; TYPE_2__* i_sb; int i_mode; } ;
struct ext4_inode_info {scalar_t__* i_data; int i_data_sem; } ;
typedef int lb ;
typedef struct inode handle_t ;
typedef scalar_t__ ext4_lblk_t ;
typedef int __u32 ;
typedef scalar_t__ __le32 ;
struct TYPE_7__ {int s_blocksize; TYPE_1__* s_root; } ;
struct TYPE_6__ {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 struct ext4_inode_info* FUNC_2 (struct inode*) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct inode*,struct inode*,struct inode*) ;
 int FUNC_10 (struct inode*,struct inode*) ;
 scalar_t__ FUNC_11 (struct inode*,int) ;
 int FUNC_12 (struct inode*,int) ;
 struct inode* FUNC_13 (struct inode*,int) ;
 int FUNC_14 (struct inode*) ;
 struct inode* FUNC_15 (struct inode*,int ,int ,int ,int) ;
 int FUNC_16 (struct inode*,struct inode*) ;
 int FUNC_17 (struct inode*,int ) ;
 scalar_t__ FUNC_18 (struct inode*,int ) ;
 int FUNC_19 (struct inode*,struct inode*,struct list_blocks_struct*) ;
 int FUNC_20 (struct inode*,struct inode*) ;
 int FUNC_21 (struct inode*) ;
 int FUNC_22 (struct inode*,int ) ;
 int FUNC_23 (struct inode*) ;
 int FUNC_24 (scalar_t__) ;
 int FUNC_25 (struct list_blocks_struct*,int ,int) ;
 int FUNC_26 (struct inode*) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (struct inode*,struct inode*,int ,scalar_t__*,struct list_blocks_struct*) ;
 int FUNC_29 (struct inode*,struct inode*,int ,scalar_t__,struct list_blocks_struct*) ;
 int FUNC_30 (struct inode*,struct inode*,int ,scalar_t__*,struct list_blocks_struct*) ;
 int FUNC_31 (struct inode*,struct inode*,int ,scalar_t__*,struct list_blocks_struct*) ;

int FUNC_32(struct inode *VAR_11)
{
 handle_t *VAR_12;
 int VAR_13 = 0, VAR_14;
 __le32 *VAR_15;
 ext4_lblk_t VAR_16 = 0;
 struct ext4_inode_info *VAR_17;
 struct inode *VAR_18 = ((void*)0);
 struct list_blocks_struct VAR_19;
 unsigned long VAR_20;
 __u32 VAR_21;





 if (!FUNC_1(VAR_11->i_sb,
           VAR_3) ||
     (FUNC_18(VAR_11, VAR_6)))
  return -VAR_0;

 if (FUNC_7(VAR_11->i_mode) && VAR_11->i_blocks == 0)



  return VAR_13;

 VAR_12 = FUNC_13(VAR_11,
     FUNC_0(VAR_11->i_sb) +
     VAR_4 + 3 +
     FUNC_4(VAR_11->i_sb)
     + 1);
 if (FUNC_5(VAR_12)) {
  VAR_13 = FUNC_6(VAR_12);
  return VAR_13;
 }
 VAR_21 = (((VAR_11->i_ino - 1) / FUNC_3(VAR_11->i_sb)) *
  FUNC_3(VAR_11->i_sb)) + 1;
 VAR_18 = FUNC_15(VAR_12, VAR_11->i_sb->s_root->d_inode,
       VAR_10, 0, VAR_21);
 if (FUNC_5(VAR_18)) {
  VAR_13 = -VAR_1;
  FUNC_14(VAR_12);
  return VAR_13;
 }
 FUNC_22(VAR_18, FUNC_21(VAR_11));
 VAR_18->i_nlink = 1;

 FUNC_10(VAR_12, VAR_18);
 FUNC_16(VAR_12, VAR_18);
 FUNC_14(VAR_12);
 FUNC_8((&FUNC_2(VAR_11)->i_data_sem));
 FUNC_17(VAR_11, VAR_8);
 FUNC_27((&FUNC_2(VAR_11)->i_data_sem));

 VAR_12 = FUNC_13(VAR_11, 1);

 VAR_17 = FUNC_2(VAR_11);
 VAR_15 = VAR_17->i_data;
 FUNC_25(&VAR_19, 0, sizeof(VAR_19));


 VAR_20 = VAR_11->i_sb->s_blocksize >> 2;
 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++, VAR_16++) {
  if (VAR_15[VAR_14]) {
   VAR_13 = FUNC_29(VAR_12, VAR_18,
      FUNC_24(VAR_15[VAR_14]),
      VAR_16, &VAR_19);
   if (VAR_13)
    goto err_out;
  }
 }
 if (VAR_15[VAR_5]) {
  VAR_13 = FUNC_30(VAR_12, VAR_18,
     FUNC_24(VAR_15[VAR_5]),
     &VAR_16, &VAR_19);
   if (VAR_13)
    goto err_out;
 } else
  VAR_16 += VAR_20;
 if (VAR_15[VAR_2]) {
  VAR_13 = FUNC_28(VAR_12, VAR_18,
     FUNC_24(VAR_15[VAR_2]),
     &VAR_16, &VAR_19);
   if (VAR_13)
    goto err_out;
 } else
  VAR_16 += VAR_20 * VAR_20;
 if (VAR_15[VAR_9]) {
  VAR_13 = FUNC_31(VAR_12, VAR_18,
     FUNC_24(VAR_15[VAR_9]),
     &VAR_16, &VAR_19);
   if (VAR_13)
    goto err_out;
 }



 VAR_13 = FUNC_19(VAR_12, VAR_18, &VAR_19);
err_out:
 if (VAR_13)




  FUNC_20(VAR_12, VAR_18);
 else {
  VAR_13 = FUNC_9(VAR_12, VAR_11, VAR_18);
  if (VAR_13)




   FUNC_20(VAR_12, VAR_18);
 }


 if (FUNC_11(VAR_12, 1) != 0)
  FUNC_12(VAR_12, 1);




 FUNC_22(VAR_18, 0);
 VAR_18->i_blocks = 0;


 FUNC_10(VAR_12, VAR_18);






 VAR_18->i_nlink = 0;

 FUNC_14(VAR_12);
 FUNC_26(VAR_18);
 FUNC_23(VAR_18);

 return VAR_13;
}
