
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tm_active; } ;
struct TYPE_3__ {TYPE_2__ rmt_timer0; } ;
struct s_smc {TYPE_1__ r; } ;


 int FUNC_0 (struct s_smc*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct s_smc *VAR_0)
{
 if (VAR_0->r.rmt_timer0.tm_active)
  FUNC_0(VAR_0,&VAR_0->r.rmt_timer0) ;
}
