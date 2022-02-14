
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int dummy; } ;
struct gfs2_ea_location {int el_bh; int el_ea; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gfs2_inode*,int ,char const*,struct gfs2_ea_location*) ;
 int FUNC_3 (struct gfs2_inode*,struct gfs2_ea_location*,char*,int) ;
 char* FUNC_4 (int,int ) ;

int FUNC_5(struct gfs2_inode *VAR_3, const char *VAR_4, char **VAR_5)
{
 struct gfs2_ea_location VAR_6;
 int VAR_7;
 int VAR_8;
 char *VAR_9;

 VAR_7 = FUNC_2(VAR_3, VAR_2, VAR_4, &VAR_6);
 if (VAR_7)
  return VAR_7;
 if (!VAR_6.el_ea)
  goto out;
 if (!FUNC_0(VAR_6.el_ea))
  goto out;

 VAR_8 = FUNC_0(VAR_6.el_ea);
 VAR_9 = FUNC_4(VAR_8, VAR_1);
 VAR_7 = -VAR_0;
 if (VAR_9 == ((void*)0))
  goto out;

 VAR_7 = FUNC_3(VAR_3, &VAR_6, VAR_9, VAR_8);
 if (VAR_7 == 0)
  VAR_7 = VAR_8;
 *VAR_5 = VAR_9;
out:
 FUNC_1(VAR_6.el_bh);
 return VAR_7;
}
