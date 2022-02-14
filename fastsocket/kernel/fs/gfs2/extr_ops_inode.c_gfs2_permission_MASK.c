
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct inode*,int,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct gfs2_holder*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,struct gfs2_holder*) ;

int FUNC_6(struct inode *VAR_5, int VAR_6)
{
 struct gfs2_inode *VAR_7 = FUNC_0(VAR_5);
 struct gfs2_holder VAR_8;
 int VAR_9;
 int VAR_10 = 0;

 if (FUNC_4(VAR_7->i_gl) == ((void*)0)) {
  VAR_9 = FUNC_5(VAR_7->i_gl, VAR_2, VAR_1, &VAR_8);
  if (VAR_9)
   return VAR_9;
  VAR_10 = 1;
 }

 if ((VAR_6 & VAR_3) && FUNC_1(VAR_5))
  VAR_9 = -VAR_0;
 else
  VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_4);
 if (VAR_10)
  FUNC_3(&VAR_8);

 return VAR_9;
}
