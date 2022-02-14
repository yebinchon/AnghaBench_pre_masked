
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty {int dummy; } ;
struct TYPE_3__ {int si_note; } ;
struct TYPE_4__ {int si_note; } ;
struct ptmx_ioctl {TYPE_1__ pt_selw; TYPE_2__ pt_selr; struct tty* pt_tty; } ;
struct knote {int kn_filter; struct ptmx_ioctl* kn_hook; } ;




 int FUNC_0 (int *,struct knote*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,struct knote*,int) ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*) ;
 int FUNC_5 (struct tty*) ;

__attribute__((used)) static void
FUNC_6(struct knote *VAR_0)
{
 struct ptmx_ioctl *VAR_1 = VAR_0->kn_hook;
 struct tty *VAR_2 = VAR_1->pt_tty;

 FUNC_1(VAR_2 != ((void*)0));

 FUNC_3(VAR_2);

 switch (VAR_0->kn_filter) {
 case 129:
  FUNC_0(&VAR_1->pt_selr.si_note, VAR_0);
  break;

 case 128:
  FUNC_0(&VAR_1->pt_selw.si_note, VAR_0);
  break;

 default:
  FUNC_2("invalid knote %p detach, filter: %d", VAR_0, VAR_0->kn_filter);
  break;
 }

 VAR_0->kn_hook = ((void*)0);
 FUNC_4(VAR_2);

 FUNC_5(VAR_2);
}
