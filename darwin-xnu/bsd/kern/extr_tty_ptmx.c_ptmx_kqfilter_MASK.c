
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty {int dummy; } ;
struct TYPE_5__ {int si_note; } ;
struct TYPE_4__ {int si_note; } ;
struct ptmx_ioctl {TYPE_2__ pt_selw; TYPE_1__ pt_selr; struct tty* pt_tty; } ;
struct knote {int kn_filter; struct ptmx_ioctl* kn_hook; int kn_filtid; } ;
typedef int dev_t ;
struct TYPE_6__ {scalar_t__ d_open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int *,struct knote*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (struct knote*,int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,struct knote*,struct tty*) ;
 scalar_t__ VAR_4 ;
 struct ptmx_ioctl* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct knote*,struct ptmx_ioctl*,struct tty*) ;
 int FUNC_7 (struct tty*) ;
 int FUNC_8 (struct tty*) ;
 int FUNC_9 (struct tty*) ;

int
FUNC_10(dev_t VAR_5, struct knote *VAR_6)
{
 struct tty *VAR_7 = ((void*)0);
 struct ptmx_ioctl *VAR_8 = ((void*)0);
 int VAR_9;


 if (VAR_3[FUNC_2(VAR_5)].d_open != VAR_4) {
  FUNC_1(VAR_6, VAR_0);
  return 0;
 }

 if ((VAR_8 = FUNC_5(FUNC_3(VAR_5), 0)) == ((void*)0)) {
  FUNC_1(VAR_6, VAR_1);
  return 0;
 }

 VAR_7 = VAR_8->pt_tty;
 FUNC_7(VAR_7);

 VAR_6->kn_filtid = VAR_2;
 VAR_6->kn_hook = VAR_8;






 switch (VAR_6->kn_filter) {
 case 129:
  FUNC_0(&VAR_8->pt_selr.si_note, VAR_6);
  break;
 case 128:
  FUNC_0(&VAR_8->pt_selw.si_note, VAR_6);
  break;
 default:
  FUNC_4("ptmx kevent: unexpected filter: %d, kn = %p, tty = %p",
    VAR_6->kn_filter, VAR_6, VAR_7);
  break;
 }


 VAR_9 = FUNC_6(VAR_6, VAR_8, VAR_7);


 FUNC_9(VAR_7);
 FUNC_8(VAR_7);

 return VAR_9;
}
