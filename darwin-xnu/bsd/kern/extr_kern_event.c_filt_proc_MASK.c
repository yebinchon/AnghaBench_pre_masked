
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_7__ {TYPE_2__* p_proc; } ;
struct knote {int kn_sfflags; int kn_fflags; int kn_flags; long kn_data; TYPE_3__ kn_ptr; } ;
struct TYPE_8__ {TYPE_1__* kq_p; } ;
struct TYPE_6__ {scalar_t__ p_oppid; scalar_t__ p_ppid; int p_lflag; int p_csflags; } ;
struct TYPE_5__ {scalar_t__ p_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 int VAR_7 ;
 long VAR_8 ;
 long VAR_9 ;
 long VAR_10 ;
 long VAR_11 ;
 long VAR_12 ;
 long VAR_13 ;
 long VAR_14 ;
 long VAR_15 ;
 int VAR_16 ;
 long VAR_17 ;
 int VAR_18 ;



 int VAR_19 ;




 int VAR_20 ;
 int VAR_21 ;
 TYPE_4__* FUNC_0 (struct knote*) ;

__attribute__((used)) static int
FUNC_1(struct knote *VAR_22, long VAR_23)
{
 u_int VAR_24;
 VAR_24 = (u_int)VAR_23 & VAR_16;
 if (VAR_24 & VAR_3) {
  if ((VAR_22->kn_ptr.p_proc->p_oppid != 0)
      && (FUNC_0(VAR_22)->kq_p->p_pid != VAR_22->kn_ptr.p_proc->p_ppid)) {



   return 0;
  }
 }




 if (VAR_22->kn_sfflags & VAR_24)
  VAR_22->kn_fflags |= VAR_24;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
 if ((VAR_24 == VAR_18) || ((VAR_24 == VAR_3) && !(VAR_22->kn_sfflags & VAR_18))) {
  VAR_22->kn_flags |= (VAR_1 | VAR_2);
 }
#pragma clang diagnostic pop








 if (VAR_24 == VAR_3) {
  VAR_22->kn_data = 0;
  if ((VAR_22->kn_sfflags & VAR_4) != 0) {
   VAR_22->kn_fflags |= VAR_4;
   VAR_22->kn_data |= (VAR_23 & VAR_17);
  }
  if ((VAR_22->kn_sfflags & VAR_7) != 0) {
   VAR_22->kn_fflags |= VAR_7;
   if ((VAR_22->kn_ptr.p_proc->p_lflag &
        VAR_20) != 0) {
    VAR_22->kn_data |= VAR_6;
   }
   if ((VAR_22->kn_ptr.p_proc->p_lflag &
        VAR_21) != 0) {
    VAR_22->kn_data |= VAR_8;
    switch (VAR_22->kn_ptr.p_proc->p_lflag & VAR_19) {
    case 130:
     VAR_22->kn_data |= VAR_13;
     break;
    case 129:
     VAR_22->kn_data |= VAR_14;
     break;
    case 134:
     VAR_22->kn_data |= VAR_9;
     break;
    case 128:
     VAR_22->kn_data |= VAR_15;
     break;
    case 133:
     VAR_22->kn_data |= VAR_10;
     break;
    case 131:
     VAR_22->kn_data |= VAR_12;
     break;
    case 132:
     VAR_22->kn_data |= VAR_11;
     break;
    }
   }
   if ((VAR_22->kn_ptr.p_proc->p_csflags &
        VAR_0) != 0) {
    VAR_22->kn_data |= VAR_5;
   }
  }
 }


 return (VAR_22->kn_fflags != 0);
}
