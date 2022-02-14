
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {struct jffs2_inode_cache** inocache_list; } ;
struct jffs2_inode_cache {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static inline struct jffs2_inode_cache *
FUNC_0(int *VAR_1, struct jffs2_sb_info *VAR_2)
{
 for (; *VAR_1 < VAR_0; (*VAR_1)++) {
  if (VAR_2->inocache_list[*VAR_1])
   return VAR_2->inocache_list[*VAR_1];
 }
 return ((void*)0);
}
