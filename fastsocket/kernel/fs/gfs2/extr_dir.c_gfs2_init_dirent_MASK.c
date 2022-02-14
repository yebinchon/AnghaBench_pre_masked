
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {unsigned int len; } ;
struct inode {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_dirent {int de_rec_len; int de_name_len; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (unsigned int) ;
 struct gfs2_inode* FUNC_2 (struct inode*) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct gfs2_dirent*) ;
 int FUNC_6 (struct qstr const*,unsigned int,struct gfs2_dirent*) ;
 int FUNC_7 (int ,struct buffer_head*) ;

__attribute__((used)) static struct gfs2_dirent *FUNC_8(struct inode *VAR_0,
         struct gfs2_dirent *VAR_1,
         const struct qstr *VAR_2,
         struct buffer_head *VAR_3)
{
 struct gfs2_inode *VAR_4 = FUNC_2(VAR_0);
 struct gfs2_dirent *VAR_5;
 unsigned VAR_6 = 0, VAR_7;

 if (!FUNC_5(VAR_1))
  VAR_6 = FUNC_1(FUNC_3(VAR_1->de_name_len));
 VAR_7 = FUNC_3(VAR_1->de_rec_len);
 FUNC_0(VAR_6 + VAR_2->len > VAR_7);
 FUNC_7(VAR_4->i_gl, VAR_3);
 VAR_5 = (struct gfs2_dirent *)((char *)VAR_1 + VAR_6);
 VAR_1->de_rec_len = FUNC_4(VAR_6);
 FUNC_6(VAR_2, VAR_7 - VAR_6, VAR_5);
 return VAR_5;
}
