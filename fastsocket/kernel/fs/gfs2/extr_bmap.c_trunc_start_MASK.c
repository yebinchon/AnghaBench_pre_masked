
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct inode {struct address_space* i_mapping; } ;
struct TYPE_3__ {int sb_bsize; } ;
struct gfs2_sbd {TYPE_1__ sd_sb; } ;
struct TYPE_4__ {int i_ctime; int i_mtime; } ;
struct gfs2_inode {TYPE_2__ i_inode; int i_diskflags; int i_gl; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {int b_data; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct address_space*,int) ;
 int FUNC_4 (struct buffer_head*,int) ;
 int FUNC_5 (struct gfs2_inode*,int ) ;
 int FUNC_6 (struct gfs2_inode*) ;
 scalar_t__ FUNC_7 (struct gfs2_inode*) ;
 int FUNC_8 (struct inode*,int,int) ;
 int FUNC_9 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_10 (int ,struct buffer_head*) ;
 int FUNC_11 (struct gfs2_sbd*,scalar_t__,int ) ;
 int FUNC_12 (struct gfs2_sbd*) ;
 int FUNC_13 (struct inode*,int) ;
 int FUNC_14 (struct inode*,int,int) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_5, u64 VAR_6, u64 VAR_7)
{
 struct gfs2_inode *VAR_8 = FUNC_0(VAR_5);
 struct gfs2_sbd *VAR_9 = FUNC_1(VAR_5);
 struct address_space *VAR_10 = VAR_5->i_mapping;
 struct buffer_head *VAR_11;
 int VAR_12 = FUNC_6(VAR_8);
 int VAR_13;

 if (VAR_12)
  VAR_13 = FUNC_11(VAR_9, VAR_3 + VAR_4, VAR_2);
 else
  VAR_13 = FUNC_11(VAR_9, VAR_3, 0);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_9(VAR_8, &VAR_11);
 if (VAR_13)
  goto out;

 FUNC_10(VAR_8->i_gl, VAR_11);

 if (FUNC_7(VAR_8)) {
  FUNC_4(VAR_11, sizeof(struct gfs2_dinode) + VAR_7);
 } else {
  if (VAR_7 & (u64)(VAR_9->sd_sb.sb_bsize - 1)) {
   VAR_13 = FUNC_3(VAR_10, VAR_7);
   if (VAR_13)
    goto out_brelse;
  }
  VAR_8->i_diskflags |= VAR_1;
 }

 FUNC_13(VAR_5, VAR_7);
 VAR_8->i_inode.i_mtime = VAR_8->i_inode.i_ctime = VAR_0;
 FUNC_5(VAR_8, VAR_11->b_data);

 if (VAR_12)
  VAR_13 = FUNC_8(VAR_5, VAR_6, VAR_7);
 else
  FUNC_14(VAR_5, VAR_6, VAR_7);

 if (VAR_13) {
  FUNC_2(VAR_11);
  return VAR_13;
 }

out_brelse:
 FUNC_2(VAR_11);
out:
 FUNC_12(VAR_9);
 return VAR_13;
}
