
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union pf_state_xport {int port; int spi; int call_id; } ;
struct TYPE_2__ {int * port; int op; } ;
union pf_rule_xport {TYPE_1__ range; int spi; int call_id; } ;
typedef int u_int8_t ;
 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

int
FUNC_1(u_int8_t VAR_1, u_int8_t VAR_2, union pf_rule_xport *VAR_3,
    union pf_state_xport *VAR_4)
{
 int VAR_5 = !0;

 if (VAR_4) {
  switch (VAR_1) {
  case 132:
   if (VAR_2 == VAR_0)
    VAR_5 = (VAR_3->call_id == VAR_4->call_id);
   break;

  case 133:
   VAR_5 = (VAR_3->spi == VAR_4->spi);
   break;

  case 129:
  case 128:
  case 131:
  case 130:
   if (VAR_3->range.op)
    VAR_5 = FUNC_0(VAR_3->range.op,
        VAR_3->range.port[0], VAR_3->range.port[1],
        VAR_4->port);
   break;

  default:
   break;
  }
 }

 return (VAR_5);
}
