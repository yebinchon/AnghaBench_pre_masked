
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct gfs2_inode {int i_entries; } ;


 int VAR_0 ;
 int FUNC_0 (struct gfs2_inode*,int) ;
 scalar_t__ FUNC_1 (struct gfs2_inode*) ;
 int FUNC_2 (struct gfs2_inode*) ;
 int FUNC_3 (struct gfs2_inode*,struct qstr const*) ;
 struct qstr const VAR_1 ;
 struct qstr const VAR_2 ;

__attribute__((used)) static int FUNC_4(struct gfs2_inode *VAR_3, const struct qstr *VAR_4,
         struct gfs2_inode *VAR_5)
{
 int VAR_6;

 if (VAR_5->i_entries != 2) {
  if (FUNC_1(VAR_5))
   FUNC_2(VAR_5);
  return -VAR_0;
 }

 VAR_6 = FUNC_3(VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_3, -1);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_5, &VAR_1);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_5, &VAR_2);
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_0(VAR_5, -1);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_5, -1);
 if (VAR_6)
  return VAR_6;

 return VAR_6;
}
