
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct nes_pd {int pd_id; } ;
struct nes_hw_cqp_wqe {int * wqe_words; } ;
struct nes_device {struct nes_adapter* nesadapter; } ;
struct nes_cqp_request {int waiting; scalar_t__ request_done; scalar_t__ major_code; int minor_code; int waitq; int refcount; struct nes_hw_cqp_wqe cqp_wqe; } ;
struct nes_adapter {scalar_t__ free_4kpbl; int pbl_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct nes_hw_cqp_wqe*,struct nes_device*) ;
 int FUNC_5 (struct nes_device*,struct nes_cqp_request*) ;
 struct nes_cqp_request* FUNC_6 (struct nes_device*) ;
 int FUNC_7 (struct nes_device*,struct nes_cqp_request*) ;
 int FUNC_8 (struct nes_device*,struct nes_cqp_request*) ;
 int FUNC_9 (int *,size_t,int) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int ,int,int ) ;

__attribute__((used)) static int FUNC_14(struct nes_device *VAR_19, struct nes_pd *VAR_20,
        u32 VAR_21, u32 VAR_22)
{
 struct nes_hw_cqp_wqe *VAR_23;
 struct nes_cqp_request *VAR_24;
 unsigned long VAR_25;
 int VAR_26;
 struct nes_adapter *VAR_27 = VAR_19->nesadapter;
 u32 VAR_28 = 0;
 u16 VAR_29;
 u64 VAR_30 = VAR_22 * VAR_18;


 VAR_24 = FUNC_6(VAR_19);
 if (VAR_24 == ((void*)0)) {
  FUNC_3(VAR_16, "Failed to get a cqp_request.\n");
  return -VAR_1;
 }
 FUNC_3(VAR_16, "alloc_fast_reg_mr: page_count = %d, "
         "region_length = %llu\n",
         VAR_22, VAR_30);
 VAR_24->waiting = 1;
 VAR_23 = &VAR_24->cqp_wqe;

 FUNC_11(&VAR_27->pbl_lock, VAR_25);
 if (VAR_27->free_4kpbl > 0) {
  VAR_27->free_4kpbl--;
  FUNC_12(&VAR_27->pbl_lock, VAR_25);
 } else {

  FUNC_12(&VAR_27->pbl_lock, VAR_25);
  FUNC_3(VAR_16, "Out of Pbls\n");
  FUNC_5(VAR_19, VAR_24);
  return -VAR_1;
 }

 VAR_28 = VAR_3 | VAR_4 |
   VAR_5 | VAR_7 |
   VAR_6;
 FUNC_4(VAR_23, VAR_19);
 FUNC_9(VAR_23->wqe_words, VAR_15, VAR_28);
 FUNC_9(VAR_23->wqe_words, VAR_11, 1);

 VAR_23->wqe_words[VAR_8] =
   FUNC_2((u32)(VAR_30 >> 8) & 0xff000000);
 VAR_23->wqe_words[VAR_8] |=
   FUNC_2(VAR_20->pd_id & 0x00007fff);

 FUNC_9(VAR_23->wqe_words, VAR_13, VAR_21);
 FUNC_10(VAR_23->wqe_words, VAR_14, 0);
 FUNC_9(VAR_23->wqe_words, VAR_9, 0);
 FUNC_10(VAR_23->wqe_words, VAR_10, 0);
 FUNC_9(VAR_23->wqe_words, VAR_12, (VAR_22 * 8));
 VAR_23->wqe_words[VAR_15] |= FUNC_2(VAR_5);
 FUNC_1();

 FUNC_0(&VAR_24->refcount, 2);
 FUNC_7(VAR_19, VAR_24);


 VAR_26 = FUNC_13(VAR_24->waitq,
     (0 != VAR_24->request_done),
     VAR_17);

 FUNC_3(VAR_16, "Allocate STag 0x%08X completed, "
    "wait_event_timeout ret = %u, CQP Major:Minor codes = "
    "0x%04X:0x%04X.\n", VAR_21, VAR_26, VAR_24->major_code,
    VAR_24->minor_code);
 VAR_29 = VAR_24->major_code;
 FUNC_8(VAR_19, VAR_24);

 if (!VAR_26 || VAR_29) {
  FUNC_11(&VAR_27->pbl_lock, VAR_25);
  VAR_27->free_4kpbl++;
  FUNC_12(&VAR_27->pbl_lock, VAR_25);
 }

 if (!VAR_26)
  return -VAR_2;
 else if (VAR_29)
  return -VAR_0;
 return 0;
}
