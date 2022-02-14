
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int ndev; } ;
struct ib_ae_iocb_rsp {int event; int q_id; } ;






 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*,...) ;
 int FUNC_2 (struct ql_adapter*) ;
 int FUNC_3 (struct ql_adapter*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct ql_adapter *VAR_2,
        struct ib_ae_iocb_rsp *VAR_3)
{
 switch (VAR_3->event) {
 case 130:
  FUNC_1(VAR_2, VAR_1, VAR_2->ndev,
     "Management Processor Fatal Error.\n");
  FUNC_3(VAR_2);
  return;

 case 131:
  FUNC_0(VAR_2->ndev, "Multiple CAM hits lookup occurred.\n");
  FUNC_0(VAR_2->ndev, "This event shouldn't occur.\n");
  FUNC_2(VAR_2);
  return;

 case 128:
  FUNC_0(VAR_2->ndev, "Soft ECC error detected.\n");
  FUNC_2(VAR_2);
  break;

 case 129:
  FUNC_0(VAR_2->ndev, "PCI error occurred when reading "
     "anonymous buffers from rx_ring %d.\n",
     VAR_3->q_id);
  FUNC_2(VAR_2);
  break;

 default:
  FUNC_1(VAR_2, VAR_0, VAR_2->ndev, "Unexpected event %d.\n",
     VAR_3->event);
  FUNC_2(VAR_2);
  break;
 }
}
