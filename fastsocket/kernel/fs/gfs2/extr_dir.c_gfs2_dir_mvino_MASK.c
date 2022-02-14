
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {int dummy; } ;
struct TYPE_2__ {int i_ctime; int i_mtime; } ;
struct gfs2_inode {int i_diskflags; TYPE_1__ i_inode; int i_gl; } ;
struct gfs2_dirent {int de_type; } ;
struct buffer_head {int b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct gfs2_dirent*) ;
 int FUNC_1 (struct gfs2_dirent*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct gfs2_inode*) ;
 int FUNC_5 (struct gfs2_inode*,int ) ;
 int VAR_3 ;
 struct gfs2_dirent* FUNC_6 (TYPE_1__*,struct qstr const*,int ,struct buffer_head**) ;
 int FUNC_7 (struct gfs2_inode const*,struct gfs2_dirent*) ;
 int FUNC_8 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_9 (int ,struct buffer_head*) ;

int FUNC_10(struct gfs2_inode *VAR_4, const struct qstr *VAR_5,
     const struct gfs2_inode *VAR_6, unsigned int VAR_7)
{
 struct buffer_head *VAR_8;
 struct gfs2_dirent *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_6(&VAR_4->i_inode, VAR_5, VAR_3, &VAR_8);
 if (!VAR_9) {
  FUNC_4(VAR_4);
  return -VAR_1;
 }
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 FUNC_9(VAR_4->i_gl, VAR_8);
 FUNC_7(VAR_6, VAR_9);
 VAR_9->de_type = FUNC_3(VAR_7);

 if (VAR_4->i_diskflags & VAR_2) {
  FUNC_2(VAR_8);
  VAR_10 = FUNC_8(VAR_4, &VAR_8);
  if (VAR_10)
   return VAR_10;
  FUNC_9(VAR_4->i_gl, VAR_8);
 }

 VAR_4->i_inode.i_mtime = VAR_4->i_inode.i_ctime = VAR_0;
 FUNC_5(VAR_4, VAR_8->b_data);
 FUNC_2(VAR_8);
 return 0;
}
