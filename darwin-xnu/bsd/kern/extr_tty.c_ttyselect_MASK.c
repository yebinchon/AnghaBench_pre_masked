
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_cc; } ;
struct tty {int t_state; int t_lowat; int t_hiwat; int t_wsel; int t_rsel; TYPE_1__ t_outq; } ;
typedef int proc_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tty*) ;
 int FUNC_1 (int ,int *,void*) ;
 int FUNC_2 (struct tty*) ;

int
FUNC_3(struct tty *VAR_4, int VAR_5, void *VAR_6, proc_t VAR_7)
{
 int VAR_8 = 0;





 bool VAR_9 = VAR_5 & VAR_1;
 VAR_5 &= ~VAR_1;

 if (VAR_4 == ((void*)0)) {
  return VAR_0;
 }

 FUNC_0(VAR_4);

 if (VAR_4->t_state & VAR_3) {
  VAR_8 = 1;
  goto out;
 }

 switch (VAR_5) {
 case 129:
  VAR_8 = FUNC_2(VAR_4);
  if (VAR_8 > 0) {
   break;
  }

  FUNC_1(VAR_7, &VAR_4->t_rsel, VAR_6);
  break;
 case 128:
  if ((VAR_4->t_outq.c_cc <= VAR_4->t_lowat) &&
      (VAR_4->t_state & VAR_2)) {
   VAR_8 = VAR_4->t_hiwat - VAR_4->t_outq.c_cc;
   break;
  }

  FUNC_1(VAR_7, &VAR_4->t_wsel, VAR_6);
  break;
 }

out:
 if (VAR_8 > 0 && VAR_9) {
  switch (VAR_5) {
  case 129:
   FUNC_1(VAR_7, &VAR_4->t_rsel, VAR_6);
   break;
  case 128:
   FUNC_1(VAR_7, &VAR_4->t_wsel, VAR_6);
   break;
  }
 }

 return VAR_8;
}
