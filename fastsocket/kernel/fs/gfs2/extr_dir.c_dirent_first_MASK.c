
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_meta_header {int mh_type; } ;
struct gfs2_leaf {int dummy; } ;
struct gfs2_inode {int i_inode; } ;
struct gfs2_dirent {int dummy; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,struct buffer_head*) ;
 scalar_t__ FUNC_3 (int ,struct buffer_head*,int ) ;

__attribute__((used)) static int FUNC_4(struct gfs2_inode *VAR_5, struct buffer_head *VAR_6,
   struct gfs2_dirent **VAR_7)
{
 struct gfs2_meta_header *VAR_8 = (struct gfs2_meta_header *)VAR_6->b_data;

 if (FUNC_1(VAR_8->mh_type) == VAR_2) {
  if (FUNC_2(FUNC_0(&VAR_5->i_inode), VAR_6))
   return -VAR_0;
  *VAR_7 = (struct gfs2_dirent *)(VAR_6->b_data +
            sizeof(struct gfs2_leaf));
  return VAR_4;
 } else {
  if (FUNC_3(FUNC_0(&VAR_5->i_inode), VAR_6, VAR_1))
   return -VAR_0;
  *VAR_7 = (struct gfs2_dirent *)(VAR_6->b_data +
            sizeof(struct gfs2_dinode));
  return VAR_3;
 }
}
