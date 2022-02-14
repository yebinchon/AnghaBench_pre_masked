
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sb_lowat; scalar_t__ sb_hiwat; } ;
struct socket {int so_state; int so_flags1; int so_flags; scalar_t__ so_type; TYPE_1__ so_snd; scalar_t__ so_error; } ;
struct knote {scalar_t__ kn_data; int kn_sfflags; scalar_t__ kn_sdata; scalar_t__ kn_fflags; int kn_flags; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct socket*) ;
 scalar_t__ FUNC_1 (struct socket*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct socket*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (struct socket*) ;
 int FUNC_5 (struct socket*) ;
 int FUNC_6 (struct socket*) ;

__attribute__((used)) static int
FUNC_7(struct knote *VAR_11, struct socket *VAR_12)
{
 int VAR_13 = 0;

 VAR_11->kn_data = FUNC_3(&VAR_12->so_snd);
 if (VAR_12->so_state & VAR_9) {
  VAR_11->kn_flags |= VAR_0;
  VAR_11->kn_fflags = VAR_12->so_error;
  return 1;
 }
 if (VAR_12->so_error) {
  return 1;
 }
 if (!FUNC_5(VAR_12)) {
  return 0;
 }
 if (VAR_12->so_flags1 & VAR_7) {
  return 1;
 }
 int64_t VAR_14 = VAR_12->so_snd.sb_lowat;
 if (VAR_11->kn_sfflags & VAR_2) {
  if (VAR_11->kn_sdata > VAR_12->so_snd.sb_hiwat)
   VAR_14 = VAR_12->so_snd.sb_hiwat;
  else if (VAR_11->kn_sdata > VAR_14)
   VAR_14 = VAR_11->kn_sdata;
 }
 if (VAR_11->kn_data >= VAR_14) {
  if ((VAR_12->so_flags & VAR_8)



      ) {
   if ((FUNC_0(VAR_12) == VAR_3 ||
       FUNC_0(VAR_12) == VAR_4) &&
       VAR_12->so_type == VAR_6) {
    VAR_13 = FUNC_6(VAR_12);
   }






   else {
    return 1;
   }
  } else {
   VAR_13 = 1;
  }
 }
 if (FUNC_4(VAR_12))
  VAR_13 = 0;
 return (VAR_13);
}
