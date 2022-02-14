
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehea_port_res {int recv_mr; int send_mr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct ehea_port_res *VAR_1)
{
 if ((FUNC_0(&VAR_1->send_mr))
     || (FUNC_0(&VAR_1->recv_mr)))
  return -VAR_0;
 else
  return 0;
}
