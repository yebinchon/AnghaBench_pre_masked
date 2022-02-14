
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct qla_hw_data {int bars; int max_req_queues; int max_rsp_queues; int mqiobase; int msix_count; int pdev; void* iobase; scalar_t__ pio_address; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int*) ;
 scalar_t__ FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int ,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (int ,int ,int,char*,unsigned long long) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (int ,int ,int,char*,...) ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_12(struct qla_hw_data *VAR_14)
{
 resource_size_t VAR_15;
 uint16_t VAR_16;
 int VAR_17;

 if (FUNC_6(VAR_14->pdev, VAR_14->bars,
     VAR_4)) {
  FUNC_11(VAR_11, VAR_14->pdev, 0x0011,
      "Failed to reserve PIO/MMIO regions (%s), aborting.\n",
      FUNC_4(VAR_14->pdev));
  goto iospace_error_exit;
 }
 if (!(VAR_14->bars & 1))
  goto skip_pio;


 VAR_15 = FUNC_9(VAR_14->pdev, 0);
 if (FUNC_7(VAR_14->pdev, 0) & VAR_1) {
  if (FUNC_8(VAR_14->pdev, 0) < VAR_3) {
   FUNC_11(VAR_13, VAR_14->pdev, 0x0012,
       "Invalid pci I/O region size (%s).\n",
       FUNC_4(VAR_14->pdev));
   VAR_15 = 0;
  }
 } else {
  FUNC_11(VAR_13, VAR_14->pdev, 0x0013,
      "Region #0 no a PIO resource (%s).\n",
      FUNC_4(VAR_14->pdev));
  VAR_15 = 0;
 }
 VAR_14->pio_address = VAR_15;
 FUNC_10(VAR_9, VAR_14->pdev, 0x0014,
     "PIO address=%llu.\n",
     (unsigned long long)VAR_14->pio_address);

skip_pio:

 if (!(FUNC_7(VAR_14->pdev, 1) & VAR_2)) {
  FUNC_11(VAR_11, VAR_14->pdev, 0x0015,
      "Region #1 not an MMIO resource (%s), aborting.\n",
      FUNC_4(VAR_14->pdev));
  goto iospace_error_exit;
 }
 if (FUNC_8(VAR_14->pdev, 1) < VAR_3) {
  FUNC_11(VAR_11, VAR_14->pdev, 0x0016,
      "Invalid PCI mem region size (%s), aborting.\n",
      FUNC_4(VAR_14->pdev));
  goto iospace_error_exit;
 }

 VAR_14->iobase = FUNC_2(FUNC_9(VAR_14->pdev, 1), VAR_3);
 if (!VAR_14->iobase) {
  FUNC_11(VAR_11, VAR_14->pdev, 0x0017,
      "Cannot remap MMIO (%s), aborting.\n",
      FUNC_4(VAR_14->pdev));
  goto iospace_error_exit;
 }


 VAR_14->max_req_queues = VAR_14->max_rsp_queues = 1;
 if ((VAR_7 <= 1 && !VAR_8) ||
  (VAR_7 > 1 && VAR_8) ||
  (!FUNC_0(VAR_14) && !FUNC_1(VAR_14)))
  goto mqiobase_exit;

 VAR_14->mqiobase = FUNC_2(FUNC_9(VAR_14->pdev, 3),
   FUNC_8(VAR_14->pdev, 3));
 if (VAR_14->mqiobase) {
  FUNC_10(VAR_9, VAR_14->pdev, 0x0018,
      "MQIO Base=%p.\n", VAR_14->mqiobase);

  FUNC_5(VAR_14->pdev, VAR_6, &VAR_16);
  VAR_14->msix_count = VAR_16;


  if (VAR_8) {
   VAR_17 = FUNC_3();
   VAR_14->max_rsp_queues = (VAR_14->msix_count - 1 > VAR_17) ?
    (VAR_17 + 1) : (VAR_14->msix_count - 1);
   VAR_14->max_req_queues = 2;
  } else if (VAR_7 > 1) {
   VAR_14->max_req_queues = VAR_7 > VAR_5 ?
       VAR_5 : VAR_7;
   FUNC_10(VAR_10, VAR_14->pdev, 0xc008,
       "QoS mode set, max no of request queues:%d.\n",
       VAR_14->max_req_queues);
   FUNC_10(VAR_9, VAR_14->pdev, 0x0019,
       "QoS mode set, max no of request queues:%d.\n",
       VAR_14->max_req_queues);
  }
  FUNC_11(VAR_12, VAR_14->pdev, 0x001a,
      "MSI-X vector count: %d.\n", VAR_16);
 } else
  FUNC_11(VAR_12, VAR_14->pdev, 0x001b,
      "BAR 3 not enabled.\n");

mqiobase_exit:
 VAR_14->msix_count = VAR_14->max_rsp_queues + 1;
 FUNC_10(VAR_9, VAR_14->pdev, 0x001c,
     "MSIX Count:%d.\n", VAR_14->msix_count);
 return (0);

iospace_error_exit:
 return (-VAR_0);
}
