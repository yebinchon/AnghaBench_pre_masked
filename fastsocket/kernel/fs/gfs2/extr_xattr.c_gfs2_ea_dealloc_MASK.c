
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int i_diskflags; int i_inode; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct gfs2_inode*) ;
 int FUNC_2 (struct gfs2_inode*) ;
 int VAR_2 ;
 int FUNC_3 (struct gfs2_inode*,int ,int *) ;
 int FUNC_4 (struct gfs2_inode*,int ,int ) ;
 int FUNC_5 (struct gfs2_inode*) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct gfs2_inode *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_6(FUNC_0(&VAR_3->i_inode));
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_4(VAR_3, VAR_1, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_3, VAR_2, ((void*)0));
 if (VAR_4)
  goto out_quota;

 if (VAR_3->i_diskflags & VAR_0) {
  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4)
   goto out_quota;
 }

 VAR_4 = FUNC_1(VAR_3);

out_quota:
 FUNC_5(VAR_3);
 return VAR_4;
}
