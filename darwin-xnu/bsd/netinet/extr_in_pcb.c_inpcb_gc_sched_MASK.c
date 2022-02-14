
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct TYPE_2__ {scalar_t__ intimer_nodelay; scalar_t__ intimer_fast; scalar_t__ intimer_lazy; } ;
struct inpcbinfo {TYPE_1__ ipi_gc_req; } ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct inpcbinfo *VAR_4, u_int32_t VAR_5)
{
 u_int32_t VAR_6;

 FUNC_3(&VAR_3);
 VAR_2 = VAR_1;
 VAR_6 = VAR_4->ipi_gc_req.intimer_nodelay +
  VAR_4->ipi_gc_req.intimer_fast;

 if (VAR_6 > VAR_0) {
  VAR_5 = 129;
 }

 switch (VAR_5) {
 case 128:
  FUNC_0(&VAR_4->ipi_gc_req.intimer_nodelay, 1);
  FUNC_2();
  break;
 case 129:
  FUNC_0(&VAR_4->ipi_gc_req.intimer_fast, 1);
  FUNC_2();
  break;
 default:
  FUNC_0(&VAR_4->ipi_gc_req.intimer_lazy, 1);
  FUNC_1();
  break;
 }
 FUNC_4(&VAR_3);
}
