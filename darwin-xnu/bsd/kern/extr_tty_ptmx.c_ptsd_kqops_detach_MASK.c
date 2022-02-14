
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int si_note; } ;
struct TYPE_4__ {int si_note; } ;
struct tty {int t_state; TYPE_1__ t_wsel; TYPE_2__ t_rsel; } ;
struct knote {int kn_filter; struct tty* kn_hook; } ;




 int FUNC_0 (int *,struct knote*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,struct knote*,int) ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*) ;
 int FUNC_5 (struct tty*) ;

__attribute__((used)) static void
FUNC_6(struct knote *VAR_1)
{
 struct tty *VAR_2;

 VAR_2 = VAR_1->kn_hook;
 FUNC_1(VAR_2 != ((void*)0));

 FUNC_3(VAR_2);





 if (VAR_2->t_state & VAR_0) {
  switch (VAR_1->kn_filter) {
  case 129:
   FUNC_0(&VAR_2->t_rsel.si_note, VAR_1);
   break;

  case 128:
   FUNC_0(&VAR_2->t_wsel.si_note, VAR_1);
   break;

  default:
   FUNC_2("invalid knote %p detach, filter: %d", VAR_1, VAR_1->kn_filter);
   break;
  }
 }

 VAR_1->kn_hook = ((void*)0);
 FUNC_4(VAR_2);

 FUNC_5(VAR_2);
}
