
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int start; } ;
struct TYPE_15__ {struct device* parent; } ;
struct TYPE_13__ {int features; unsigned long io_offset; int sock; TYPE_8__ dev; int pci_irq; int map_size; scalar_t__ irq_mask; int * resource_ops; int owner; int * ops; } ;
struct TYPE_14__ {unsigned long data; scalar_t__ expires; int function; } ;
struct soc_pcmcia_socket {TYPE_1__ res_skt; TYPE_1__ res_io; TYPE_1__ res_mem; TYPE_1__ res_attr; int * virt_io; int node; TYPE_4__ socket; TYPE_7__ poll_timer; int status; int irq; struct pcmcia_low_level* ops; struct device* dev; } ;
struct skt_dev_info {int nskt; struct soc_pcmcia_socket* skt; } ;
struct pcmcia_low_level {int (* hw_init ) (struct soc_pcmcia_socket*) ;int (* hw_shutdown ) (struct soc_pcmcia_socket*) ;int (* set_timing ) (struct soc_pcmcia_socket*) ;int owner; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*) ;
 int VAR_5 ;
 int FUNC_3 (struct device*,struct skt_dev_info*) ;
 int FUNC_4 (TYPE_8__*,int *) ;
 int FUNC_5 (TYPE_8__*,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_7__*) ;
 TYPE_1__ VAR_6 ;
 int * FUNC_8 (int ,int) ;
 int FUNC_9 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (struct skt_dev_info*) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int VAR_8 ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*,TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_20 (struct soc_pcmcia_socket*) ;
 int FUNC_21 () ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_22 (struct soc_pcmcia_socket*) ;
 int FUNC_23 (struct soc_pcmcia_socket*) ;
 int FUNC_24 (struct soc_pcmcia_socket*) ;

int FUNC_25(struct device *VAR_13, struct pcmcia_low_level *VAR_14,
    struct skt_dev_info *VAR_15)
{
 struct soc_pcmcia_socket *VAR_16;
 int VAR_17, VAR_18;

 FUNC_14(&VAR_12);




 for (VAR_18 = 0; VAR_18 < VAR_15->nskt; VAR_18++) {
  VAR_16 = &VAR_15->skt[VAR_18];

  VAR_16->socket.ops = &VAR_9;
  VAR_16->socket.owner = VAR_14->owner;
  VAR_16->socket.dev.parent = VAR_13;

  FUNC_7(&VAR_16->poll_timer);
  VAR_16->poll_timer.function = VAR_10;
  VAR_16->poll_timer.data = (unsigned long)VAR_16;
  VAR_16->poll_timer.expires = VAR_7 + VAR_2;

  VAR_16->dev = VAR_13;
  VAR_16->ops = VAR_14;

  VAR_17 = FUNC_19(&VAR_6, &VAR_16->res_skt);
  if (VAR_17)
   goto out_err_1;

  VAR_17 = FUNC_19(&VAR_16->res_skt, &VAR_16->res_io);
  if (VAR_17)
   goto out_err_2;

  VAR_17 = FUNC_19(&VAR_16->res_skt, &VAR_16->res_mem);
  if (VAR_17)
   goto out_err_3;

  VAR_17 = FUNC_19(&VAR_16->res_skt, &VAR_16->res_attr);
  if (VAR_17)
   goto out_err_4;

  VAR_16->virt_io = FUNC_8(VAR_16->res_io.start, 0x10000);
  if (VAR_16->virt_io == ((void*)0)) {
   VAR_17 = -VAR_0;
   goto out_err_5;
  }

  if (FUNC_13(&VAR_11))
   FUNC_21();

  FUNC_11(&VAR_16->node, &VAR_11);






  VAR_14->set_timing(VAR_16);

  VAR_17 = VAR_14->hw_init(VAR_16);
  if (VAR_17)
   goto out_err_6;

  VAR_16->socket.features = VAR_4|VAR_3;
  VAR_16->socket.resource_ops = &VAR_8;
  VAR_16->socket.irq_mask = 0;
  VAR_16->socket.map_size = VAR_1;
  VAR_16->socket.pci_irq = VAR_16->irq;
  VAR_16->socket.io_offset = (unsigned long)VAR_16->virt_io;

  VAR_16->status = FUNC_20(VAR_16);

  VAR_17 = FUNC_16(&VAR_16->socket);
  if (VAR_17)
   goto out_err_7;

  FUNC_0(VAR_16->socket.sock != VAR_18);

  FUNC_1(&VAR_16->poll_timer);

  VAR_17 = FUNC_4(&VAR_16->socket.dev, &VAR_5);
  if (VAR_17)
   goto out_err_8;
 }

 FUNC_3(VAR_13, VAR_15);
 VAR_17 = 0;
 goto out;

 do {
  VAR_16 = &VAR_15->skt[VAR_18];

  FUNC_5(&VAR_16->socket.dev, &VAR_5);
 out_err_8:
  FUNC_2(&VAR_16->poll_timer);
  FUNC_17(&VAR_16->socket);

 out_err_7:
  FUNC_6();

  VAR_14->hw_shutdown(VAR_16);
 out_err_6:
   FUNC_12(&VAR_16->node);
  FUNC_9(VAR_16->virt_io);
 out_err_5:
  FUNC_18(&VAR_16->res_attr);
 out_err_4:
  FUNC_18(&VAR_16->res_mem);
 out_err_3:
  FUNC_18(&VAR_16->res_io);
 out_err_2:
  FUNC_18(&VAR_16->res_skt);
 out_err_1:
  VAR_18--;
 } while (VAR_18 > 0);

 FUNC_10(VAR_15);

 out:
 FUNC_15(&VAR_12);
 return VAR_17;
}
