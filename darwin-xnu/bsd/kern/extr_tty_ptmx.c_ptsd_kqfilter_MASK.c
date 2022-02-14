
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int si_note; } ;
struct TYPE_4__ {int si_note; } ;
struct tty {int t_state; TYPE_2__ t_wsel; TYPE_1__ t_rsel; } ;
struct ptmx_ioctl {struct tty* pt_tty; } ;
struct knote {int kn_filter; struct tty* kn_hook; int kn_filtid; } ;
typedef int dev_t ;
struct TYPE_6__ {scalar_t__ d_open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int *,struct knote*) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 TYPE_3__* VAR_4 ;
 int FUNC_2 (struct knote*,int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int,struct knote*,struct tty*) ;
 struct ptmx_ioctl* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct knote*,struct tty*) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (struct tty*) ;
 int FUNC_9 (struct tty*) ;
 int FUNC_10 (struct tty*) ;

int
FUNC_11(dev_t VAR_6, struct knote *VAR_7)
{
 struct tty *VAR_8 = ((void*)0);
 struct ptmx_ioctl *VAR_9 = ((void*)0);
 int VAR_10;


 if (VAR_4[FUNC_3(VAR_6)].d_open != VAR_5) {
  FUNC_2(VAR_7, VAR_0);
  return 0;
 }

 if ((VAR_9 = FUNC_6(FUNC_4(VAR_6), 0)) == ((void*)0)) {
  FUNC_2(VAR_7, VAR_1);
  return 0;
 }

 VAR_8 = VAR_9->pt_tty;
 FUNC_8(VAR_8);

 FUNC_1(VAR_8->t_state & VAR_3);

 VAR_7->kn_filtid = VAR_2;

 FUNC_10(VAR_8);
 VAR_7->kn_hook = VAR_8;

 switch (VAR_7->kn_filter) {
 case 129:
  FUNC_0(&VAR_8->t_rsel.si_note, VAR_7);
  break;
 case 128:
  FUNC_0(&VAR_8->t_wsel.si_note, VAR_7);
  break;
 default:
  FUNC_5("ptsd kevent: unexpected filter: %d, kn = %p, tty = %p",
    VAR_7->kn_filter, VAR_7, VAR_8);
  break;
 }


 VAR_10 = FUNC_7(VAR_7, VAR_8);

 FUNC_9(VAR_8);

 return VAR_10;
}
