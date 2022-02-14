
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int line; scalar_t__ irq; unsigned int uartclk; int fifosize; int flags; int iotype; int * ops; int * dev; int lock; scalar_t__ mapbase; } ;
struct TYPE_3__ {scalar_t__ rx_clock; scalar_t__ tx_clock; int ucc_num; scalar_t__ irq; int init_tx; int init_rx; int tx_bd_ring_len; int rx_bd_ring_len; scalar_t__ regs; } ;
struct uart_qe_port {unsigned int ucc_num; TYPE_2__ port; TYPE_1__ us_info; int tx_nrfifos; int rx_nrfifos; int wait_closing; int rx_fifosize; int tx_fifosize; struct device_node* np; } ;
struct resource {scalar_t__ start; } ;
struct qe_firmware_info {int id; } ;
struct of_device_id {int dummy; } ;
struct of_device {int dev; struct device_node* node; } ;
struct device_node {int dummy; } ;
typedef scalar_t__ phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int const VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,struct uart_qe_port*) ;
 int VAR_22 ;
 scalar_t__ FUNC_4 (struct device_node*,int ) ;
 int FUNC_5 (struct uart_qe_port*) ;
 struct uart_qe_port* FUNC_6 (int,int ) ;
 int FUNC_7 (struct device_node*,int ,struct resource*) ;
 struct device_node* FUNC_8 (int *,int *,char*) ;
 struct device_node* FUNC_9 (int *,char*) ;
 scalar_t__ FUNC_10 (struct device_node*,char*,int *) ;
 void* FUNC_11 (struct device_node*,char*,int *) ;
 void* FUNC_12 (char const*) ;
 struct qe_firmware_info* FUNC_13 () ;
 int VAR_23 ;
 int FUNC_14 (int ,int ,char*,int *,int ,int *,int ) ;
 unsigned int FUNC_15 (unsigned int*,unsigned int*) ;
 int VAR_24 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char*,char*,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_18 (int ,char*) ;
 int FUNC_19 (int *,TYPE_2__*) ;
 int VAR_25 ;
 int VAR_26 ;

