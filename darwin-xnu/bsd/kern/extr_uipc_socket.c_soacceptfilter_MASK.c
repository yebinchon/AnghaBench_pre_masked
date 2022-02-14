
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_state; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (struct socket*,struct socket*,struct sockaddr*,struct sockaddr*) ;
 int FUNC_2 (struct sockaddr*) ;
 int FUNC_3 (struct socket*,int) ;
 int FUNC_4 (struct socket*,int) ;
 int FUNC_5 (struct socket*) ;
 scalar_t__ FUNC_6 (struct socket*,struct sockaddr**,int) ;
 int FUNC_7 (int ,struct socket*,int ,int ) ;

int
FUNC_8(struct socket *VAR_5, struct socket *VAR_6)
{
 struct sockaddr *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 int VAR_9 = 0;






 FUNC_3(VAR_5, 1);
 if (FUNC_6(VAR_5, &VAR_8, 1) != 0 ||
     FUNC_6(VAR_5, &VAR_7, 0) != 0) {
  VAR_5->so_state &= ~VAR_4;
  FUNC_4(VAR_5, 1);
  FUNC_5(VAR_5);

  VAR_9 = VAR_0;
  goto done;
 }

 VAR_9 = FUNC_1(VAR_6, VAR_5, VAR_7, VAR_8);






 if (VAR_9 == VAR_1) {
  VAR_9 = 0;
  (void) FUNC_7(FUNC_0(), VAR_5,
      VAR_3, VAR_2);
 }

 if (VAR_9 != 0) {






  VAR_5->so_state &= ~VAR_4;
  FUNC_4(VAR_5, 1);
  FUNC_5(VAR_5);

 } else {
  FUNC_4(VAR_5, 1);
 }
done:

 FUNC_2(VAR_8);
 FUNC_2(VAR_7);
 return (VAR_9);
}
