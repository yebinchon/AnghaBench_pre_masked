
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pcmcia_socket {int dummy; } ;
struct pcmcia_device {scalar_t__ _io; TYPE_3__* function_config; struct pcmcia_socket* socket; } ;
struct TYPE_6__ {scalar_t__ BasePort1; scalar_t__ NumPorts1; scalar_t__ BasePort2; scalar_t__ NumPorts2; } ;
typedef TYPE_2__ io_req_t ;
struct TYPE_5__ {scalar_t__ BasePort1; scalar_t__ NumPorts1; scalar_t__ BasePort2; scalar_t__ NumPorts2; } ;
struct TYPE_7__ {int state; TYPE_1__ io; } ;
typedef TYPE_3__ config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcmcia_socket*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_2, io_req_t *VAR_3)
{
 struct pcmcia_socket *VAR_4 = VAR_2->socket;
 config_t *VAR_5 = VAR_2->function_config;

 if (!VAR_2->_io )
  return -VAR_1;

 VAR_2->_io = 0;

 if ((VAR_5->io.BasePort1 != VAR_3->BasePort1) ||
     (VAR_5->io.NumPorts1 != VAR_3->NumPorts1) ||
     (VAR_5->io.BasePort2 != VAR_3->BasePort2) ||
     (VAR_5->io.NumPorts2 != VAR_3->NumPorts2))
  return -VAR_1;

 VAR_5->state &= ~VAR_0;

 FUNC_0(VAR_4, VAR_3->BasePort1, VAR_3->NumPorts1);
 if (VAR_3->NumPorts2)
  FUNC_0(VAR_4, VAR_3->BasePort2, VAR_3->NumPorts2);

 return 0;
}
