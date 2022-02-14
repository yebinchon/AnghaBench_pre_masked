
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {struct jffs2_inodirty* wbuf_inodes; } ;
struct jffs2_inodirty {struct jffs2_inodirty* next; } ;


 struct jffs2_inodirty VAR_0 ;
 int FUNC_0 (struct jffs2_inodirty*) ;

__attribute__((used)) static void FUNC_1(struct jffs2_sb_info *VAR_1)
{
 struct jffs2_inodirty *VAR_2;

 VAR_2 = VAR_1->wbuf_inodes;

 if (VAR_2 != &VAR_0) {
  while (VAR_2) {
   struct jffs2_inodirty *VAR_3 = VAR_2->next;
   FUNC_0(VAR_2);
   VAR_2 = VAR_3;
  }
 }
 VAR_1->wbuf_inodes = ((void*)0);
}
