
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {int dirty_list; int very_dirty_list; int wasted_size; int dirty_size; } ;
struct jffs2_eraseblock {int list; int dirty_size; scalar_t__ wasted_size; int free_size; } ;


 scalar_t__ FUNC_0 (struct jffs2_sb_info*,int ) ;
 int FUNC_1 (struct jffs2_sb_info*,struct jffs2_eraseblock*,int) ;
 int FUNC_2 (struct jffs2_sb_info*,struct jffs2_eraseblock*,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct jffs2_sb_info *VAR_0, struct jffs2_eraseblock *VAR_1)
{
 int VAR_2;

 if ((VAR_2 = FUNC_1(VAR_0, VAR_1, 1)))
  return VAR_2;
 if ((VAR_2 = FUNC_2(VAR_0, VAR_1, VAR_1->free_size)))
  return VAR_2;


 VAR_1->dirty_size += VAR_1->wasted_size;
 VAR_0->dirty_size += VAR_1->wasted_size;
 VAR_0->wasted_size -= VAR_1->wasted_size;
 VAR_1->wasted_size = 0;
 if (FUNC_0(VAR_0, VAR_1->dirty_size)) {
  FUNC_3(&VAR_1->list, &VAR_0->very_dirty_list);
 } else {
  FUNC_3(&VAR_1->list, &VAR_0->dirty_list);
 }
 return 0;
}
