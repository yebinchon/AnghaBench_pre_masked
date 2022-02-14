
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct route {int ro_rt; } ;
struct inpcb {int inp_socket; struct route inp_route; } ;
struct TYPE_2__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct route*) ;
 scalar_t__ FUNC_1 (struct route*) ;
 int FUNC_2 (struct route*,struct route*,int) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct inpcb *VAR_1, struct route *VAR_2)
{
 struct route *VAR_3 = &VAR_1->inp_route;

 FUNC_4(VAR_1->inp_socket);





 if (FUNC_1(VAR_3) || FUNC_3(VAR_3->ro_rt)->sa_family != VAR_0)
  FUNC_0(VAR_3);

 FUNC_2(VAR_2, VAR_3, sizeof (*VAR_2));
}
