
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int sb_bsize; } ;
struct gfs2_sbd {TYPE_1__ sd_sb; } ;
struct gfs2_dinode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct gfs2_sbd* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*,struct dentry*,int,int ,char const*,int,int ) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_3, struct dentry *VAR_4,
   const char *VAR_5)
{
 struct gfs2_sbd *VAR_6 = FUNC_0(VAR_3);
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7 > VAR_6->sd_sb.sb_bsize - sizeof(struct gfs2_dinode) - 1)
  return -VAR_0;

 return FUNC_1(VAR_3, VAR_4, VAR_1 | VAR_2, 0, VAR_5, VAR_7, 0);
}
