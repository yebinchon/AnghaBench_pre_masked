
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int intimer_lazy; int intimer_fast; int intimer_nodelay; } ;
struct inpcbinfo {TYPE_1__ ipi_timer_req; } ;




 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct inpcbinfo *VAR_3, u_int32_t VAR_4)
{

 FUNC_3(&VAR_2);
 VAR_1 = VAR_0;
 switch (VAR_4) {
 case 128:
  FUNC_0(&VAR_3->ipi_timer_req.intimer_nodelay, 1);
  FUNC_2();
  break;
 case 129:
  FUNC_0(&VAR_3->ipi_timer_req.intimer_fast, 1);
  FUNC_2();
  break;
 default:
  FUNC_0(&VAR_3->ipi_timer_req.intimer_lazy, 1);
  FUNC_1();
  break;
 }
 FUNC_4(&VAR_2);
}
