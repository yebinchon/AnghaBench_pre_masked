
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_xattr_datum {int flags; scalar_t__ xname; } ;
struct jffs2_sb_info {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct jffs2_sb_info*,struct jffs2_xattr_datum*) ;
 int FUNC_2 (struct jffs2_sb_info*,struct jffs2_xattr_datum*) ;
 int FUNC_3 (struct jffs2_sb_info*,struct jffs2_xattr_datum*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct jffs2_sb_info *VAR_3, struct jffs2_xattr_datum *VAR_4)
{





 int VAR_5 = 0;

 FUNC_0(VAR_4->flags & VAR_1);
 if (VAR_4->xname)
  return 0;
 if (VAR_4->flags & VAR_2)
  return VAR_0;
 if (FUNC_4(FUNC_3(VAR_3, VAR_4)))
  VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (!VAR_5)
  VAR_5 = FUNC_1(VAR_3, VAR_4);
 return VAR_5;
}
