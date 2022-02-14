
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ i_nlink; int i_ctime; } ;
struct gfs2_inode {TYPE_1__ i_inode; int i_gl; } ;
struct buffer_head {int b_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct gfs2_inode*) ;
 int FUNC_4 (struct gfs2_inode*,int ) ;
 int FUNC_5 (struct gfs2_inode*) ;
 int FUNC_6 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_7 (int ,struct buffer_head*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;

int FUNC_11(struct gfs2_inode *VAR_2, int VAR_3)
{
 struct buffer_head *VAR_4;
 u32 VAR_5;
 int VAR_6;

 FUNC_0(VAR_3 != 1 && VAR_3 != -1);
 VAR_5 = VAR_2->i_inode.i_nlink + VAR_3;



 if (VAR_3 < 0 && VAR_5 > VAR_2->i_inode.i_nlink) {
  if (FUNC_3(VAR_2))
   FUNC_5(VAR_2);
  return -VAR_1;
 }

 VAR_6 = FUNC_6(VAR_2, &VAR_4);
 if (VAR_6)
  return VAR_6;

 if (VAR_3 > 0)
  FUNC_9(&VAR_2->i_inode);
 else
  FUNC_2(&VAR_2->i_inode);

 VAR_2->i_inode.i_ctime = VAR_0;

 FUNC_7(VAR_2->i_gl, VAR_4);
 FUNC_4(VAR_2, VAR_4->b_data);
 FUNC_1(VAR_4);
 FUNC_10(&VAR_2->i_inode);

 if (VAR_2->i_inode.i_nlink == 0)
  FUNC_8(&VAR_2->i_inode);

 return VAR_6;
}
