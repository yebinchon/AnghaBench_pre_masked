
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autofs_dirhash {struct autofs_dir_ent** h; } ;
struct autofs_dir_ent {int len; int name; int hash; struct autofs_dir_ent* next; } ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,...) ;

struct autofs_dir_ent *FUNC_3(const struct autofs_dirhash *VAR_1,
     off_t *VAR_2, struct autofs_dir_ent *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 struct autofs_dir_ent *VAR_7;

 VAR_4 = (*VAR_2 >> 16) - 1;
 VAR_5 = *VAR_2 & 0xffff;

 if ( VAR_4 < 0 ) {
  VAR_4 = VAR_5 = 0;
 }

 FUNC_0(("autofs_hash_enum: bucket %d, entry %d\n", VAR_4, VAR_5));

 VAR_7 = VAR_3 ? VAR_3->next : ((void*)0);

 if ( VAR_7 ) {
  VAR_5++;
 } else {
  while ( VAR_4 < VAR_0 ) {
   VAR_7 = VAR_1->h[VAR_4];
   for ( VAR_6 = VAR_5 ; VAR_7 && VAR_6 ; VAR_6-- )
    VAR_7 = VAR_7->next;

   if (VAR_7) {
    VAR_5++;
    break;
   }

   VAR_4++; VAR_5 = 0;
  }
 }
 *VAR_2 = ((VAR_4+1) << 16) + VAR_5;
 return VAR_7;
}
