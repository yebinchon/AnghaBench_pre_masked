
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty {int t_dev; } ;
struct TYPE_2__ {int si_note; } ;
struct ptmx_ioctl {TYPE_1__ pt_selw; TYPE_1__ pt_selr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*) ;
 struct ptmx_ioctl* FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct tty *VAR_2, int VAR_3)
{
 struct ptmx_ioctl *VAR_4 = FUNC_3(VAR_2->t_dev, 0, ((void*)0));
 if (VAR_4 == ((void*)0))
  return;

 if (VAR_3 & VAR_0) {
  FUNC_4(&VAR_4->pt_selr);
  FUNC_5(FUNC_1(VAR_2));
  FUNC_0(&VAR_4->pt_selr.si_note, 1);
 }
 if (VAR_3 & VAR_1) {
  FUNC_4(&VAR_4->pt_selw);
  FUNC_5(FUNC_2(VAR_2));
  FUNC_0(&VAR_4->pt_selw.si_note, 1);
 }
}
