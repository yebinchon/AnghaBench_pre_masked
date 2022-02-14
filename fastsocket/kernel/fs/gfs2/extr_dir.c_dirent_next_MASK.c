
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int dummy; } ;
struct gfs2_dirent {int dummy; } ;
struct buffer_head {char* b_data; int b_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct gfs2_inode*,struct gfs2_dirent*,char*) ;
 int FUNC_1 (struct gfs2_inode*) ;
 scalar_t__ FUNC_2 (struct gfs2_dirent*) ;

__attribute__((used)) static int FUNC_3(struct gfs2_inode *VAR_1, struct buffer_head *VAR_2,
         struct gfs2_dirent **VAR_3)
{
 struct gfs2_dirent *VAR_4 = *VAR_3, *VAR_5;
 char *VAR_6 = VAR_2->b_data + VAR_2->b_size;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_4, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_5 = (void *)VAR_4 + VAR_7;
 VAR_7 = FUNC_0(VAR_1, VAR_5, VAR_6);
 if (VAR_7 == -VAR_0)
  return VAR_7;


 if (FUNC_2(VAR_5)) {
  FUNC_1(VAR_1);
  return -VAR_0;
 }

 *VAR_3 = VAR_5;
 return 0;
}
