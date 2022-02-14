
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int so_state; struct protosw* so_proto; } ;
struct protosw {TYPE_1__* pr_usrreqs; } ;
struct TYPE_2__ {int (* pru_shutdown ) (struct socket*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct socket*,int ,int ) ;
 int FUNC_2 (struct socket*,int ,int*) ;
 int VAR_8 ;
 int FUNC_3 (struct socket*) ;
 int FUNC_4 (struct socket*) ;

int
FUNC_5(struct socket *VAR_9, int VAR_10)
{
 struct protosw *VAR_11 = VAR_9->so_proto;
 int VAR_12 = 0;

 FUNC_2(VAR_9, VAR_8, &VAR_10);

 if (VAR_10 != VAR_5) {
  if ((VAR_9->so_state & VAR_6) != 0) {

   VAR_12 = VAR_1;
   goto done;
  }
  FUNC_3(VAR_9);
  FUNC_1(VAR_9, 0, VAR_2);
 }
 if (VAR_10 != VAR_4) {
  if ((VAR_9->so_state & VAR_7) != 0) {

   VAR_12 = VAR_1;
   goto done;
  }
  VAR_12 = (*VAR_11->pr_usrreqs->pru_shutdown)(VAR_9);
  FUNC_1(VAR_9, 0, VAR_3);
 }
done:
 FUNC_0(VAR_0, VAR_10, 1, 0, 0, 0);
 return (VAR_12);
}
