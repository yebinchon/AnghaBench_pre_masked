
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {int dummy; } ;
struct jffs2_full_dirent {scalar_t__ nhash; scalar_t__ version; struct jffs2_full_dirent* next; scalar_t__ raw; int ino; int name; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct jffs2_full_dirent*) ;
 int FUNC_2 (struct jffs2_sb_info*,scalar_t__) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct jffs2_sb_info *VAR_0, struct jffs2_full_dirent *VAR_1, struct jffs2_full_dirent **VAR_2)
{
 struct jffs2_full_dirent **VAR_3 = VAR_2;

 FUNC_0("add dirent \"%s\", ino #%u\n", VAR_1->name, VAR_1->ino);

 while ((*VAR_3) && (*VAR_3)->nhash <= VAR_1->nhash) {
  if ((*VAR_3)->nhash == VAR_1->nhash && !FUNC_3((*VAR_3)->name, VAR_1->name)) {

   if (VAR_1->version < (*VAR_3)->version) {
    FUNC_0("Eep! Marking new dirent node obsolete, old is \"%s\", ino #%u\n",
     (*VAR_3)->name, (*VAR_3)->ino);
    FUNC_2(VAR_0, VAR_1->raw);
    FUNC_1(VAR_1);
   } else {
    FUNC_0("marking old dirent \"%s\", ino #%u obsolete\n",
     (*VAR_3)->name, (*VAR_3)->ino);
    VAR_1->next = (*VAR_3)->next;


    if ((*VAR_3)->raw)
     FUNC_2(VAR_0, ((*VAR_3)->raw));
    FUNC_1(*VAR_3);
    *VAR_3 = VAR_1;
   }
   return;
  }
  VAR_3 = &((*VAR_3)->next);
 }
 VAR_1->next = *VAR_3;
 *VAR_3 = VAR_1;
}
