
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt {scalar_t__ sopt_level; scalar_t__ sopt_name; int sopt_dir; } ;
struct socket {int dummy; } ;
struct inpcb {int inp_flags; } ;
typedef int optval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;



 int FUNC_0 (struct inpcb*,int) ;
 int FUNC_1 (struct socket*,struct sockopt*) ;
 int FUNC_2 (struct sockopt*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct sockopt*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct sockopt*,int*,int,int) ;
 int FUNC_7 (struct sockopt*,int*,int) ;
 struct inpcb* FUNC_8 (struct socket*) ;

int
FUNC_9(struct socket *VAR_7, struct sockopt *VAR_8)
{
 struct inpcb *VAR_9 = FUNC_8(VAR_7);
 int VAR_10, VAR_11;


 if (VAR_8->sopt_level != VAR_5 &&
     !(VAR_8->sopt_level == VAR_6 && VAR_8->sopt_name == 128))
  return (VAR_1);

 VAR_10 = 0;

 switch (VAR_8->sopt_dir) {
 case 130:
  switch (VAR_8->sopt_name) {
  case 138:
   VAR_11 = VAR_9->inp_flags & VAR_3;
   VAR_10 = FUNC_7(VAR_8, &VAR_11, sizeof VAR_11);
   break;

  case 131:
   VAR_11 = VAR_9->inp_flags & VAR_4;
   VAR_10 = FUNC_7(VAR_8, &VAR_11, sizeof VAR_11);
   break;
  default:
   VAR_10 = FUNC_1(VAR_7, VAR_8);
   break;
  }
  break;

 case 129:
  switch (VAR_8->sopt_name) {
  case 138:
   VAR_10 = FUNC_6(VAR_8, &VAR_11, sizeof VAR_11,
         sizeof VAR_11);
   if (VAR_10)
    break;
   if (VAR_11)
    VAR_9->inp_flags |= VAR_3;
   else
    VAR_9->inp_flags &= ~VAR_3;
   break;

  case 131:
   VAR_10 = FUNC_6(VAR_8, &VAR_11, sizeof VAR_11,
       sizeof VAR_11);
   if (VAR_10)
    break;
   if (VAR_11)
    VAR_9->inp_flags |= VAR_4;
   else
    VAR_9->inp_flags &= ~VAR_4;
   break;
  case 128:
   if ((VAR_10 = FUNC_6(VAR_8, &VAR_11, sizeof (VAR_11),
       sizeof (VAR_11))) != 0)
    break;

   VAR_10 = FUNC_0(VAR_9, VAR_11);
   break;

  default:
   VAR_10 = FUNC_1(VAR_7, VAR_8);
   break;
  }
  break;
 }

 return (VAR_10);
}
