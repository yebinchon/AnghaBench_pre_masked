
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sb_cc; scalar_t__ sb_ctl; scalar_t__ sb_lowat; scalar_t__ sb_hiwat; } ;
struct socket {int so_options; scalar_t__ so_qlen; scalar_t__ so_oobmark; int so_state; int so_error; TYPE_1__ so_rcv; int so_comp; } ;
struct knote {scalar_t__ kn_data; int kn_sfflags; int kn_fflags; scalar_t__ kn_sdata; int kn_flags; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(struct knote *VAR_6, struct socket *VAR_7)
{
 if (VAR_7->so_options & VAR_3) {
  int VAR_8;







  VAR_6->kn_data = VAR_7->so_qlen;
  VAR_8 = ! FUNC_0(&VAR_7->so_comp);

  return (VAR_8);
 }







 VAR_6->kn_data = VAR_7->so_rcv.sb_cc - VAR_7->so_rcv.sb_ctl;

 if (VAR_6->kn_sfflags & VAR_2) {
  if (VAR_7->so_oobmark || (VAR_7->so_state & VAR_5)) {
   VAR_6->kn_fflags |= VAR_2;
   VAR_6->kn_data -= VAR_7->so_oobmark;
   return (1);
  }
 }

 if ((VAR_7->so_state & VAR_4)



    ) {
  VAR_6->kn_flags |= VAR_0;
  VAR_6->kn_fflags = VAR_7->so_error;
  return (1);
 }

 if (VAR_7->so_error) {
  return (1);
 }

 int64_t VAR_9 = VAR_7->so_rcv.sb_lowat;





 if (VAR_6->kn_sfflags & VAR_1) {
  if (VAR_6->kn_sdata > VAR_7->so_rcv.sb_hiwat)
   VAR_9 = VAR_7->so_rcv.sb_hiwat;
  else if (VAR_6->kn_sdata > VAR_9)
   VAR_9 = VAR_6->kn_sdata;
 }






 if (VAR_6->kn_sfflags & VAR_1)
  return (VAR_6->kn_data >= VAR_9);

 return (VAR_7->so_rcv.sb_cc >= VAR_9);
}
