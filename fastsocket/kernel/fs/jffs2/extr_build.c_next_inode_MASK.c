
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {int dummy; } ;
struct jffs2_inode_cache {struct jffs2_inode_cache* next; } ;


 struct jffs2_inode_cache* FUNC_0 (int*,struct jffs2_sb_info*) ;

__attribute__((used)) static inline struct jffs2_inode_cache *
FUNC_1(int *VAR_0, struct jffs2_inode_cache *VAR_1, struct jffs2_sb_info *VAR_2)
{

 if (VAR_1->next)
  return VAR_1->next;
 (*VAR_0)++;
 return FUNC_0(VAR_0, VAR_2);
}
