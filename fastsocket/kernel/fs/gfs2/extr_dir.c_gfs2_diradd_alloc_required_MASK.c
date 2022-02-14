
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct inode {int dummy; } ;
struct gfs2_dirent {int dummy; } ;
struct buffer_head {int dummy; } ;


 scalar_t__ FUNC_0 (struct gfs2_dirent*) ;
 int FUNC_1 (struct gfs2_dirent*) ;
 int FUNC_2 (struct buffer_head*) ;
 int VAR_0 ;
 struct gfs2_dirent* FUNC_3 (struct inode*,struct qstr const*,int ,struct buffer_head**) ;

int FUNC_4(struct inode *VAR_1, const struct qstr *VAR_2)
{
 struct gfs2_dirent *VAR_3;
 struct buffer_head *VAR_4;

 VAR_3 = FUNC_3(VAR_1, VAR_2, VAR_0, &VAR_4);
 if (!VAR_3) {
  return 1;
 }
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);
 FUNC_2(VAR_4);
 return 0;
}
