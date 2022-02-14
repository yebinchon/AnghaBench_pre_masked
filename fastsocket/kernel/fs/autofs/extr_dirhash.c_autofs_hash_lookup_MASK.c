
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {scalar_t__ hash; scalar_t__ len; int name; } ;
struct autofs_dirhash {struct autofs_dir_ent** h; } ;
struct autofs_dir_ent {scalar_t__ hash; scalar_t__ len; int name; struct autofs_dir_ent* next; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

struct autofs_dir_ent *FUNC_3(const struct autofs_dirhash *VAR_1, struct qstr *VAR_2)
{
 struct autofs_dir_ent *VAR_3;

 FUNC_0(("autofs_hash_lookup: hash = 0x%08x, name = ", VAR_2->hash));
 FUNC_1(VAR_2->name,VAR_2->len);

 for ( VAR_3 = VAR_1->h[(unsigned) VAR_2->hash % VAR_0] ; VAR_3 ; VAR_3 = VAR_3->next ) {
  if ( VAR_2->hash == VAR_3->hash &&
       VAR_2->len == VAR_3->len &&
       !FUNC_2(VAR_2->name, VAR_3->name, VAR_2->len) )
   break;
 }

 return VAR_3;
}
