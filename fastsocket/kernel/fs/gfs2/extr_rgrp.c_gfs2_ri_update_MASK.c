
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mapping; } ;
struct gfs2_sbd {int sd_rindex_uptodate; } ;
struct gfs2_inode {struct inode i_inode; } ;
struct file_ra_state {int dummy; } ;


 struct gfs2_sbd* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct file_ra_state*,int ) ;
 int FUNC_2 (struct gfs2_inode*,struct file_ra_state*) ;

__attribute__((used)) static int FUNC_3(struct gfs2_inode *VAR_0)
{
 struct gfs2_sbd *VAR_1 = FUNC_0(&VAR_0->i_inode);
 struct inode *VAR_2 = &VAR_0->i_inode;
 struct file_ra_state VAR_3;
 int VAR_4;

 FUNC_1(&VAR_3, VAR_2->i_mapping);
 do {
  VAR_4 = FUNC_2(VAR_0, &VAR_3);
 } while (VAR_4 == 0);

 if (VAR_4 < 0)
  return VAR_4;

 VAR_1->sd_rindex_uptodate = 1;
 return 0;
}
