
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ qlen; } ;
struct fcoe_port {int lport; TYPE_1__ fcoe_pending_queue; } ;


 int FUNC_0 (int ,struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct fcoe_port *VAR_0, struct sk_buff *VAR_1)
{
 if (VAR_0->fcoe_pending_queue.qlen)
  FUNC_0(VAR_0->lport, VAR_1);
 else if (FUNC_1(VAR_1))
  FUNC_0(VAR_0->lport, VAR_1);
}
