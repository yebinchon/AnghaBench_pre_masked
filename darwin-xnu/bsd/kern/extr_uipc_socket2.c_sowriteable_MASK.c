
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sb_lowat; } ;
struct socket {int so_state; scalar_t__ so_error; int so_flags1; int so_flags; scalar_t__ so_type; TYPE_1__ so_snd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct socket*) ;
 scalar_t__ FUNC_1 (struct socket*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct socket*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct socket*) ;
 int FUNC_5 (struct socket*) ;
 int FUNC_6 (struct socket*) ;

int
FUNC_7(struct socket *VAR_8)
{
 if ((VAR_8->so_state & VAR_7) ||
     VAR_8->so_error > 0)
  return (1);
 if (FUNC_4(VAR_8) || !FUNC_5(VAR_8))
  return (0);
 if (VAR_8->so_flags1 & VAR_5)
  return(1);

 if (FUNC_3(&(VAR_8)->so_snd) >= (VAR_8)->so_snd.sb_lowat) {
  if (VAR_8->so_flags & VAR_6) {
   if ((FUNC_0(VAR_8) == VAR_2 ||
       FUNC_0(VAR_8) == VAR_1) &&
       VAR_8->so_type == VAR_4) {
    return (FUNC_6(VAR_8));
   }






   else {
    return (1);
   }
  } else {
   return (1);
  }
 }
 return (0);
}
