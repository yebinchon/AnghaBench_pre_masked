
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_13__ {scalar_t__ Vpp; scalar_t__ io_irq; } ;
struct TYPE_14__ {scalar_t__ AssignedIRQ; } ;
struct pcmcia_socket {int state; TYPE_4__* ops; TYPE_3__* io; int dev; TYPE_10__ socket; TYPE_1__ irq; } ;
struct pcmcia_device {TYPE_7__* function_config; struct pcmcia_socket* socket; } ;
struct TYPE_18__ {int member_4; int map; int flags; int stop; int start; int speed; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_5__ pccard_io_map ;
struct TYPE_19__ {int Attributes; scalar_t__ Vpp1; scalar_t__ Vpp2; } ;
typedef TYPE_6__ modconf_t ;
struct TYPE_20__ {int state; int Attributes; } ;
typedef TYPE_7__ config_t ;
struct TYPE_17__ {int (* set_io_map ) (struct pcmcia_socket*,TYPE_5__*) ;scalar_t__ (* set_socket ) (struct pcmcia_socket*,TYPE_10__*) ;} ;
struct TYPE_16__ {TYPE_2__* res; } ;
struct TYPE_15__ {int end; int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int *,char*) ;
 int FUNC_1 (struct pcmcia_socket*,int ,char*) ;
 int VAR_16 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct pcmcia_socket*,TYPE_10__*) ;
 scalar_t__ FUNC_4 (struct pcmcia_socket*,TYPE_10__*) ;
 int FUNC_5 (struct pcmcia_socket*,TYPE_5__*) ;
 int FUNC_6 (struct pcmcia_socket*,TYPE_5__*) ;

int FUNC_7(struct pcmcia_device *VAR_17,
    modconf_t *VAR_18)
{
 struct pcmcia_socket *VAR_19;
 config_t *VAR_20;

 VAR_19 = VAR_17->socket;
 VAR_20 = VAR_17->function_config;

 if (!(VAR_19->state & VAR_15))
  return -VAR_10;
 if (!(VAR_20->state & VAR_0))
  return -VAR_7;

 if (VAR_18->Attributes & VAR_3) {
  if (VAR_18->Attributes & VAR_1) {
   VAR_20->Attributes |= VAR_1;
   VAR_19->socket.io_irq = VAR_19->irq.AssignedIRQ;
  } else {
   VAR_20->Attributes &= ~VAR_1;
   VAR_19->socket.io_irq = 0;
  }
  VAR_19->ops->set_socket(VAR_19, &VAR_19->socket);
 }

 if (VAR_18->Attributes & VAR_4) {
  FUNC_1(VAR_19, 0, "changing Vcc is not allowed at this time\n");
  return -VAR_8;
 }


 if ((VAR_18->Attributes & VAR_5) &&
     (VAR_18->Attributes & VAR_6)) {
  if (VAR_18->Vpp1 != VAR_18->Vpp2) {
   FUNC_1(VAR_19, 0, "Vpp1 and Vpp2 must be the same\n");
   return -VAR_8;
  }
  VAR_19->socket.Vpp = VAR_18->Vpp1;
  if (VAR_19->ops->set_socket(VAR_19, &VAR_19->socket)) {
   FUNC_0(VAR_12, &VAR_19->dev,
       "Unable to set VPP\n");
   return -VAR_9;
  }
 } else if ((VAR_18->Attributes & VAR_5) ||
     (VAR_18->Attributes & VAR_6)) {
  FUNC_1(VAR_19, 0, "changing Vcc is not allowed at this time\n");
  return -VAR_8;
 }

 if (VAR_18->Attributes & VAR_2) {
  pccard_io_map VAR_21 = { 0, 0, 0, 0, 1 };
  pccard_io_map VAR_22;
  int VAR_23;

  VAR_22.speed = VAR_16;
  for (VAR_23 = 0; VAR_23 < VAR_14; VAR_23++) {
   if (!VAR_19->io[VAR_23].res)
    continue;
   VAR_21.map = VAR_23;
   VAR_22.map = VAR_23;

   VAR_22.flags = VAR_13 | VAR_11;
   VAR_22.start = VAR_19->io[VAR_23].res->start;
   VAR_22.stop = VAR_19->io[VAR_23].res->end;

   VAR_19->ops->set_io_map(VAR_19, &VAR_21);
   FUNC_2(40);
   VAR_19->ops->set_io_map(VAR_19, &VAR_22);
  }
 }

 return 0;
}
