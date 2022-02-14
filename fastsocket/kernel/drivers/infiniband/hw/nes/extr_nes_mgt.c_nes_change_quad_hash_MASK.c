
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct pau_qh_chg {struct nes_qp* nesqp; struct nes_vnic* nesvnic; struct nes_device* nesdev; } ;
struct nes_vnic {int dummy; } ;
struct TYPE_2__ {int qp_id; } ;
struct nes_qp {scalar_t__ nesqp_context_pbase; TYPE_1__ hwqp; int pau_state; } ;
struct nes_hw_cqp_wqe {int wqe_words; } ;
struct nes_device {int dummy; } ;
struct nes_cqp_request {int callback; int refcount; int cqp_callback; struct pau_qh_chg* cqp_callback_pointer; struct nes_hw_cqp_wqe cqp_wqe; } ;


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
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct pau_qh_chg*) ;
 struct pau_qh_chg* FUNC_2 (int,int ) ;
 int VAR_12 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct nes_hw_cqp_wqe*,struct nes_device*) ;
 struct nes_cqp_request* FUNC_5 (struct nes_device*) ;
 int FUNC_6 (struct nes_device*,struct nes_cqp_request*) ;
 int FUNC_7 (struct nes_device*,struct nes_cqp_request*) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct nes_device *VAR_13,
    struct nes_vnic *VAR_14, struct nes_qp *VAR_15)
{
 struct nes_cqp_request *VAR_16 = ((void*)0);
 struct pau_qh_chg *VAR_17 = ((void*)0);
 u64 VAR_18;
 struct nes_hw_cqp_wqe *VAR_19;
 int VAR_20 = 0;

 VAR_16 = FUNC_5(VAR_13);
 if (VAR_16 == ((void*)0)) {
  FUNC_3(VAR_10, "Failed to get a cqp_request.\n");
  VAR_20 = -VAR_0;
  goto chg_qh_err;
 }

 VAR_17 = FUNC_2(sizeof *VAR_17, VAR_1);
 if (VAR_17 == ((void*)0)) {
  FUNC_3(VAR_10, "Failed to get a cqp_request.\n");
  VAR_20 = -VAR_0;
  goto chg_qh_err;
 }
 VAR_17->nesdev = VAR_13;
 VAR_17->nesvnic = VAR_14;
 VAR_17->nesqp = VAR_15;
 VAR_15->pau_state = VAR_11;

 VAR_19 = &VAR_16->cqp_wqe;
 FUNC_4(VAR_19, VAR_13);
 FUNC_8(VAR_19->wqe_words,
       VAR_9, VAR_2 | VAR_4 |
       VAR_6 | VAR_3 | VAR_5);
 FUNC_8(VAR_19->wqe_words, VAR_8, VAR_15->hwqp.qp_id);
 VAR_18 = (u64)VAR_15->nesqp_context_pbase;
 FUNC_9(VAR_19->wqe_words, VAR_7, VAR_18);

 FUNC_3(VAR_10, "Waiting for CQP completion for deleting the quad hash.\n");

 VAR_16->cqp_callback_pointer = VAR_17;
 VAR_16->callback = 1;
 VAR_16->cqp_callback = VAR_12;
 FUNC_0(&VAR_16->refcount, 1);
 FUNC_6(VAR_13, VAR_16);

 return VAR_20;

chg_qh_err:
 FUNC_1(VAR_17);
 if (VAR_16)
  FUNC_7(VAR_13, VAR_16);
 return VAR_20;
}
