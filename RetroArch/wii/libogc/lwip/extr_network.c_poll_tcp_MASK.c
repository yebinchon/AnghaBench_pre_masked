
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_pcb {int dummy; } ;
struct netconn {scalar_t__ sem; scalar_t__ state; } ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static err_t FUNC_2(void *VAR_5,struct tcp_pcb *VAR_6)
{
 struct netconn *VAR_7 = (struct netconn*)VAR_5;

 FUNC_0(VAR_0, ("api_msg: poll_tcp\n"));
 if(VAR_7 && VAR_7->sem!=VAR_4 && (VAR_7->state==VAR_3 || VAR_7->state==VAR_2))
  FUNC_1(VAR_7->sem);

 return VAR_1;
}
