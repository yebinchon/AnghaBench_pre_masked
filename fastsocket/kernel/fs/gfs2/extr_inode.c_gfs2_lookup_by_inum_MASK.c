
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct gfs2_sbd {struct super_block* sd_vfs; } ;
struct gfs2_holder {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_no_formal_ino; int i_diskflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int VAR_5 ;
 int FUNC_3 (struct gfs2_sbd*,scalar_t__,unsigned int) ;
 int FUNC_4 (struct gfs2_holder*) ;
 int FUNC_5 (struct gfs2_sbd*,scalar_t__,int *,int ,int ,struct gfs2_holder*) ;
 int VAR_6 ;
 struct inode* FUNC_6 (struct super_block*,int ,scalar_t__,int ,int) ;
 int FUNC_7 (struct inode*) ;

struct inode *FUNC_8(struct gfs2_sbd *VAR_7, u64 VAR_8,
      u64 *VAR_9, unsigned int VAR_10)
{
 struct super_block *VAR_11 = VAR_7->sd_vfs;
 struct gfs2_holder VAR_12;
 struct inode *VAR_13 = ((void*)0);
 int VAR_14;


 VAR_14 = FUNC_5(VAR_7, VAR_8, &VAR_6,
      VAR_5, VAR_4, &VAR_12);
 if (VAR_14)
  return FUNC_0(VAR_14);

 VAR_14 = FUNC_3(VAR_7, VAR_8, VAR_10);
 if (VAR_14)
  goto fail;
 VAR_13 = FUNC_6(VAR_11, VAR_0, VAR_8, 0, 1);
 if (FUNC_2(VAR_13))
  goto fail;


 if (VAR_9) {
  VAR_14 = -VAR_2;
  if (FUNC_1(VAR_13)->i_no_formal_ino != *VAR_9)
   goto fail_iput;

  VAR_14 = -VAR_1;
  if (FUNC_1(VAR_13)->i_diskflags & VAR_3)
   goto fail_iput;

  VAR_14 = 0;
 }

fail:
 FUNC_4(&VAR_12);
 return VAR_14 ? FUNC_0(VAR_14) : VAR_13;
fail_iput:
 FUNC_7(VAR_13);
 goto fail;
}
