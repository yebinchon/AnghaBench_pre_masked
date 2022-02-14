
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {TYPE_1__* connect_state; } ;
struct TYPE_2__ {scalar_t__ tunnel_state; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(struct connectdata *VAR_1)
{
  return !VAR_1->connect_state ||
    (VAR_1->connect_state->tunnel_state == VAR_0);
}
