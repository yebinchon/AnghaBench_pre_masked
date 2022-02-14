
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int close_delay; int closing_wait; int * ops; } ;
struct slgt_info {int max_frame_size; int base_clock; int adapter_num; int port_num; int init_error; int irq_flags; int bus_type; int phys_reg_addr; int irq_level; struct pci_dev* pdev; int rx_timer; int tx_timer; int idle_mode; int params; int netlock; int event_wait_q; int status_event_wait_q; TYPE_1__ port; int rbuf_fill_level; int task; int magic; } ;
struct pci_dev {int irq; } ;
typedef int MGSL_PARAMS ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 struct slgt_info* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int VAR_10 ;
 int FUNC_6 (int *,int ,unsigned long) ;
 int VAR_11 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_12 ;

__attribute__((used)) static struct slgt_info *FUNC_9(int VAR_13, int VAR_14, struct pci_dev *VAR_15)
{
 struct slgt_info *VAR_16;

 VAR_16 = FUNC_3(sizeof(struct slgt_info), VAR_1);

 if (!VAR_16) {
  FUNC_0(("%s device alloc failed adapter=%d port=%d\n",
   VAR_9, VAR_13, VAR_14));
 } else {
  FUNC_8(&VAR_16->port);
  VAR_16->port.ops = &VAR_11;
  VAR_16->magic = VAR_6;
  FUNC_1(&VAR_16->task, VAR_7);
  VAR_16->max_frame_size = 4096;
  VAR_16->base_clock = 14745600;
  VAR_16->rbuf_fill_level = VAR_0;
  VAR_16->port.close_delay = 5*VAR_3/10;
  VAR_16->port.closing_wait = 30*VAR_3;
  FUNC_2(&VAR_16->status_event_wait_q);
  FUNC_2(&VAR_16->event_wait_q);
  FUNC_7(&VAR_16->netlock);
  FUNC_4(&VAR_16->params,&VAR_8,sizeof(MGSL_PARAMS));
  VAR_16->idle_mode = VAR_2;
  VAR_16->adapter_num = VAR_13;
  VAR_16->port_num = VAR_14;

  FUNC_6(&VAR_16->tx_timer, VAR_12, (unsigned long)VAR_16);
  FUNC_6(&VAR_16->rx_timer, VAR_10, (unsigned long)VAR_16);


  VAR_16->pdev = VAR_15;
  VAR_16->irq_level = VAR_15->irq;
  VAR_16->phys_reg_addr = FUNC_5(VAR_15,0);

  VAR_16->bus_type = VAR_5;
  VAR_16->irq_flags = VAR_4;

  VAR_16->init_error = -1;
 }

 return VAR_16;
}
