
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int i_inode; int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct gfs2_inode*) ;
 int FUNC_2 (struct gfs2_holder*) ;
 int FUNC_3 (struct gfs2_holder*) ;
 int FUNC_4 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_5 (struct gfs2_holder*) ;
 int FUNC_6 (struct gfs2_inode*,struct buffer_head**) ;
 scalar_t__ FUNC_7 (int *) ;
 char* FUNC_8 (unsigned int,int ) ;
 int FUNC_9 (char*,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct gfs2_inode *VAR_4, char **VAR_5, unsigned int *VAR_6)
{
 struct gfs2_holder VAR_7;
 struct buffer_head *VAR_8;
 unsigned int VAR_9, VAR_10;
 int VAR_11;

 FUNC_4(VAR_4->i_gl, VAR_3, 0, &VAR_7);
 VAR_11 = FUNC_3(&VAR_7);
 if (VAR_11) {
  FUNC_5(&VAR_7);
  return VAR_11;
 }

 VAR_10 = (unsigned int)FUNC_7(&VAR_4->i_inode);
 if (VAR_10 == 0) {
  FUNC_1(VAR_4);
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_11 = FUNC_6(VAR_4, &VAR_8);
 if (VAR_11)
  goto out;

 VAR_9 = VAR_10 + 1;
 if (VAR_9 > *VAR_6) {
  *VAR_5 = FUNC_8(VAR_9, VAR_2);
  if (!*VAR_5) {
   VAR_11 = -VAR_1;
   goto out_brelse;
  }
 }

 FUNC_9(*VAR_5, VAR_8->b_data + sizeof(struct gfs2_dinode), VAR_9);
 *VAR_6 = VAR_9;

out_brelse:
 FUNC_0(VAR_8);
out:
 FUNC_2(&VAR_7);
 return VAR_11;
}
