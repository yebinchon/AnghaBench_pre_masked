
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jffs2_sb_info {int sector_size; int dirty_size; int wasted_size; int nr_erasing_blocks; int erase_pending_list; int bad_used_list; struct jffs2_eraseblock* nextblock; } ;
struct jffs2_eraseblock {int offset; int free_size; int dirty_size; int wasted_size; int list; scalar_t__ first_node; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct jffs2_sb_info*,struct jffs2_eraseblock*) ;
 int FUNC_3 (struct jffs2_sb_info*,struct jffs2_eraseblock*) ;
 int FUNC_4 (struct jffs2_sb_info*) ;
 int FUNC_5 (struct jffs2_sb_info*) ;
 int FUNC_6 (struct jffs2_sb_info*,struct jffs2_eraseblock*,int,int,int *) ;
 int FUNC_7 (struct jffs2_sb_info*,struct jffs2_eraseblock*,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int) ;

__attribute__((used)) static void FUNC_11(struct jffs2_sb_info *VAR_2, struct jffs2_eraseblock *VAR_3, int VAR_4)
{
 FUNC_1(FUNC_10("About to refile bad block at %08x\n", VAR_3->offset));


 if (VAR_2->nextblock == VAR_3)
  VAR_2->nextblock = ((void*)0);
 else
  FUNC_9(&VAR_3->list);
 if (VAR_3->first_node) {
  FUNC_1(FUNC_10("Refiling block at %08x to bad_used_list\n", VAR_3->offset));
  FUNC_8(&VAR_3->list, &VAR_2->bad_used_list);
 } else {
  FUNC_0(VAR_4 == VAR_0);

  FUNC_1(FUNC_10("Refiling block at %08x to erase_pending_list\n", VAR_3->offset));
  FUNC_8(&VAR_3->list, &VAR_2->erase_pending_list);
  VAR_2->nr_erasing_blocks++;
  FUNC_5(VAR_2);
 }

 if (!FUNC_7(VAR_2, VAR_3, 1)) {
  uint32_t VAR_5 = VAR_3->free_size;

  FUNC_6(VAR_2, VAR_3,
        (VAR_3->offset+VAR_2->sector_size-VAR_5) | VAR_1,
        VAR_5, ((void*)0));

  VAR_2->wasted_size += VAR_5;
  VAR_3->wasted_size += VAR_5;
  VAR_2->dirty_size -= VAR_5;
  VAR_3->dirty_size -= VAR_5;
 }

 FUNC_4(VAR_2);
 FUNC_3(VAR_2,VAR_3);
 FUNC_2(VAR_2, VAR_3);
}
