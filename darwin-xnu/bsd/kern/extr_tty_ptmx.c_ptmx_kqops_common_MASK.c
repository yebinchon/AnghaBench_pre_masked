
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int c_cc; } ;
struct TYPE_5__ {int c_cc; } ;
struct TYPE_4__ {int c_cc; } ;
struct tty {int t_state; int t_lflag; TYPE_3__ t_canq; TYPE_2__ t_rawq; TYPE_1__ t_outq; } ;
struct ptmx_ioctl {int pt_flags; int pt_ucntl; int pt_send; } ;
struct knote {int kn_filter; int kn_data; int kn_flags; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct tty*) ;
 int FUNC_1 (char*,int,struct knote*,struct tty*) ;

__attribute__((used)) static int
FUNC_2(struct knote *VAR_9, struct ptmx_ioctl *VAR_10, struct tty *VAR_11)
{
 int VAR_12 = 0;

 FUNC_0(VAR_11);


 if (!(VAR_11->t_state & VAR_5)) {
  VAR_9->kn_flags |= VAR_0;
  return 1;
 }

 switch (VAR_9->kn_filter) {
 case 129:

  if (VAR_11->t_outq.c_cc && !(VAR_11->t_state & VAR_6)) {
   VAR_12 = VAR_11->t_outq.c_cc;
   VAR_9->kn_data = VAR_12;
  } else if (((VAR_10->pt_flags & VAR_2) && VAR_10->pt_send) ||
    ((VAR_10->pt_flags & VAR_4) && VAR_10->pt_ucntl)) {
   VAR_12 = 1;
  }
  break;

 case 128:
  if (VAR_10->pt_flags & VAR_3) {
   if (VAR_11->t_canq.c_cc == 0) {
    VAR_12 = VAR_8 - 1;
   }
  } else {
   VAR_12 = (VAR_8 - 2) - (VAR_11->t_rawq.c_cc + VAR_11->t_canq.c_cc);
   if (VAR_11->t_canq.c_cc == 0 && (VAR_11->t_lflag & VAR_1)) {
    VAR_12 = 1;
   }
   if (VAR_12 < 0) {
    VAR_12 = 0;
   }
  }
  break;

 default:
  FUNC_1("ptmx kevent: unexpected filter: %d, kn = %p, tty = %p",
    VAR_9->kn_filter, VAR_9, VAR_11);
  break;
 }

 if (VAR_11->t_state & VAR_7) {
  VAR_9->kn_flags |= VAR_0;
  VAR_12 = 1;
 }

 return VAR_12;
}
