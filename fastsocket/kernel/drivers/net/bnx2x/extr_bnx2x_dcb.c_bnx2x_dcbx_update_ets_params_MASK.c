
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enabled; } ;
struct TYPE_4__ {TYPE_1__ ets; } ;
struct bnx2x {int dcbx_error; TYPE_2__ dcbx_port_params; int link_vars; int link_params; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*,int ) ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(struct bnx2x *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_3, VAR_2) &&
        FUNC_1(FUNC_3(VAR_3, VAR_2),
           1 << VAR_1);

 FUNC_6(&VAR_3->link_params, &VAR_3->link_vars);

 if (!VAR_3->dcbx_port_params.ets.enabled ||
     ((VAR_3->dcbx_error & VAR_0) && !VAR_4))
  return;

 if (FUNC_0(VAR_3))
  FUNC_5(VAR_3);
 else
  FUNC_4(VAR_3);
}
