
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct autofs_dir_ent {struct autofs_dir_ent* name; scalar_t__ dentry; TYPE_1__** back; TYPE_1__* next; } ;
struct TYPE_2__ {struct TYPE_2__** back; } ;


 int FUNC_0 (struct autofs_dir_ent*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct autofs_dir_ent*) ;

void FUNC_3(struct autofs_dir_ent *VAR_0)
{
 *(VAR_0->back) = VAR_0->next;
 if ( VAR_0->next )
  VAR_0->next->back = VAR_0->back;

 FUNC_0(VAR_0);

 if ( VAR_0->dentry )
  FUNC_1(VAR_0->dentry);
 FUNC_2(VAR_0->name);
 FUNC_2(VAR_0);
}
