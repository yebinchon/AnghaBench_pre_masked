
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
struct address_space {int host; } ;


 struct gfs2_inode* FUNC_0 (int ) ;
 struct gfs2_sbd* FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct gfs2_sbd*,int ) ;
 int FUNC_3 (struct address_space*,struct writeback_control*) ;

__attribute__((used)) static int FUNC_4(struct address_space *VAR_1,
     struct writeback_control *VAR_2)
{
 struct gfs2_inode *VAR_3 = FUNC_0(VAR_1->host);
 struct gfs2_sbd *VAR_4 = FUNC_1(VAR_1->host);
 int VAR_5;

 VAR_5 = FUNC_3(VAR_1, VAR_2);
 if (VAR_5 == 0 && VAR_2->sync_mode == VAR_0) {
  FUNC_2(VAR_4, VAR_3->i_gl);
  VAR_5 = FUNC_3(VAR_1, VAR_2);
 }
 return VAR_5;
}
