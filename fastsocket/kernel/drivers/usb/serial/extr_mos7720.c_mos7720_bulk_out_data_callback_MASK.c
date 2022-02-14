
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int status; struct moschip_port* context; } ;
struct tty_struct {int dummy; } ;
struct moschip_port {scalar_t__ open; TYPE_1__* port; } ;
struct TYPE_2__ {int port; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct tty_struct*) ;
 struct tty_struct* FUNC_2 (int *) ;
 int FUNC_3 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_0)
{
 struct moschip_port *VAR_1;
 struct tty_struct *VAR_2;
 int VAR_3 = VAR_0->status;

 if (VAR_3) {
  FUNC_0("nonzero write bulk status received:%d", VAR_3);
  return;
 }

 VAR_1 = VAR_0->context;
 if (!VAR_1) {
  FUNC_0("NULL mos7720_port pointer");
  return ;
 }

 FUNC_0("Entering .........");

 VAR_2 = FUNC_2(&VAR_1->port->port);

 if (VAR_2 && VAR_1->open)
  FUNC_3(VAR_2);
 FUNC_1(VAR_2);
}
