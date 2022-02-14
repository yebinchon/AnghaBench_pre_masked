
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uid_t ;
struct super_block {int dummy; } ;
struct TYPE_8__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_7__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_6__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct inode {int i_state; int i_mode; int i_uid; int i_gid; int i_nlink; int i_size; int * i_op; TYPE_1__* i_mapping; int i_sb; int * i_fop; void* i_generation; void* i_blocks; TYPE_4__ i_ctime; TYPE_3__ i_mtime; TYPE_2__ i_atime; } ;
struct ext2_inode_info {unsigned long i_block_group; scalar_t__* i_data; scalar_t__ i_dir_start_lookup; scalar_t__ i_state; void* i_dtime; void* i_dir_acl; void* i_file_acl; int i_frag_size; int i_frag_no; void* i_faddr; void* i_flags; int * i_block_alloc_info; } ;
struct ext2_inode {scalar_t__* i_block; scalar_t__ i_generation; scalar_t__ i_dir_acl; scalar_t__ i_size_high; scalar_t__ i_file_acl; int i_fsize; int i_frag; scalar_t__ i_faddr; scalar_t__ i_flags; scalar_t__ i_blocks; scalar_t__ i_dtime; scalar_t__ i_mtime; scalar_t__ i_ctime; scalar_t__ i_atime; scalar_t__ i_size; int i_links_count; int i_gid_high; int i_uid_high; int i_gid_low; int i_uid_low; int i_mode; } ;
struct buffer_head {int dummy; } ;
typedef int gid_t ;
typedef int __u64 ;
struct TYPE_5__ {int * a_ops; } ;


 long VAR_0 ;
 long VAR_1 ;
 struct inode* FUNC_0 (long) ;
 long VAR_2 ;
 struct ext2_inode_info* FUNC_1 (struct inode*) ;
 unsigned long FUNC_2 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct ext2_inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long FUNC_4 (struct ext2_inode*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct buffer_head*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct ext2_inode* FUNC_9 (int ,unsigned long,struct buffer_head**) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 int VAR_14 ;
 int FUNC_11 (struct inode*) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_17 ;
 int FUNC_13 (struct inode*) ;
 struct inode* FUNC_14 (struct super_block*,unsigned long) ;
 int FUNC_15 (struct inode*,scalar_t__,int ) ;
 int FUNC_16 (int ) ;
 void* FUNC_17 (scalar_t__) ;
 int FUNC_18 (scalar_t__*,int,int) ;
 int FUNC_19 (void*) ;
 int FUNC_20 (void*) ;
 scalar_t__ FUNC_21 (int ,int ) ;
 int FUNC_22 (struct inode*) ;

struct inode *FUNC_23 (struct super_block *VAR_18, unsigned long VAR_19)
{
 struct ext2_inode_info *VAR_20;
 struct buffer_head * VAR_21;
 struct ext2_inode *VAR_22;
 struct inode *VAR_23;
 long VAR_24 = -VAR_0;
 int VAR_25;

 VAR_23 = FUNC_14(VAR_18, VAR_19);
 if (!VAR_23)
  return FUNC_0(-VAR_1);
 if (!(VAR_23->i_state & VAR_4))
  return VAR_23;

 VAR_20 = FUNC_1(VAR_23);
 VAR_20->i_block_alloc_info = ((void*)0);

 VAR_22 = FUNC_9(VAR_23->i_sb, VAR_19, &VAR_21);
 if (FUNC_3(VAR_22)) {
  VAR_24 = FUNC_4(VAR_22);
   goto bad_inode;
 }

 VAR_23->i_mode = FUNC_16(VAR_22->i_mode);
 VAR_23->i_uid = (uid_t)FUNC_16(VAR_22->i_uid_low);
 VAR_23->i_gid = (gid_t)FUNC_16(VAR_22->i_gid_low);
 if (!(FUNC_21 (VAR_23->i_sb, VAR_6))) {
  VAR_23->i_uid |= FUNC_16(VAR_22->i_uid_high) << 16;
  VAR_23->i_gid |= FUNC_16(VAR_22->i_gid_high) << 16;
 }
 VAR_23->i_nlink = FUNC_16(VAR_22->i_links_count);
 VAR_23->i_size = FUNC_17(VAR_22->i_size);
 VAR_23->i_atime.tv_sec = (signed)FUNC_17(VAR_22->i_atime);
 VAR_23->i_ctime.tv_sec = (signed)FUNC_17(VAR_22->i_ctime);
 VAR_23->i_mtime.tv_sec = (signed)FUNC_17(VAR_22->i_mtime);
 VAR_23->i_atime.tv_nsec = VAR_23->i_mtime.tv_nsec = VAR_23->i_ctime.tv_nsec = 0;
 VAR_20->i_dtime = FUNC_17(VAR_22->i_dtime);





 if (VAR_23->i_nlink == 0 && (VAR_23->i_mode == 0 || VAR_20->i_dtime)) {

  FUNC_8 (VAR_21);
  VAR_24 = -VAR_2;
  goto bad_inode;
 }
 VAR_23->i_blocks = FUNC_17(VAR_22->i_blocks);
 VAR_20->i_flags = FUNC_17(VAR_22->i_flags);
 VAR_20->i_faddr = FUNC_17(VAR_22->i_faddr);
 VAR_20->i_frag_no = VAR_22->i_frag;
 VAR_20->i_frag_size = VAR_22->i_fsize;
 VAR_20->i_file_acl = FUNC_17(VAR_22->i_file_acl);
 VAR_20->i_dir_acl = 0;
 if (FUNC_7(VAR_23->i_mode))
  VAR_23->i_size |= ((__u64)FUNC_17(VAR_22->i_size_high)) << 32;
 else
  VAR_20->i_dir_acl = FUNC_17(VAR_22->i_dir_acl);
 VAR_20->i_dtime = 0;
 VAR_23->i_generation = FUNC_17(VAR_22->i_generation);
 VAR_20->i_state = 0;
 VAR_20->i_block_group = (VAR_19 - 1) / FUNC_2(VAR_23->i_sb);
 VAR_20->i_dir_start_lookup = 0;





 for (VAR_25 = 0; VAR_25 < VAR_3; VAR_25++)
  VAR_20->i_data[VAR_25] = VAR_22->i_block[VAR_25];

 if (FUNC_7(VAR_23->i_mode)) {
  VAR_23->i_op = &VAR_12;
  if (FUNC_12(VAR_23->i_sb)) {
   VAR_23->i_mapping->a_ops = &VAR_8;
   VAR_23->i_fop = &VAR_17;
  } else if (FUNC_21(VAR_23->i_sb, VAR_5)) {
   VAR_23->i_mapping->a_ops = &VAR_14;
   VAR_23->i_fop = &VAR_13;
  } else {
   VAR_23->i_mapping->a_ops = &VAR_7;
   VAR_23->i_fop = &VAR_13;
  }
 } else if (FUNC_5(VAR_23->i_mode)) {
  VAR_23->i_op = &VAR_9;
  VAR_23->i_fop = &VAR_10;
  if (FUNC_21(VAR_23->i_sb, VAR_5))
   VAR_23->i_mapping->a_ops = &VAR_14;
  else
   VAR_23->i_mapping->a_ops = &VAR_7;
 } else if (FUNC_6(VAR_23->i_mode)) {
  if (FUNC_10(VAR_23)) {
   VAR_23->i_op = &VAR_11;
   FUNC_18(VAR_20->i_data, VAR_23->i_size,
    sizeof(VAR_20->i_data) - 1);
  } else {
   VAR_23->i_op = &VAR_16;
   if (FUNC_21(VAR_23->i_sb, VAR_5))
    VAR_23->i_mapping->a_ops = &VAR_14;
   else
    VAR_23->i_mapping->a_ops = &VAR_7;
  }
 } else {
  VAR_23->i_op = &VAR_15;
  if (VAR_22->i_block[0])
   FUNC_15(VAR_23, VAR_23->i_mode,
      FUNC_20(FUNC_17(VAR_22->i_block[0])));
  else
   FUNC_15(VAR_23, VAR_23->i_mode,
      FUNC_19(FUNC_17(VAR_22->i_block[1])));
 }
 FUNC_8 (VAR_21);
 FUNC_11(VAR_23);
 FUNC_22(VAR_23);
 return VAR_23;

bad_inode:
 FUNC_13(VAR_23);
 return FUNC_0(VAR_24);
}
