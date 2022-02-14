
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad_buffer_head {int dummy; } ;
struct inode {int i_sb; } ;
struct hpfs_dirent {scalar_t__ down; } ;
struct dnode {scalar_t__ up; scalar_t__ root_dnode; } ;
typedef int loff_t ;
typedef int dnode_secno ;


 int FUNC_0 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_1 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_2 (struct dnode*) ;
 struct hpfs_dirent* FUNC_3 (struct dnode*) ;
 int FUNC_4 (struct quad_buffer_head*) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*,int,...) ;
 struct dnode* FUNC_7 (int ,scalar_t__,struct quad_buffer_head*) ;
 struct hpfs_dirent* FUNC_8 (int ,int,int,struct quad_buffer_head*,struct dnode**) ;

struct hpfs_dirent *FUNC_9(struct inode *VAR_0, loff_t *VAR_1,
       struct quad_buffer_head *VAR_2)
{
 loff_t VAR_3;
 unsigned VAR_4;
 dnode_secno VAR_5;
 struct hpfs_dirent *VAR_6, *VAR_7;
 struct hpfs_dirent *VAR_8;
 struct hpfs_dirent *VAR_9;
 struct dnode *VAR_10;
 struct dnode *VAR_11;
 struct quad_buffer_head VAR_12;

 VAR_3 = *VAR_1;
 VAR_5 = VAR_3 >> 6 << 2;
 VAR_3 &= 077;
 if (!(VAR_6 = FUNC_8(VAR_0->i_sb, VAR_5, VAR_3, VAR_2, &VAR_10)))
  goto bail;


 if ((VAR_7 = FUNC_1(VAR_6)) < FUNC_2(VAR_10)) {
  if (!(++*VAR_1 & 077)) {
   FUNC_6(VAR_0->i_sb,
    "map_pos_dirent: pos crossed dnode boundary; pos = %08llx",
    (unsigned long long)*VAR_1);
   goto bail;
  }

  if (VAR_7->down) {
   *VAR_1 = ((loff_t) FUNC_5(VAR_0->i_sb, FUNC_0(VAR_7)) << 4) + 1;
  }

  return VAR_6;
 }


 if (VAR_10->root_dnode) goto bail;

 if (!(VAR_11 = FUNC_7(VAR_0->i_sb, VAR_10->up, &VAR_12)))
  goto bail;

 VAR_9 = FUNC_2(VAR_11);
 VAR_4 = 0;
 for (VAR_8 = FUNC_3(VAR_11); VAR_8 < VAR_9;
      VAR_8 = FUNC_1(VAR_8)) {
  if (!(++VAR_4 & 077)) FUNC_6(VAR_0->i_sb,
   "map_pos_dirent: pos crossed dnode boundary; dnode = %08x", VAR_10->up);
  if (VAR_8->down && FUNC_0(VAR_8) == VAR_5) {
   *VAR_1 = ((loff_t) VAR_10->up << 4) + VAR_4;
   FUNC_4(&VAR_12);
   return VAR_6;
  }
 }

 FUNC_6(VAR_0->i_sb, "map_pos_dirent: pointer to dnode %08x not found in parent dnode %08x",
  VAR_5, VAR_10->up);
 FUNC_4(&VAR_12);

 bail:
 *VAR_1 = 12;
 return VAR_6;
}
