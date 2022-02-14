
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {int dummy; } ;
struct jffs2_raw_inode {int dummy; } ;
struct jffs2_inode_info {int sem; struct jffs2_inode_cache* inocache; } ;
struct jffs2_inode_cache {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct jffs2_sb_info*,struct jffs2_inode_info*) ;
 int FUNC_1 (struct jffs2_sb_info*,struct jffs2_inode_info*,struct jffs2_raw_inode*) ;
 int FUNC_2 (struct jffs2_inode_info*) ;
 struct jffs2_inode_info* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct jffs2_sb_info *VAR_2, struct jffs2_inode_cache *VAR_3)
{
 struct jffs2_raw_inode VAR_4;
 struct jffs2_inode_info *VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 int VAR_6;

 if (!VAR_5)
  return -VAR_0;

 FUNC_4(&VAR_5->sem);
 FUNC_5(&VAR_5->sem);
 VAR_5->inocache = VAR_3;

 VAR_6 = FUNC_1(VAR_2, VAR_5, &VAR_4);
 if (!VAR_6) {
  FUNC_6(&VAR_5->sem);
  FUNC_0(VAR_2, VAR_5);
 }
 FUNC_2 (VAR_5);
 return VAR_6;
}