__attribute__((used)) static int FUNC_20(struct of_device *VAR_27,
 const struct of_device_id *VAR_28)
{
 struct device_node *VAR_29 = VAR_27->node;
 const unsigned int *VAR_30;
 const char *VAR_31;
 struct uart_qe_port *VAR_32 = ((void*)0);
 struct resource VAR_33;
 int VAR_34;




 if (FUNC_10(VAR_29, "soft-uart", ((void*)0))) {
  FUNC_0(&VAR_27->dev, "using Soft-UART mode\n");
  VAR_24 = 1;
 }





 if (VAR_24) {
  struct qe_firmware_info *VAR_35;

  VAR_35 = FUNC_13();


  if (VAR_35 && FUNC_18(VAR_35->id, "Soft-UART")) {
   VAR_22 = 1;
  } else {
   char VAR_36[32];
   unsigned int VAR_37;
   unsigned int VAR_38;
   unsigned int VAR_39;

   VAR_37 = FUNC_15(&VAR_38, &VAR_39);
   if (!VAR_37) {
    FUNC_1(&VAR_27->dev, "unknown CPU model\n");
    return -VAR_3;
   }
   FUNC_17(VAR_36, "fsl_qe_ucode_uart_%u_%u%u.bin",
    VAR_37, VAR_38, VAR_39);

   FUNC_2(&VAR_27->dev, "waiting for firmware %s\n",
    VAR_36);
   VAR_34 = FUNC_14(VAR_13,
    VAR_4, VAR_36, &VAR_27->dev,
    VAR_5, &VAR_27->dev, VAR_25);
   if (VAR_34) {
    FUNC_1(&VAR_27->dev,
     "could not load firmware %s\n",
     VAR_36);
    return VAR_34;
   }
  }
 }

 VAR_32 = FUNC_6(sizeof(struct uart_qe_port), VAR_5);
 if (!VAR_32) {
  FUNC_1(&VAR_27->dev, "can't allocate QE port structure\n");
  return -VAR_2;
 }


 VAR_34 = FUNC_7(VAR_29, 0, &VAR_33);
 if (VAR_34) {
  FUNC_1(&VAR_27->dev, "missing 'reg' property in device tree\n");
  FUNC_5(VAR_32);
  return VAR_34;
 }
 if (!VAR_33.start) {
  FUNC_1(&VAR_27->dev, "invalid 'reg' property in device tree\n");
  FUNC_5(VAR_32);
  return -VAR_0;
 }
 VAR_32->port.mapbase = VAR_33.start;



 VAR_30 = FUNC_11(VAR_29, "cell-index", ((void*)0));
 if (!VAR_30) {
  VAR_30 = FUNC_11(VAR_29, "device-id", ((void*)0));
  if (!VAR_30) {
   FUNC_5(VAR_32);
   FUNC_1(&VAR_27->dev, "UCC is unspecified in "
    "device tree\n");
   return -VAR_0;
  }
 }

 if ((*VAR_30 < 1) || (*VAR_30 > VAR_16)) {
  FUNC_1(&VAR_27->dev, "no support for UCC%u\n", *VAR_30);
  FUNC_5(VAR_32);
  return -VAR_1;
 }
 VAR_32->ucc_num = *VAR_30 - 1;
 VAR_31 = FUNC_11(VAR_29, "rx-clock-name", ((void*)0));
 if (!VAR_31) {
  FUNC_1(&VAR_27->dev, "missing rx-clock-name in device tree\n");
  FUNC_5(VAR_32);
  return -VAR_1;
 }

 VAR_32->us_info.rx_clock = FUNC_12(VAR_31);
 if ((VAR_32->us_info.rx_clock < VAR_7) ||
     (VAR_32->us_info.rx_clock > VAR_8)) {
  FUNC_1(&VAR_27->dev, "rx-clock-name must be a BRG for UART\n");
  FUNC_5(VAR_32);
  return -VAR_1;
 }





 VAR_31 = FUNC_11(VAR_29, "tx-clock-name", ((void*)0));
 if (!VAR_31) {
  FUNC_1(&VAR_27->dev, "missing tx-clock-name in device tree\n");
  FUNC_5(VAR_32);
  return -VAR_1;
 }
 VAR_32->us_info.tx_clock = FUNC_12(VAR_31);

 if ((VAR_32->us_info.tx_clock < VAR_7) ||
     (VAR_32->us_info.tx_clock > VAR_8)) {
  FUNC_1(&VAR_27->dev, "tx-clock-name must be a BRG for UART\n");
  FUNC_5(VAR_32);
  return -VAR_1;
 }


 VAR_30 = FUNC_11(VAR_29, "port-number", ((void*)0));
 if (!VAR_30) {
  FUNC_1(&VAR_27->dev, "missing port-number in device tree\n");
  FUNC_5(VAR_32);
  return -VAR_0;
 }
 VAR_32->port.line = *VAR_30;
 if (VAR_32->port.line >= VAR_17) {
  FUNC_1(&VAR_27->dev, "port-number must be 0-%u\n",
   VAR_17 - 1);
  FUNC_5(VAR_32);
  return -VAR_0;
 }

 VAR_32->port.irq = FUNC_4(VAR_29, 0);
 if (VAR_32->port.irq == VAR_6) {
  FUNC_1(&VAR_27->dev, "could not map IRQ for UCC%u\n",
         VAR_32->ucc_num + 1);
  FUNC_5(VAR_32);
  return -VAR_0;
 }





 VAR_29 = FUNC_8(((void*)0), ((void*)0), "fsl,qe");
 if (!VAR_29) {
  VAR_29 = FUNC_9(((void*)0), "qe");
  if (!VAR_29) {
   FUNC_1(&VAR_27->dev, "could not find 'qe' node\n");
   FUNC_5(VAR_32);
   return -VAR_0;
  }
 }

 VAR_30 = FUNC_11(VAR_29, "brg-frequency", ((void*)0));
 if (!VAR_30) {
  FUNC_1(&VAR_27->dev,
         "missing brg-frequency in device tree\n");
  FUNC_5(VAR_32);
  return -VAR_0;
 }

 if (*VAR_30)
  VAR_32->port.uartclk = *VAR_30;
 else {





  VAR_30 = FUNC_11(VAR_29, "bus-frequency", ((void*)0));
  if (!VAR_30) {
   FUNC_1(&VAR_27->dev,
    "missing QE bus-frequency in device tree\n");
   FUNC_5(VAR_32);
   return -VAR_0;
  }
  if (*VAR_30)
   VAR_32->port.uartclk = *VAR_30 / 2;
  else {
   FUNC_1(&VAR_27->dev,
    "invalid QE bus-frequency in device tree\n");
   FUNC_5(VAR_32);
   return -VAR_0;
  }
 }

 FUNC_16(&VAR_32->port.lock);
 VAR_32->np = VAR_29;
 VAR_32->port.dev = &VAR_27->dev;
 VAR_32->port.ops = &VAR_23;
 VAR_32->port.iotype = VAR_21;

 VAR_32->tx_nrfifos = VAR_15;
 VAR_32->tx_fifosize = VAR_14;
 VAR_32->rx_nrfifos = VAR_10;
 VAR_32->rx_fifosize = VAR_9;

 VAR_32->wait_closing = VAR_18;
 VAR_32->port.fifosize = 512;
 VAR_32->port.flags = VAR_19 | VAR_20;

 VAR_32->us_info.ucc_num = VAR_32->ucc_num;
 VAR_32->us_info.regs = (phys_addr_t) VAR_33.start;
 VAR_32->us_info.irq = VAR_32->port.irq;

 VAR_32->us_info.rx_bd_ring_len = VAR_32->rx_nrfifos;
 VAR_32->us_info.tx_bd_ring_len = VAR_32->tx_nrfifos;


 VAR_32->us_info.init_tx = 1;
 VAR_32->us_info.init_rx = 1;





 VAR_34 = FUNC_19(&VAR_26, &VAR_32->port);
 if (VAR_34) {
  FUNC_1(&VAR_27->dev, "could not add /dev/ttyQE%u\n",
         VAR_32->port.line);
  FUNC_5(VAR_32);
  return VAR_34;
 }

 FUNC_3(&VAR_27->dev, VAR_32);

 FUNC_2(&VAR_27->dev, "UCC%u assigned to /dev/ttyQE%u\n",
  VAR_32->ucc_num + 1, VAR_32->port.line);


 FUNC_0(&VAR_27->dev, "mknod command is 'mknod /dev/ttyQE%u c %u %u'\n",
        VAR_32->port.line, VAR_11,
        VAR_12 + VAR_32->port.line);

 return 0;
}
