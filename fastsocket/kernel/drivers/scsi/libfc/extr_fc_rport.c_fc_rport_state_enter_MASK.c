
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_rport_priv {int rp_state; scalar_t__ retries; } ;
typedef enum fc_rport_state { ____Placeholder_fc_rport_state } fc_rport_state ;



__attribute__((used)) static void FUNC_0(struct fc_rport_priv *VAR_0,
     enum fc_rport_state VAR_1)
{
 if (VAR_0->rp_state != VAR_1)
  VAR_0->retries = 0;
 VAR_0->rp_state = VAR_1;
}
