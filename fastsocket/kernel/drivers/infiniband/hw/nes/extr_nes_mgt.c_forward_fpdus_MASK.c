
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct pau_fpdu_info {int hdr_len; TYPE_1__* frags; scalar_t__ hdr_pbase; scalar_t__ data_len; struct nes_cqp_request* cqp_request; } ;
struct nes_vnic {scalar_t__ logical_port; struct nes_device* nesdev; } ;
struct nes_qp {int dummy; } ;
struct nes_hw_cqp_wqe {int wqe_words; } ;
struct nes_device {int dummy; } ;
struct nes_cqp_request {int callback; int refcount; int cqp_callback; struct pau_fpdu_info* cqp_callback_pointer; struct nes_hw_cqp_wqe cqp_wqe; } ;
struct TYPE_2__ {int frag_len; int physaddr; } ;


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
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct nes_device*,struct nes_qp*,struct pau_fpdu_info**) ;
 int FUNC_2 (int) ;
 int VAR_16 ;
 int FUNC_3 (struct nes_hw_cqp_wqe*,struct nes_device*) ;
 int FUNC_4 (struct nes_device*,struct nes_cqp_request*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct nes_vnic *VAR_17, struct nes_qp *VAR_18)
{
 struct nes_device *VAR_19 = VAR_17->nesdev;
 struct pau_fpdu_info *VAR_20;
 struct nes_hw_cqp_wqe *VAR_21;
 struct nes_cqp_request *VAR_22;
 u64 VAR_23;
 u32 VAR_24;
 int VAR_25;

 while (1) {
  VAR_25 = FUNC_1(VAR_19, VAR_18, &VAR_20);
  if (VAR_20 == ((void*)0))
   return VAR_25;

  VAR_22 = VAR_20->cqp_request;
  VAR_21 = &VAR_22->cqp_wqe;
  FUNC_3(VAR_21, VAR_19);
  FUNC_5(VAR_21->wqe_words, VAR_3,
        VAR_0 |
        (((u32)VAR_17->logical_port) << VAR_1));

  VAR_24 = VAR_20->hdr_len << 16;
  VAR_24 |= VAR_20->hdr_len + (u32)VAR_20->data_len;
  FUNC_5(VAR_21->wqe_words, VAR_2,
        VAR_24);

  VAR_24 = (VAR_20->frags[1].frag_len << 16) | VAR_20->frags[0].frag_len;
  FUNC_5(VAR_21->wqe_words, VAR_14,
        VAR_24);

  VAR_24 = (VAR_20->frags[3].frag_len << 16) | VAR_20->frags[2].frag_len;
  FUNC_5(VAR_21->wqe_words, VAR_15,
        VAR_24);

  VAR_23 = (u64)VAR_20->hdr_pbase;
  FUNC_5(VAR_21->wqe_words, VAR_5,
        FUNC_2(VAR_23));
  FUNC_5(VAR_21->wqe_words, VAR_4,
        FUNC_6(VAR_23 >> 32));

  FUNC_5(VAR_21->wqe_words, VAR_7,
        FUNC_2(VAR_20->frags[0].physaddr));
  FUNC_5(VAR_21->wqe_words, VAR_6,
        FUNC_6(VAR_20->frags[0].physaddr));

  FUNC_5(VAR_21->wqe_words, VAR_9,
        FUNC_2(VAR_20->frags[1].physaddr));
  FUNC_5(VAR_21->wqe_words, VAR_8,
        FUNC_6(VAR_20->frags[1].physaddr));

  FUNC_5(VAR_21->wqe_words, VAR_11,
        FUNC_2(VAR_20->frags[2].physaddr));
  FUNC_5(VAR_21->wqe_words, VAR_10,
        FUNC_6(VAR_20->frags[2].physaddr));

  FUNC_5(VAR_21->wqe_words, VAR_13,
        FUNC_2(VAR_20->frags[3].physaddr));
  FUNC_5(VAR_21->wqe_words, VAR_12,
        FUNC_6(VAR_20->frags[3].physaddr));

  VAR_22->cqp_callback_pointer = VAR_20;
  VAR_22->callback = 1;
  VAR_22->cqp_callback = VAR_16;

  FUNC_0(&VAR_22->refcount, 1);
  FUNC_4(VAR_19, VAR_22);
 }

 return 0;
}
