
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ c_cc; scalar_t__ c_cn; } ;
struct tty {int t_state; TYPE_1__ t_outq; scalar_t__ t_lowat; } ;
struct knote {int kn_filter; int kn_flags; scalar_t__ kn_data; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tty*) ;
 int FUNC_1 (char*,int,struct knote*,struct tty*) ;
 scalar_t__ FUNC_2 (struct tty*) ;

__attribute__((used)) static int
FUNC_3(struct knote *VAR_3, struct tty *VAR_4)
{
 int VAR_5 = 0;

 FUNC_0(VAR_4);

 switch (VAR_3->kn_filter) {
 case 129:
  VAR_3->kn_data = FUNC_2(VAR_4);
  if (VAR_3->kn_data > 0) {
   VAR_5 = 1;
  }
  break;

 case 128:
  if ((VAR_4->t_outq.c_cc <= VAR_4->t_lowat) &&
   (VAR_4->t_state & VAR_1)) {
   VAR_3->kn_data = VAR_4->t_outq.c_cn - VAR_4->t_outq.c_cc;
   VAR_5 = 1;
  }
  break;

 default:
  FUNC_1("ptsd kevent: unexpected filter: %d, kn = %p, tty = %p",
    VAR_3->kn_filter, VAR_3, VAR_4);
  break;
 }

 if (VAR_4->t_state & VAR_2) {
  VAR_3->kn_flags |= VAR_0;
  VAR_5 = 1;
 }

 return VAR_5;
}
