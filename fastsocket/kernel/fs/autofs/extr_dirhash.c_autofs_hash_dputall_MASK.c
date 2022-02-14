
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autofs_dirhash {struct autofs_dir_ent** h; } ;
struct autofs_dir_ent {int * dentry; struct autofs_dir_ent* next; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct autofs_dirhash *VAR_1)
{
 int VAR_2;
 struct autofs_dir_ent *VAR_3;

 for ( VAR_2 = 0 ; VAR_2 < VAR_0 ; VAR_2++ ) {
  for ( VAR_3 = VAR_1->h[VAR_2] ; VAR_3 ; VAR_3 = VAR_3->next ) {
   if ( VAR_3->dentry ) {
    FUNC_0(VAR_3->dentry);
    VAR_3->dentry = ((void*)0);
   }
  }
 }
}
