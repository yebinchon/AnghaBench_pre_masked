
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,int,int ,int ,int ) ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct socket*,int) ;
 int FUNC_2 (struct socket*,int) ;
 int FUNC_3 (struct socket*,int) ;

int
FUNC_4(struct socket *VAR_8, int VAR_9)
{
 int VAR_10;

 FUNC_0(VAR_0 | VAR_2, VAR_9, 0, 0, 0, 0);

 switch (VAR_9) {
 case 130:
 case 128:
 case 129:
  FUNC_1(VAR_8, 1);
  if ((VAR_8->so_state &
      (VAR_5|VAR_6|VAR_7)) == 0) {
   VAR_10 = VAR_4;
  } else {
   VAR_10 = FUNC_3(VAR_8, VAR_9);
  }
  FUNC_2(VAR_8, 1);
  break;
 default:
  VAR_10 = VAR_3;
  break;
 }

 FUNC_0(VAR_0 | VAR_1, VAR_9, VAR_10, 0, 0, 0);

 return (VAR_10);
}
