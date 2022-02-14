
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct gfs2_inode {int i_inode; int i_gl; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ,int ,int ,struct buffer_head**) ;
 scalar_t__ FUNC_3 (int ,struct buffer_head*,int ) ;

__attribute__((used)) static int FUNC_4(struct gfs2_inode *VAR_3, u64 VAR_4,
     struct buffer_head **VAR_5)
{
 struct buffer_head *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3->i_gl, VAR_4, VAR_0, &VAR_6);
 if (VAR_7)
  return VAR_7;
 if (FUNC_3(FUNC_0(&VAR_3->i_inode), VAR_6, VAR_2)) {
  FUNC_1(VAR_6);
  return -VAR_1;
 }
 *VAR_5 = VAR_6;
 return 0;
}
