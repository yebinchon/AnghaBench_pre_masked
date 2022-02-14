
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct autofs_dir_ent** h; } ;
struct autofs_sb_info {TYPE_1__ dirhash; } ;
struct autofs_dir_ent {struct autofs_dir_ent* name; scalar_t__ dentry; struct autofs_dir_ent* next; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct autofs_dir_ent*) ;

void FUNC_2(struct autofs_sb_info *VAR_1)
{
 int VAR_2;
 struct autofs_dir_ent *VAR_3, *VAR_4;

 for ( VAR_2 = 0 ; VAR_2 < VAR_0 ; VAR_2++ ) {
  for ( VAR_3 = VAR_1->dirhash.h[VAR_2] ; VAR_3 ; VAR_3 = VAR_4 ) {
   VAR_4 = VAR_3->next;
   if ( VAR_3->dentry )
    FUNC_0(VAR_3->dentry);
   FUNC_1(VAR_3->name);
   FUNC_1(VAR_3);
  }
 }
}
