
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_cc; } ;
struct tty {int t_lowat; int t_hiwat; int t_wsel; TYPE_1__ t_outq; int t_state; int t_rsel; } ;
struct ptmx_ioctl {struct tty* pt_tty; } ;
typedef int proc_t ;
typedef int dev_t ;


 int VAR_0 ;


 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ptmx_ioctl* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int *,void*) ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*) ;
 int FUNC_5 (struct tty*) ;

int
FUNC_6(dev_t VAR_3, int VAR_4, void *VAR_5, proc_t VAR_6)
{
 struct ptmx_ioctl *VAR_7 = FUNC_1(VAR_3, 0, ((void*)0));
 struct tty *VAR_8;
 int VAR_9 = 0;

 if (VAR_7 == ((void*)0))
  return (VAR_0);
 VAR_8 = VAR_7->pt_tty;
 if (VAR_8 == ((void*)0))
  return (VAR_0);

 FUNC_4(VAR_8);

 switch (VAR_4) {
 case 129:
  if (FUNC_0(VAR_8->t_state, VAR_2)) {
   VAR_9 = 1;
   break;
  }

  VAR_9 = FUNC_3(VAR_8);
  if (VAR_9 > 0) {
   break;
  }

  FUNC_2(VAR_6, &VAR_8->t_rsel, VAR_5);
  break;
 case 128:
  if (FUNC_0(VAR_8->t_state, VAR_2)) {
   VAR_9 = 1;
   break;
  }

  if ((VAR_8->t_outq.c_cc <= VAR_8->t_lowat) &&
    FUNC_0(VAR_8->t_state, VAR_1)) {
   VAR_9 = VAR_8->t_hiwat - VAR_8->t_outq.c_cc;
   break;
  }

  FUNC_2(VAR_6, &VAR_8->t_wsel, VAR_5);
  break;
 }

 FUNC_5(VAR_8);
 return (VAR_9);
}
