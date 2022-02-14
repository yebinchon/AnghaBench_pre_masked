
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct jffs2_sb_info {struct jffs2_inodirty* wbuf_inodes; } ;
struct jffs2_inodirty {scalar_t__ ino; struct jffs2_inodirty* next; } ;


 struct jffs2_inodirty VAR_0 ;

__attribute__((used)) static int FUNC_0(struct jffs2_sb_info *VAR_1, uint32_t VAR_2)
{
 struct jffs2_inodirty *VAR_3 = VAR_1->wbuf_inodes;


 if (VAR_3 == &VAR_0)
  return 1;


 if (VAR_3 && !VAR_2)
  return 1;


 while (VAR_3) {
  if (VAR_3->ino == VAR_2)
   return 1;
  VAR_3 = VAR_3->next;
 }
 return 0;
}
