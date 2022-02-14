
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct nes_vnic {struct nes_device* nesdev; } ;
struct nes_hw_cqp_wqe {int wqe_words; } ;
struct nes_device {int dummy; } ;
struct nes_cqp_request {int waiting; scalar_t__ request_done; scalar_t__ major_code; int minor_code; int waitq; int refcount; struct nes_hw_cqp_wqe cqp_wqe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct nes_hw_cqp_wqe*,struct nes_device*) ;
 struct nes_cqp_request* FUNC_3 (struct nes_device*) ;
 int FUNC_4 (struct nes_device*,struct nes_cqp_request*) ;
 int FUNC_5 (struct nes_device*,struct nes_cqp_request*) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (int ,int,int ) ;

int FUNC_8(struct nes_vnic *VAR_11, u32 VAR_12,
  u32 VAR_13, u32 VAR_14)
{
 struct nes_device *VAR_15 = VAR_11->nesdev;
 struct nes_hw_cqp_wqe *VAR_16;
 struct nes_cqp_request *VAR_17;
 int VAR_18 = 0;
 u16 VAR_19;


 VAR_17 = FUNC_3(VAR_15);
 if (VAR_17 == ((void*)0)) {
  FUNC_1(VAR_8, "Failed to get a cqp_request.\n");
  return -VAR_1;
 }
 VAR_17->waiting = 1;
 VAR_16 = &VAR_17->cqp_wqe;

 FUNC_1(VAR_8, "%s APBV for local port=%u(0x%04x), nic_index=%u\n",
   (VAR_14 == VAR_10) ? "ADD" : "DEL",
   VAR_12, VAR_12, VAR_13);

 FUNC_2(VAR_16, VAR_15);
 FUNC_6(VAR_16->wqe_words, VAR_7, (VAR_5 |
   ((VAR_14 == VAR_10) ? VAR_3 : 0)));
 FUNC_6(VAR_16->wqe_words, VAR_6,
   ((VAR_13 << VAR_4) | VAR_12));

 FUNC_1(VAR_8, "Waiting for CQP completion for APBVT.\n");

 FUNC_0(&VAR_17->refcount, 2);
 FUNC_4(VAR_15, VAR_17);

 if (VAR_14 == VAR_10)
  VAR_18 = FUNC_7(VAR_17->waitq, (VAR_17->request_done != 0),
    VAR_9);
 FUNC_1(VAR_8, "Completed, ret=%u,  CQP Major:Minor codes = 0x%04X:0x%04X\n",
   VAR_18, VAR_17->major_code, VAR_17->minor_code);
 VAR_19 = VAR_17->major_code;

 FUNC_5(VAR_15, VAR_17);

 if (!VAR_18)
  return -VAR_2;
 else if (VAR_19)
  return -VAR_0;
 else
  return 0;
}
