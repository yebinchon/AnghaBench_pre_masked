
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct inode {scalar_t__ i_uid; scalar_t__ i_gid; } ;
struct iattr {scalar_t__ ia_uid; scalar_t__ ia_gid; int ia_valid; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {int i_inode; int i_gl; } ;
struct buffer_head {int b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct gfs2_sbd*,int) ;
 int FUNC_4 (struct gfs2_inode*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_7 (struct gfs2_inode*,int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct gfs2_inode*,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct gfs2_inode*,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct gfs2_inode*) ;
 int FUNC_11 (struct gfs2_sbd*) ;
 int FUNC_12 (int ,struct buffer_head*) ;
 int FUNC_13 (struct gfs2_sbd*,scalar_t__,int ) ;
 int FUNC_14 (struct gfs2_sbd*) ;
 int FUNC_15 (struct inode*,struct iattr*) ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_5, struct iattr *VAR_6)
{
 struct gfs2_inode *VAR_7 = FUNC_0(VAR_5);
 struct gfs2_sbd *VAR_8 = FUNC_1(VAR_5);
 struct buffer_head *VAR_9;
 u32 VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14;

 VAR_10 = VAR_5->i_uid;
 VAR_11 = VAR_5->i_gid;
 VAR_12 = VAR_6->ia_uid;
 VAR_13 = VAR_6->ia_gid;

 if (!(VAR_6->ia_valid & VAR_1) || VAR_10 == VAR_12)
  VAR_10 = VAR_12 = VAR_2;
 if (!(VAR_6->ia_valid & VAR_0) || VAR_11 == VAR_13)
  VAR_11 = VAR_13 = VAR_2;

 VAR_14 = FUNC_11(VAR_8);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_9(VAR_7, VAR_12, VAR_13);
 if (VAR_14)
  return VAR_14;

 if (VAR_10 != VAR_2 || VAR_11 != VAR_2) {
  VAR_14 = FUNC_8(VAR_7, VAR_12, VAR_13);
  if (VAR_14)
   goto out_gunlock_q;
 }

 VAR_14 = FUNC_13(VAR_8, VAR_3 + 2 * VAR_4, 0);
 if (VAR_14)
  goto out_gunlock_q;

 VAR_14 = FUNC_6(VAR_7, &VAR_9);
 if (VAR_14)
  goto out_end_trans;

 VAR_14 = FUNC_15(VAR_5, VAR_6);
 FUNC_3(VAR_8, !VAR_14);

 FUNC_12(VAR_7->i_gl, VAR_9);
 FUNC_4(VAR_7, VAR_9->b_data);
 FUNC_2(VAR_9);

 if (VAR_10 != VAR_2 || VAR_11 != VAR_2) {
  u64 VAR_15 = FUNC_5(&VAR_7->i_inode);
  FUNC_7(VAR_7, -VAR_15, VAR_10, VAR_11);
  FUNC_7(VAR_7, VAR_15, VAR_12, VAR_13);
 }

out_end_trans:
 FUNC_14(VAR_8);
out_gunlock_q:
 FUNC_10(VAR_7);
 return VAR_14;
}
