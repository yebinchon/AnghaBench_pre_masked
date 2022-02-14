
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nes_vnic {struct nes_device* nesdev; } ;
struct nes_mr {int dummy; } ;
struct nes_hw_cqp_wqe {int wqe_words; } ;
struct nes_device {struct nes_adapter* nesadapter; } ;
struct nes_cqp_request {int waiting; scalar_t__ request_done; scalar_t__ major_code; int minor_code; int waitq; int refcount; struct nes_hw_cqp_wqe cqp_wqe; } ;
struct nes_adapter {int allocated_mrs; } ;
struct ib_mw {int rkey; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct nes_mr*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct nes_hw_cqp_wqe*,struct nes_device*) ;
 int FUNC_4 (struct nes_adapter*,int ,int) ;
 struct nes_cqp_request* FUNC_5 (struct nes_device*) ;
 int FUNC_6 (struct nes_device*,struct nes_cqp_request*) ;
 int FUNC_7 (struct nes_device*,struct nes_cqp_request*) ;
 int FUNC_8 (int ,int ,int) ;
 struct nes_mr* FUNC_9 (struct ib_mw*) ;
 struct nes_vnic* FUNC_10 (int ) ;
 int FUNC_11 (int ,int,int ) ;

__attribute__((used)) static int FUNC_12(struct ib_mw *VAR_8)
{
 struct nes_mr *VAR_9 = FUNC_9(VAR_8);
 struct nes_vnic *VAR_10 = FUNC_10(VAR_8->device);
 struct nes_device *VAR_11 = VAR_10->nesdev;
 struct nes_adapter *VAR_12 = VAR_11->nesadapter;
 struct nes_hw_cqp_wqe *VAR_13;
 struct nes_cqp_request *VAR_14;
 int VAR_15 = 0;
 int VAR_16;


 VAR_14 = FUNC_5(VAR_11);
 if (VAR_14 == ((void*)0)) {
  FUNC_2(VAR_6, "Failed to get a cqp_request.\n");
  return -VAR_1;
 }
 VAR_14->waiting = 1;
 VAR_13 = &VAR_14->cqp_wqe;
 FUNC_3(VAR_13, VAR_11);
 FUNC_8(VAR_13->wqe_words, VAR_5, VAR_3);
 FUNC_8(VAR_13->wqe_words, VAR_4, VAR_8->rkey);

 FUNC_0(&VAR_14->refcount, 2);
 FUNC_6(VAR_11, VAR_14);


 FUNC_2(VAR_6, "Waiting for deallocate STag 0x%08X to complete.\n",
   VAR_8->rkey);
 VAR_16 = FUNC_11(VAR_14->waitq, (0 != VAR_14->request_done),
   VAR_7);
 FUNC_2(VAR_6, "Deallocate STag completed, wait_event_timeout ret = %u,"
   " CQP Major:Minor codes = 0x%04X:0x%04X.\n",
   VAR_16, VAR_14->major_code, VAR_14->minor_code);
 if (!VAR_16)
  VAR_15 = -VAR_2;
 else if (VAR_14->major_code)
  VAR_15 = -VAR_0;

 FUNC_7(VAR_11, VAR_14);

 FUNC_4(VAR_12, VAR_12->allocated_mrs,
   (VAR_8->rkey & 0x0fffff00) >> 8);
 FUNC_1(VAR_9);

 return VAR_15;
}
