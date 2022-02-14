
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int dummy; } ;
struct gfs2_ea_location {int dummy; } ;
struct ea_find {int type; char const* name; struct gfs2_ea_location* ef_el; int namel; } ;


 int VAR_0 ;
 int FUNC_0 (struct gfs2_inode*,int ,struct ea_find*) ;
 int FUNC_1 (struct gfs2_ea_location*,int ,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(struct gfs2_inode *VAR_1, int VAR_2, const char *VAR_3,
   struct gfs2_ea_location *VAR_4)
{
 struct ea_find VAR_5;
 int VAR_6;

 VAR_5.type = VAR_2;
 VAR_5.name = VAR_3;
 VAR_5.namel = FUNC_2(VAR_3);
 VAR_5.ef_el = VAR_4;

 FUNC_1(VAR_4, 0, sizeof(struct gfs2_ea_location));

 VAR_6 = FUNC_0(VAR_1, VAR_0, &VAR_5);
 if (VAR_6 > 0)
  return 0;

 return VAR_6;
}
