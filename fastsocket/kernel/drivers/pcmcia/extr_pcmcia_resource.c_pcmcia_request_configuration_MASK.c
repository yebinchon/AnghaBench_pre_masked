
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_14__ {int flags; scalar_t__ io_irq; int Vpp; } ;
struct TYPE_18__ {scalar_t__ AssignedIRQ; } ;
struct pcmcia_socket {int state; int functions; TYPE_3__* io; TYPE_5__* ops; int lock_count; TYPE_11__ socket; TYPE_4__ irq; int dev; } ;
struct pcmcia_device {int _locked; TYPE_8__* function_config; struct pcmcia_socket* socket; } ;
struct TYPE_21__ {int map; int stop; int start; int flags; int speed; } ;
typedef TYPE_7__ pccard_io_map ;
struct TYPE_15__ {int BasePort1; int NumPorts1; int NumPorts2; } ;
struct TYPE_20__ {int Attributes; } ;
struct TYPE_22__ {int state; int IntType; int Attributes; int ConfigBase; int CardValues; int Copy; int Option; int Status; int Pin; int ExtStatus; TYPE_1__ io; TYPE_6__ irq; } ;
typedef TYPE_8__ config_t ;
struct TYPE_23__ {int IntType; int Attributes; int ConfigBase; int Present; int Copy; int ConfigIndex; int Status; int Pin; int ExtStatus; int Vpp; } ;
typedef TYPE_9__ config_req_t ;
struct TYPE_19__ {int (* set_io_map ) (struct pcmcia_socket*,TYPE_7__*) ;scalar_t__ (* set_socket ) (struct pcmcia_socket*,TYPE_11__*) ;} ;
struct TYPE_17__ {int Config; TYPE_2__* res; } ;
struct TYPE_16__ {int flags; int end; int start; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;


 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_0 (int ,int *,char*) ;
 int FUNC_1 (struct pcmcia_socket*,int ,char*) ;
 int VAR_45 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct pcmcia_socket*,int,int,int,int*) ;
 scalar_t__ FUNC_4 (struct pcmcia_socket*,TYPE_11__*) ;
 scalar_t__ FUNC_5 (struct pcmcia_socket*,TYPE_11__*) ;
 int FUNC_6 (struct pcmcia_socket*,TYPE_7__*) ;

int FUNC_7(struct pcmcia_device *VAR_46,
     config_req_t *VAR_47)
{
 int VAR_48;
 u_int VAR_49;
 struct pcmcia_socket *VAR_50 = VAR_46->socket;
 config_t *VAR_51;
 pccard_io_map VAR_52;

 if (!(VAR_50->state & VAR_40))
  return -VAR_22;

 if (VAR_47->IntType & VAR_23) {
  FUNC_1(VAR_46->socket, 0, "IntType may not be INT_CARDBUS\n");
  return -VAR_21;
 }
 VAR_51 = VAR_46->function_config;
 if (VAR_51->state & VAR_10)
  return -VAR_20;


 VAR_50->socket.Vpp = VAR_47->Vpp;
 if (VAR_50->ops->set_socket(VAR_50, &VAR_50->socket)) {
  FUNC_0(VAR_28, &VAR_50->dev,
      "Unable to set socket state\n");
  return -VAR_21;
 }


 VAR_51->IntType = VAR_47->IntType;
 VAR_51->Attributes = VAR_47->Attributes;
 if (VAR_47->IntType & VAR_24)
  VAR_50->socket.flags |= VAR_42;
 if (VAR_47->IntType & VAR_25)
  VAR_50->socket.flags |= VAR_44 | VAR_42;
 if (VAR_47->Attributes & VAR_11)
  VAR_50->socket.flags |= VAR_41;
 if (VAR_47->Attributes & VAR_13)
  VAR_50->socket.flags |= VAR_43;
 if (VAR_47->Attributes & VAR_12)
  VAR_50->socket.io_irq = VAR_50->irq.AssignedIRQ;
 else
  VAR_50->socket.io_irq = 0;
 VAR_50->ops->set_socket(VAR_50, &VAR_50->socket);
 VAR_50->lock_count++;


 VAR_49 = VAR_51->ConfigBase = VAR_47->ConfigBase;
 VAR_51->CardValues = VAR_47->Present;
 if (VAR_47->Present & VAR_33) {
  VAR_51->Copy = VAR_47->Copy;
  FUNC_3(VAR_50, 1, (VAR_49 + VAR_7)>>1, 1, &VAR_51->Copy);
 }
 if (VAR_47->Present & VAR_37) {
  if (VAR_50->functions == 1) {
   VAR_51->Option = VAR_47->ConfigIndex & VAR_15;
  } else {
   VAR_51->Option = VAR_47->ConfigIndex & VAR_19;
   VAR_51->Option |= VAR_16|VAR_17;
   if (VAR_47->Present & VAR_35)
    VAR_51->Option |= VAR_14;
  }
  if (VAR_51->state & VAR_9)
   if (!(VAR_51->irq.Attributes & VAR_27))
    VAR_51->Option |= VAR_18;
  FUNC_3(VAR_50, 1, (VAR_49 + VAR_1)>>1, 1, &VAR_51->Option);
  FUNC_2(40);
 }
 if (VAR_47->Present & VAR_39) {
  VAR_51->Status = VAR_47->Status;
  FUNC_3(VAR_50, 1, (VAR_49 + VAR_0)>>1, 1, &VAR_51->Status);
 }
 if (VAR_47->Present & VAR_38) {
  VAR_51->Pin = VAR_47->Pin;
  FUNC_3(VAR_50, 1, (VAR_49 + VAR_6)>>1, 1, &VAR_51->Pin);
 }
 if (VAR_47->Present & VAR_34) {
  VAR_51->ExtStatus = VAR_47->ExtStatus;
  FUNC_3(VAR_50, 1, (VAR_49 + VAR_2)>>1, 1, &VAR_51->ExtStatus);
 }
 if (VAR_47->Present & VAR_35) {
  u_char VAR_53 = VAR_51->io.BasePort1 & 0xff;
  FUNC_3(VAR_50, 1, (VAR_49 + VAR_3)>>1, 1, &VAR_53);
  VAR_53 = (VAR_51->io.BasePort1 >> 8) & 0xff;
  FUNC_3(VAR_50, 1, (VAR_49 + VAR_4)>>1, 1, &VAR_53);
 }
 if (VAR_47->Present & VAR_36) {
  u_char VAR_54 = VAR_51->io.NumPorts1 + VAR_51->io.NumPorts2 - 1;
  FUNC_3(VAR_50, 1, (VAR_49 + VAR_5)>>1, 1, &VAR_54);
 }


 if (VAR_51->state & VAR_8) {
  VAR_52.speed = VAR_45;
  for (VAR_48 = 0; VAR_48 < VAR_32; VAR_48++)
   if (VAR_50->io[VAR_48].res) {
    VAR_52.map = VAR_48;
    VAR_52.flags = VAR_30;
    switch (VAR_50->io[VAR_48].res->flags & VAR_26) {
    case 129:
     VAR_52.flags |= VAR_29; break;
    case 128:
     VAR_52.flags |= VAR_31; break;
    default:
     break;
    }
    VAR_52.start = VAR_50->io[VAR_48].res->start;
    VAR_52.stop = VAR_50->io[VAR_48].res->end;
    VAR_50->ops->set_io_map(VAR_50, &VAR_52);
    VAR_50->io[VAR_48].Config++;
   }
 }

 VAR_51->state |= VAR_10;
 VAR_46->_locked = 1;
 return 0;
}
