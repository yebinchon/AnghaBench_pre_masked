
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_cc; } ;
struct tty {int t_state; int t_lowat; int t_hiwat; TYPE_1__ t_outq; } ;
struct knote {int kn_data; int kn_flags; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tty*) ;
 int FUNC_1 (struct knote*) ;
 int FUNC_2 (struct tty*) ;

__attribute__((used)) static int
FUNC_3(struct knote *VAR_3, struct tty *VAR_4)
{
 int VAR_5 = 0;

 FUNC_0(VAR_4);

 if (VAR_4->t_state & VAR_2) {
  VAR_3->kn_flags |= VAR_0;
  return 1;
 }

 switch (FUNC_1(VAR_3)) {
 case 129:
  VAR_5 = FUNC_2(VAR_4);
  break;
 case 128:
  if ((VAR_4->t_outq.c_cc <= VAR_4->t_lowat) &&
      (VAR_4->t_state & VAR_1)) {
   VAR_5 = VAR_4->t_hiwat - VAR_4->t_outq.c_cc;
  }
  break;
 }

 VAR_3->kn_data = VAR_5;
 return VAR_5;
}
