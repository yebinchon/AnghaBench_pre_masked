
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jffs2_sb_info {int sector_size; } ;
struct jffs2_raw_node_ref {int dummy; } ;
struct jffs2_inode_cache {int dummy; } ;
struct jffs2_eraseblock {int free_size; scalar_t__ offset; } ;


 struct jffs2_raw_node_ref* FUNC_0 (struct jffs2_sb_info*,struct jffs2_eraseblock*,scalar_t__,int,struct jffs2_inode_cache*) ;
 int FUNC_1 (struct jffs2_sb_info*,struct jffs2_eraseblock*,int) ;

__attribute__((used)) static struct jffs2_raw_node_ref *FUNC_2(struct jffs2_sb_info *VAR_0,
          struct jffs2_eraseblock *VAR_1,
          uint32_t VAR_2, uint32_t VAR_3,
          struct jffs2_inode_cache *VAR_4)
{

 if ((VAR_2 & ~3) > VAR_0->sector_size - VAR_1->free_size) {

  FUNC_1(VAR_0, VAR_1, (VAR_2 & ~3) - (VAR_0->sector_size - VAR_1->free_size));
 }

 return FUNC_0(VAR_0, VAR_1, VAR_1->offset + VAR_2, VAR_3, VAR_4);
}
