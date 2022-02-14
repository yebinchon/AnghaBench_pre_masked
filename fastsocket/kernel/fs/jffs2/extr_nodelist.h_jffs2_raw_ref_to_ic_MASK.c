
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_raw_node_ref {struct jffs2_raw_node_ref* next_in_ino; } ;
struct jffs2_inode_cache {int dummy; } ;



__attribute__((used)) static inline struct jffs2_inode_cache *FUNC_0(struct jffs2_raw_node_ref *VAR_0)
{
 while(VAR_0->next_in_ino)
  VAR_0 = VAR_0->next_in_ino;



 return ((struct jffs2_inode_cache *)VAR_0);
}
