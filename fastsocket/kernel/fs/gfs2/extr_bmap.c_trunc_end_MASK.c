
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_sbd {int dummy; } ;
struct TYPE_3__ {int i_ctime; int i_mtime; } ;
struct gfs2_inode {int i_rw_mutex; int i_gl; int i_diskflags; TYPE_1__ i_inode; int i_no_addr; int i_goal; scalar_t__ i_height; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {int b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_sbd* FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct buffer_head*,int) ;
 int FUNC_4 (struct gfs2_inode*,int ) ;
 int FUNC_5 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_6 (struct gfs2_inode*) ;
 int FUNC_7 (int ,struct buffer_head*) ;
 int FUNC_8 (struct gfs2_sbd*,int ,int ) ;
 int FUNC_9 (struct gfs2_sbd*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct gfs2_inode *VAR_3)
{
 struct gfs2_sbd *VAR_4 = FUNC_0(&VAR_3->i_inode);
 struct buffer_head *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_8(VAR_4, VAR_2, 0);
 if (VAR_6)
  return VAR_6;

 FUNC_2(&VAR_3->i_rw_mutex);

 VAR_6 = FUNC_5(VAR_3, &VAR_5);
 if (VAR_6)
  goto out;

 if (!FUNC_10(&VAR_3->i_inode)) {
  VAR_3->i_height = 0;
  VAR_3->i_goal = VAR_3->i_no_addr;
  FUNC_3(VAR_5, sizeof(struct gfs2_dinode));
  FUNC_6(VAR_3);
 }
 VAR_3->i_inode.i_mtime = VAR_3->i_inode.i_ctime = VAR_0;
 VAR_3->i_diskflags &= ~VAR_1;

 FUNC_7(VAR_3->i_gl, VAR_5);
 FUNC_4(VAR_3, VAR_5->b_data);
 FUNC_1(VAR_5);

out:
 FUNC_11(&VAR_3->i_rw_mutex);
 FUNC_9(VAR_4);
 return VAR_6;
}
