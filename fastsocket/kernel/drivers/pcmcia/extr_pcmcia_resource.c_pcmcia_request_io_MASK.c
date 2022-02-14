
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcmcia_socket {int state; } ;
struct pcmcia_device {int _io; TYPE_2__* function_config; struct pcmcia_socket* socket; } ;
struct TYPE_4__ {int Attributes1; int Attributes2; int NumPorts1; int BasePort1; int IOAddrLines; int NumPorts2; int BasePort2; } ;
typedef TYPE_1__ io_req_t ;
struct TYPE_5__ {int state; TYPE_1__ io; } ;
typedef TYPE_2__ config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct pcmcia_socket*,int,int *,int ,int ) ;
 int FUNC_1 (struct pcmcia_socket*,int,char*) ;
 int FUNC_2 (struct pcmcia_socket*,int ,int ) ;

int FUNC_3(struct pcmcia_device *VAR_9, io_req_t *VAR_10)
{
 struct pcmcia_socket *VAR_11 = VAR_9->socket;
 config_t *VAR_12;

 if (!(VAR_11->state & VAR_8))
  return -VAR_5;

 if (!VAR_10)
  return -VAR_4;
 VAR_12 = VAR_9->function_config;
 if (VAR_12->state & VAR_1)
  return -VAR_2;
 if (VAR_12->state & VAR_0) {
  FUNC_1(VAR_11, 0, "IO already configured\n");
  return -VAR_3;
 }
 if (VAR_10->Attributes1 & (VAR_7 | VAR_6)) {
  FUNC_1(VAR_11, 0, "bad attribute setting for IO region 1\n");
  return -VAR_4;
 }
 if ((VAR_10->NumPorts2 > 0) &&
     (VAR_10->Attributes2 & (VAR_7 | VAR_6))) {
  FUNC_1(VAR_11, 0, "bad attribute setting for IO region 2\n");
  return -VAR_4;
 }

 FUNC_1(VAR_11, 1, "trying to allocate resource 1\n");
 if (FUNC_0(VAR_11, VAR_10->Attributes1, &VAR_10->BasePort1,
      VAR_10->NumPorts1, VAR_10->IOAddrLines)) {
  FUNC_1(VAR_11, 0, "allocation of resource 1 failed\n");
  return -VAR_3;
 }

 if (VAR_10->NumPorts2) {
  FUNC_1(VAR_11, 1, "trying to allocate resource 2\n");
  if (FUNC_0(VAR_11, VAR_10->Attributes2, &VAR_10->BasePort2,
       VAR_10->NumPorts2, VAR_10->IOAddrLines)) {
   FUNC_1(VAR_11, 0, "allocation of resource 2 failed\n");
   FUNC_2(VAR_11, VAR_10->BasePort1, VAR_10->NumPorts1);
   return -VAR_3;
  }
 }

 VAR_12->io = *VAR_10;
 VAR_12->state |= VAR_0;
 VAR_9->_io = 1;
 return 0;
}
