
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {struct gfs2_glock* i_gl; int i_inode; } ;
struct gfs2_glock {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gfs2_sbd* FUNC_0 (int *) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct gfs2_glock*,int ,int ,struct buffer_head**) ;
 scalar_t__ FUNC_3 (struct gfs2_sbd*,struct buffer_head*,int ) ;

int FUNC_4(struct gfs2_inode *VAR_4, int VAR_5, u64 VAR_6,
         struct buffer_head **VAR_7)
{
 struct gfs2_sbd *VAR_8 = FUNC_0(&VAR_4->i_inode);
 struct gfs2_glock *VAR_9 = VAR_4->i_gl;
 struct buffer_head *VAR_10;
 int VAR_11 = 0;
 u32 VAR_12 = VAR_5 ? VAR_3 : VAR_2;

 VAR_11 = FUNC_2(VAR_9, VAR_6, VAR_0, &VAR_10);
 if (VAR_11 == 0 && FUNC_3(VAR_8, VAR_10, VAR_12)) {
  FUNC_1(VAR_10);
  VAR_11 = -VAR_1;
 }
 *VAR_7 = VAR_10;
 return VAR_11;
}
