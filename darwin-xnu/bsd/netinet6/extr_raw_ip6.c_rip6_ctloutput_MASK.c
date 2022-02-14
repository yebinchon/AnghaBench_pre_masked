
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt {scalar_t__ sopt_level; scalar_t__ sopt_name; int sopt_dir; } ;
struct socket {int dummy; } ;
typedef int optval ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

 scalar_t__ VAR_3 ;



 int FUNC_0 (struct socket*,struct sockopt*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct socket*,struct sockopt*) ;
 int FUNC_3 (struct socket*,struct sockopt*) ;
 int FUNC_4 (struct sockopt*,int*,int,int) ;
 int FUNC_5 (struct socket*) ;

int
FUNC_6(
 struct socket *VAR_4,
 struct sockopt *VAR_5)
{
 int VAR_6, VAR_7;


 if (VAR_5->sopt_level == VAR_1)




  return(FUNC_0(VAR_4, VAR_5));
 else if (VAR_5->sopt_level != VAR_2 &&
     !(VAR_5->sopt_level == VAR_3 && VAR_5->sopt_name == 128))
  return (VAR_0);

 VAR_6 = 0;

 switch (VAR_5->sopt_dir) {
 case 130:
  switch (VAR_5->sopt_name) {
  case 131:
   VAR_6 = FUNC_3(VAR_4, VAR_5);
   break;
  default:
   VAR_6 = FUNC_2(VAR_4, VAR_5);
   break;
  }
  break;

 case 129:
  switch (VAR_5->sopt_name) {
  case 131:
   VAR_6 = FUNC_3(VAR_4, VAR_5);
   break;

  case 128:
   if ((VAR_6 = FUNC_4(VAR_5, &VAR_7, sizeof (VAR_7),
       sizeof (VAR_7))) != 0)
    break;

   VAR_6 = FUNC_1(FUNC_5(VAR_4), VAR_7);
   break;

  default:
   VAR_6 = FUNC_2(VAR_4, VAR_5);
   break;
  }
  break;
 }

 return (VAR_6);
}
