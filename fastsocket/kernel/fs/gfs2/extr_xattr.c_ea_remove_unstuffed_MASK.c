
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int i_inode; } ;
struct gfs2_ea_header {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct gfs2_inode*,struct buffer_head*,struct gfs2_ea_header*,struct gfs2_ea_header*,int*) ;
 int FUNC_2 (struct gfs2_inode*,int ,int ) ;
 int FUNC_3 (struct gfs2_inode*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct gfs2_inode *VAR_1, struct buffer_head *VAR_2,
          struct gfs2_ea_header *VAR_3,
          struct gfs2_ea_header *VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_4(FUNC_0(&VAR_1->i_inode));
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_0, VAR_0);
 if (VAR_6)
  goto out_alloc;

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, (VAR_5) ? &VAR_6 : ((void*)0));

 FUNC_3(VAR_1);
out_alloc:
 return VAR_6;
}
