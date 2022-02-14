
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct iattr {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {int i_gl; struct inode i_inode; } ;
struct gfs2_ea_location {int el_bh; int el_ea; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 struct gfs2_sbd* FUNC_3 (struct inode*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct gfs2_inode*,int ,char*) ;
 int FUNC_6 (struct gfs2_inode*,int ,int ,struct gfs2_ea_location*) ;
 int FUNC_7 (struct inode*,struct iattr*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct gfs2_sbd*,scalar_t__,int ) ;
 int FUNC_10 (struct gfs2_sbd*) ;
 int FUNC_11 (int ,char*,int ) ;

int FUNC_12(struct gfs2_inode *VAR_4, struct iattr *VAR_5, char *VAR_6)
{
 struct inode *VAR_7 = &VAR_4->i_inode;
 struct gfs2_sbd *VAR_8 = FUNC_3(VAR_7);
 struct gfs2_ea_location VAR_9;
 int VAR_10;

 VAR_10 = FUNC_6(VAR_4, VAR_0, VAR_1, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (FUNC_2(VAR_9.el_ea)) {
  VAR_10 = FUNC_9(VAR_8, VAR_2 + VAR_3, 0);
  if (VAR_10 == 0) {
   FUNC_8(VAR_4->i_gl, VAR_9.el_bh);
   FUNC_11(FUNC_0(VAR_9.el_ea), VAR_6,
          FUNC_1(VAR_9.el_ea));
  }
 } else {
  VAR_10 = FUNC_5(VAR_4, VAR_9.el_ea, VAR_6);
 }

 FUNC_4(VAR_9.el_bh);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_7(VAR_7, VAR_5);
 FUNC_10(VAR_8);
 return VAR_10;
}
