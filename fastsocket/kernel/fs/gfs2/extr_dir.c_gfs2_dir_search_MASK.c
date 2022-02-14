
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {int no_formal_ino; int no_addr; } ;
struct gfs2_dirent {TYPE_1__ de_inum; int de_type; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct gfs2_dirent*) ;
 struct inode* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct gfs2_dirent*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct buffer_head*) ;
 int VAR_1 ;
 struct gfs2_dirent* FUNC_6 (struct inode*,struct qstr const*,int ,struct buffer_head**) ;
 struct inode* FUNC_7 (int ,int ,int ,int ,int ) ;

struct inode *FUNC_8(struct inode *VAR_2, const struct qstr *VAR_3)
{
 struct buffer_head *VAR_4;
 struct gfs2_dirent *VAR_5;
 struct inode *VAR_6;

 VAR_5 = FUNC_6(VAR_2, VAR_3, VAR_1, &VAR_4);
 if (VAR_5) {
  if (FUNC_2(VAR_5))
   return FUNC_0(VAR_5);
  VAR_6 = FUNC_7(VAR_2->i_sb,
    FUNC_3(VAR_5->de_type),
    FUNC_4(VAR_5->de_inum.no_addr),
    FUNC_4(VAR_5->de_inum.no_formal_ino), 0);
  FUNC_5(VAR_4);
  return VAR_6;
 }
 return FUNC_1(-VAR_0);
}
