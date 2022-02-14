
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int dummy; } ;
struct gfs2_ea_location {int el_ea; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct gfs2_inode*,int ,char*) ;
 int FUNC_4 (char*,int ,size_t) ;

__attribute__((used)) static int FUNC_5(struct gfs2_inode *VAR_1, struct gfs2_ea_location *VAR_2,
       char *VAR_3, size_t VAR_4)
{
 int VAR_5;
 size_t VAR_6 = FUNC_1(VAR_2->el_ea);
 if (VAR_6 > VAR_4)
  return -VAR_0;

 if (FUNC_2(VAR_2->el_ea)) {
  FUNC_4(VAR_3, FUNC_0(VAR_2->el_ea), VAR_6);
  return VAR_6;
 }
 VAR_5 = FUNC_3(VAR_1, VAR_2->el_ea, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;
 return VAR_6;
}
