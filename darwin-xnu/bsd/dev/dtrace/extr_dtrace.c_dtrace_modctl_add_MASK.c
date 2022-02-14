
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct modctl {struct modctl* mod_next; struct modctl* mod_stale; int mod_modname; scalar_t__ mod_loaded; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 struct modctl* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct modctl * VAR_4)
{
 struct modctl *VAR_5, *VAR_6;

 FUNC_0(VAR_4 != ((void*)0));
 FUNC_1(&VAR_3, VAR_1);



 VAR_4->mod_next = VAR_2;
 VAR_2 = VAR_4;
 VAR_6 = VAR_4;
 VAR_5 = VAR_4->mod_next;

 while (VAR_5 != ((void*)0)) {
  if (VAR_5->mod_loaded) {

   VAR_6 = VAR_5;
   VAR_5 = VAR_5->mod_next;
   continue;
  }
  else {

   if (FUNC_2 (VAR_4->mod_modname, VAR_5->mod_modname, VAR_0)) {

    VAR_6 = VAR_5;
    VAR_5 = VAR_5->mod_next;
    continue;
   }
   else {

    VAR_6->mod_next = VAR_5->mod_next;
    VAR_4->mod_stale = VAR_5;
    VAR_5->mod_next = ((void*)0);
    break;
   }
  }
 }
}
