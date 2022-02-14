
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_flags; int so_flags1; int so_zone; int so_gencnt; int * so_msg_state; int so_cred; } ;
typedef int SInt64 ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct socket*,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct socket*) ;
 int FUNC_5 (struct socket*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct socket*) ;
 int FUNC_8 (struct socket*) ;
 int VAR_3 ;

void
FUNC_9(struct socket *VAR_4)
{
 FUNC_6(&VAR_4->so_cred);


 FUNC_8(VAR_4);






 if (VAR_4->so_flags & VAR_2) {
  FUNC_0(VAR_4->so_msg_state, VAR_0);
  VAR_4->so_msg_state = ((void*)0);
 }
 FUNC_3(VAR_4->so_msg_state == ((void*)0));

 VAR_4->so_gencnt = FUNC_2((SInt64 *)&VAR_3);





 if (VAR_4->so_flags1 & VAR_1) {
  FUNC_4(VAR_4);
 } else {
  FUNC_1(VAR_4, sizeof (*VAR_4), VAR_4->so_zone);
 }
}
