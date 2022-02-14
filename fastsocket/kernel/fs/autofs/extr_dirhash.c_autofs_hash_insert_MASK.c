
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autofs_dirhash {struct autofs_dir_ent** h; } ;
struct autofs_dir_ent {struct autofs_dir_ent* next; struct autofs_dir_ent** back; scalar_t__ hash; scalar_t__ dentry; int len; int name; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct autofs_dirhash*,struct autofs_dir_ent*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct autofs_dirhash *VAR_1, struct autofs_dir_ent *VAR_2)
{
 struct autofs_dir_ent **VAR_3;

 FUNC_0(("autofs_hash_insert: hash = 0x%08x, name = ", VAR_2->hash));
 FUNC_2(VAR_2->name,VAR_2->len);

 FUNC_1(VAR_1,VAR_2);
 if (VAR_2->dentry)
  FUNC_3(VAR_2->dentry);

 VAR_3 = &VAR_1->h[(unsigned) VAR_2->hash % VAR_0];
 VAR_2->next = *VAR_3;
 VAR_2->back = VAR_3;
 *VAR_3 = VAR_2;
 if ( VAR_2->next )
  VAR_2->next->back = &(VAR_2->next);
}
