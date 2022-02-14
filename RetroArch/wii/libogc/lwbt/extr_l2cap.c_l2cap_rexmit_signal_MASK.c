
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l2cap_sig {TYPE_1__* p; } ;
struct l2cap_pcb {int remote_bdaddr; } ;
typedef int err_t ;
struct TYPE_2__ {int tot_len; } ;


 int FUNC_0 (int *,TYPE_1__*,int ) ;

err_t FUNC_1(struct l2cap_pcb *VAR_0, struct l2cap_sig *VAR_1)
{
 err_t VAR_2;


 VAR_2 = FUNC_0(&(VAR_0->remote_bdaddr), VAR_1->p, VAR_1->p->tot_len);

 return VAR_2;
}
