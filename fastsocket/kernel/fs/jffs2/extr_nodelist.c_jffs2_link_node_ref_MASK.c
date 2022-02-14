
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct jffs2_sb_info {scalar_t__ sector_size; int free_size; int dirty_size; int used_size; int unchecked_size; } ;
struct jffs2_raw_node_ref {scalar_t__ flash_offset; scalar_t__ __totlen; struct jffs2_raw_node_ref* next_in_ino; } ;
struct jffs2_inode_cache {struct jffs2_raw_node_ref* nodes; } ;
struct jffs2_eraseblock {scalar_t__ offset; scalar_t__ free_size; int dirty_size; int used_size; int unchecked_size; struct jffs2_raw_node_ref* last_node; struct jffs2_raw_node_ref* first_node; int allocated_refs; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,struct jffs2_raw_node_ref*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;




 int FUNC_3 (char*,struct jffs2_raw_node_ref*,scalar_t__,scalar_t__,...) ;
 int FUNC_4 (struct jffs2_raw_node_ref*) ;
 scalar_t__ FUNC_5 (struct jffs2_raw_node_ref*) ;
 scalar_t__ FUNC_6 (struct jffs2_sb_info*,struct jffs2_eraseblock*,struct jffs2_raw_node_ref*) ;
 scalar_t__ FUNC_7 (int) ;

struct jffs2_raw_node_ref *FUNC_8(struct jffs2_sb_info *VAR_2,
            struct jffs2_eraseblock *VAR_3,
            uint32_t VAR_4, uint32_t VAR_5,
            struct jffs2_inode_cache *VAR_6)
{
 struct jffs2_raw_node_ref *VAR_7;

 FUNC_1(!VAR_3->allocated_refs);
 VAR_3->allocated_refs--;

 VAR_7 = VAR_3->last_node;

 FUNC_3("Last node at %p is (%08x,%p)\n", VAR_7, VAR_7->flash_offset,
      VAR_7->next_in_ino);

 while (VAR_7->flash_offset != VAR_0) {
  if (VAR_7->flash_offset == VAR_1)
   VAR_7 = VAR_7->next_in_ino;
  else
   VAR_7++;
 }

 FUNC_3("New ref is %p (%08x becomes %08x,%p) len 0x%x\n", VAR_7,
      VAR_7->flash_offset, VAR_4, VAR_7->next_in_ino, VAR_5);

 VAR_7->flash_offset = VAR_4;

 if (!VAR_3->first_node) {
  VAR_3->first_node = VAR_7;
  FUNC_1(FUNC_5(VAR_7) != VAR_3->offset);
 } else if (FUNC_7(FUNC_5(VAR_7) != VAR_3->offset + VAR_2->sector_size - VAR_3->free_size)) {
  uint32_t VAR_8 = FUNC_6(VAR_2, VAR_3, VAR_3->last_node);

  FUNC_2("Adding new ref %p at (0x%08x-0x%08x) not immediately after previous (0x%08x-0x%08x)\n",
       VAR_7, FUNC_5(VAR_7), FUNC_5(VAR_7)+VAR_5,
       FUNC_5(VAR_3->last_node),
       FUNC_5(VAR_3->last_node)+VAR_8);
  FUNC_0();
 }
 VAR_3->last_node = VAR_7;

 if (VAR_6) {
  VAR_7->next_in_ino = VAR_6->nodes;
  VAR_6->nodes = VAR_7;
 } else {
  VAR_7->next_in_ino = ((void*)0);
 }

 switch(FUNC_4(VAR_7)) {
 case 128:
  VAR_2->unchecked_size += VAR_5;
  VAR_3->unchecked_size += VAR_5;
  break;

 case 131:
 case 129:
  VAR_2->used_size += VAR_5;
  VAR_3->used_size += VAR_5;
  break;

 case 130:
  VAR_2->dirty_size += VAR_5;
  VAR_3->dirty_size += VAR_5;
  break;
 }
 VAR_2->free_size -= VAR_5;
 VAR_3->free_size -= VAR_5;






 return VAR_7;
}
