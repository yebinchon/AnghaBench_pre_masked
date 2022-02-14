
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selinfo {int si_note; } ;
struct tty {struct selinfo t_wsel; struct selinfo t_rsel; } ;
struct knote {int * kn_hook; } ;


 int VAR_0 ;


 int FUNC_0 (int *,struct knote*) ;
 int FUNC_1 (struct knote*) ;
 int FUNC_2 (struct knote*,int ) ;
 struct tty* FUNC_3 (struct knote*) ;
 int FUNC_4 (struct tty*) ;
 int FUNC_5 (struct tty*) ;

__attribute__((used)) static void
FUNC_6(struct knote *VAR_1)
{
 struct tty *VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 if (!VAR_2) {
  FUNC_2(VAR_1, VAR_0);
  return;
 }

 struct selinfo *VAR_3 = ((void*)0);
 switch (FUNC_1(VAR_1)) {
 case 129:
  VAR_3 = &VAR_2->t_rsel;
  break;
 case 128:
  VAR_3 = &VAR_2->t_wsel;
  break;

 }

 FUNC_0(&VAR_3->si_note, VAR_1);
 VAR_1->kn_hook = ((void*)0);

 FUNC_4(VAR_2);
 FUNC_5(VAR_2);
}
