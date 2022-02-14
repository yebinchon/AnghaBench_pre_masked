
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct gfs2_inode {int i_eattr; } ;
struct gfs2_ea_location {int el_bh; int el_prev; int el_ea; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct gfs2_inode* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct gfs2_inode*,struct gfs2_ea_location*) ;
 int FUNC_4 (struct gfs2_inode*,int ,int ,int ,int ) ;
 int FUNC_5 (struct gfs2_inode*,int,char const*,struct gfs2_ea_location*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_1, int VAR_2, const char *VAR_3)
{
 struct gfs2_inode *VAR_4 = FUNC_1(VAR_1);
 struct gfs2_ea_location VAR_5;
 int VAR_6;

 if (!VAR_4->i_eattr)
  return -VAR_0;

 VAR_6 = FUNC_5(VAR_4, VAR_2, VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;
 if (!VAR_5.el_ea)
  return -VAR_0;

 if (FUNC_0(VAR_5.el_ea))
  VAR_6 = FUNC_3(VAR_4, &VAR_5);
 else
  VAR_6 = FUNC_4(VAR_4, VAR_5.el_bh, VAR_5.el_ea, VAR_5.el_prev, 0);

 FUNC_2(VAR_5.el_bh);

 return VAR_6;
}
