
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ext4_extent_idx {int dummy; } ;
struct ext4_ext_path {scalar_t__ p_idx; TYPE_1__* p_hdr; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
typedef int ext4_fsblk_t ;
struct TYPE_2__ {scalar_t__ eh_entries; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_3 (int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_4 (int *,int,struct inode*,struct buffer_head*,int ) ;
 int FUNC_5 (int *,struct inode*,int ,int,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (scalar_t__*,int) ;
 int FUNC_9 (scalar_t__,scalar_t__,int) ;
 struct buffer_head* FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(handle_t *VAR_2, struct inode *VAR_3,
   struct ext4_ext_path *VAR_4)
{
 struct buffer_head *VAR_5;
 int VAR_6;
 ext4_fsblk_t VAR_7;


 VAR_4--;
 VAR_7 = FUNC_6(VAR_4->p_idx);
 if (FUNC_11(VAR_4->p_hdr->eh_entries == 0)) {
  FUNC_0(VAR_3, "path->p_hdr->eh_entries == 0");
  return -VAR_0;
 }
 VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;

 if (VAR_4->p_idx != FUNC_1(VAR_4->p_hdr)) {
  int VAR_8 = FUNC_1(VAR_4->p_hdr) - VAR_4->p_idx;
  VAR_8 *= sizeof(struct ext4_extent_idx);
  FUNC_9(VAR_4->p_idx, VAR_4->p_idx + 1, VAR_8);
 }

 FUNC_8(&VAR_4->p_hdr->eh_entries, -1);
 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;
 FUNC_7("index is empty, remove it, free block %llu\n", VAR_7);
 VAR_5 = FUNC_10(VAR_3->i_sb, VAR_7);
 FUNC_4(VAR_2, 1, VAR_3, VAR_5, VAR_7);
 FUNC_5(VAR_2, VAR_3, VAR_7, 1, VAR_1);
 return VAR_6;
}
