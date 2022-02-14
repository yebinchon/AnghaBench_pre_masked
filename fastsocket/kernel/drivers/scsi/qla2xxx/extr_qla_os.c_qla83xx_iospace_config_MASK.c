
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct qla_hw_data {int max_req_queues; int max_rsp_queues; int msix_count; int pdev; void* msixbase; void* mqiobase; void* iobase; int bars; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int*) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int ,int ,int,char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (int ,int ,int,char*,...) ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_10(struct qla_hw_data *VAR_13)
{
 uint16_t VAR_14;
 int VAR_15;

 if (FUNC_4(VAR_13->pdev, VAR_13->bars,
     VAR_3)) {
  FUNC_9(VAR_10, VAR_13->pdev, 0x0117,
      "Failed to reserve PIO/MMIO regions (%s), aborting.\n",
      FUNC_2(VAR_13->pdev));

  goto iospace_error_exit;
 }


 if (!(FUNC_5(VAR_13->pdev, 0) & VAR_1)) {
  FUNC_9(VAR_12, VAR_13->pdev, 0x0118,
      "Invalid pci I/O region size (%s).\n",
      FUNC_2(VAR_13->pdev));
  goto iospace_error_exit;
 }
 if (FUNC_6(VAR_13->pdev, 0) < VAR_2) {
  FUNC_9(VAR_12, VAR_13->pdev, 0x0119,
      "Invalid PCI mem region size (%s), aborting\n",
   FUNC_2(VAR_13->pdev));
  goto iospace_error_exit;
 }

 VAR_13->iobase = FUNC_0(FUNC_7(VAR_13->pdev, 0), VAR_2);
 if (!VAR_13->iobase) {
  FUNC_9(VAR_10, VAR_13->pdev, 0x011a,
      "Cannot remap MMIO (%s), aborting.\n",
      FUNC_2(VAR_13->pdev));
  goto iospace_error_exit;
 }



 VAR_13->max_req_queues = VAR_13->max_rsp_queues = 1;
 VAR_13->mqiobase = FUNC_0(FUNC_7(VAR_13->pdev, 4),
   FUNC_6(VAR_13->pdev, 4));

 if (!VAR_13->mqiobase) {
  FUNC_9(VAR_10, VAR_13->pdev, 0x011d,
      "BAR2/region4 not enabled\n");
  goto mqiobase_exit;
 }

 VAR_13->msixbase = FUNC_0(FUNC_7(VAR_13->pdev, 2),
   FUNC_6(VAR_13->pdev, 2));
 if (VAR_13->msixbase) {

  FUNC_3(VAR_13->pdev, VAR_4, &VAR_14);
  VAR_13->msix_count = VAR_14;


  if (VAR_7) {
   VAR_15 = FUNC_1();
   VAR_13->max_rsp_queues = (VAR_13->msix_count - 1 > VAR_15) ?
    (VAR_15 + 1) : (VAR_13->msix_count - 1);
   VAR_13->max_req_queues = 2;
  } else if (VAR_6 > 1) {
   VAR_13->max_req_queues = VAR_6 > VAR_5 ?
      VAR_5 : VAR_6;
   FUNC_8(VAR_9, VAR_13->pdev, 0xc00c,
       "QoS mode set, max no of request queues:%d.\n",
       VAR_13->max_req_queues);
   FUNC_8(VAR_8, VAR_13->pdev, 0x011b,
       "QoS mode set, max no of request queues:%d.\n",
       VAR_13->max_req_queues);
  }
  FUNC_9(VAR_11, VAR_13->pdev, 0x011c,
      "MSI-X vector count: %d.\n", VAR_14);
 } else
  FUNC_9(VAR_11, VAR_13->pdev, 0x011e,
      "BAR 1 not enabled.\n");

mqiobase_exit:
 VAR_13->msix_count = VAR_13->max_rsp_queues + 1;
 FUNC_8(VAR_8, VAR_13->pdev, 0x011f,
     "MSIX Count:%d.\n", VAR_13->msix_count);
 return (0);

iospace_error_exit:
 return (-VAR_0);
}
