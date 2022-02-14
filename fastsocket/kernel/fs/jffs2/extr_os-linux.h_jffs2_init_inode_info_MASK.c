
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_inode_info {scalar_t__ usercompr; scalar_t__ flags; int * target; int * dents; int * metadata; int fragtree; scalar_t__ highest_version; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct jffs2_inode_info *VAR_1)
{
 VAR_1->highest_version = 0;
 VAR_1->fragtree = VAR_0;
 VAR_1->metadata = ((void*)0);
 VAR_1->dents = ((void*)0);
 VAR_1->target = ((void*)0);
 VAR_1->flags = 0;
 VAR_1->usercompr = 0;
}
