
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct modctl {int * mod_user_symbols; struct modctl* mod_next; struct modctl* mod_stale; } ;
typedef struct modctl modctl_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 struct modctl* VAR_1 ;
 int FUNC_2 (struct modctl*,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct modctl * VAR_3)
{
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_1(&VAR_2, VAR_0);
 modctl_t *VAR_4, *VAR_5, *VAR_6;


 for (VAR_6=VAR_3->mod_stale; VAR_6 != ((void*)0); VAR_6=VAR_5) {
  VAR_5 = VAR_6->mod_stale;

  FUNC_0(VAR_6->mod_user_symbols == ((void*)0));
  FUNC_2(VAR_6, sizeof(modctl_t));
 }

 VAR_4 = ((void*)0);
 VAR_6 = VAR_1;

 while (VAR_6 != VAR_3) {
  VAR_4 = VAR_6;
  VAR_6 = VAR_6->mod_next;
 }

 if (VAR_4 != ((void*)0)) {
  VAR_4->mod_next = VAR_3->mod_next;
 }
 else {
  VAR_1 = VAR_3->mod_next;
 }


 FUNC_0(VAR_3->mod_user_symbols == ((void*)0));

 FUNC_2 (VAR_3, sizeof(modctl_t));
}
