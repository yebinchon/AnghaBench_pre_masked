
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; } ;
struct inode {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
struct backing_dev_info {scalar_t__ dirty_exceeded; } ;
struct address_space {struct backing_dev_info* backing_dev_info; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct address_space*) ;
 int FUNC_3 (struct address_space*) ;
 int FUNC_4 (struct gfs2_sbd*,struct writeback_control*) ;
 struct address_space* FUNC_5 (int ) ;
 int FUNC_6 (struct gfs2_sbd*,int ) ;
 int FUNC_7 (struct inode*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_1, struct writeback_control *VAR_2)
{
 struct gfs2_inode *VAR_3 = FUNC_0(VAR_1);
 struct gfs2_sbd *VAR_4 = FUNC_1(VAR_1);
 struct address_space *VAR_5 = FUNC_5(VAR_3->i_gl);
 struct backing_dev_info *VAR_6 = VAR_5->backing_dev_info;
 int VAR_7 = 0;

 if (VAR_2->sync_mode == VAR_0)
  FUNC_6(FUNC_1(VAR_1), VAR_3->i_gl);
 if (VAR_6->dirty_exceeded)
  FUNC_4(VAR_4, VAR_2);
 else
  FUNC_3(VAR_5);
 if (VAR_2->sync_mode == VAR_0)
  VAR_7 = FUNC_2(VAR_5);
 if (VAR_7)
  FUNC_7(VAR_1);
 return VAR_7;
}
