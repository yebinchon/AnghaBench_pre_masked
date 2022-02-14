
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_2__ {int port; int call_id; int spi; } ;
struct pf_state_host {TYPE_1__ xport; int addr; } ;
typedef int sa_family_t ;






 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void
FUNC_4(struct pf_state_host *VAR_1, sa_family_t VAR_2, int VAR_3,
 u_int8_t VAR_4)
{
 FUNC_2(&VAR_1->addr, VAR_2);

 switch (VAR_3) {
 case 131:
  if (VAR_1->xport.spi)
   FUNC_3("[%08x]", FUNC_0(VAR_1->xport.spi));
  break;

 case 130:
  if (VAR_4 == VAR_0)
   FUNC_3("[%u]", FUNC_1(VAR_1->xport.call_id));
  break;

 case 129:
 case 128:
  FUNC_3("[%u]", FUNC_1(VAR_1->xport.port));
  break;

 default:
  break;
 }
}
