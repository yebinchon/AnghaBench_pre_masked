
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct ehca_eq {int irq_spinlock; struct ehca_eqe_cache_entry* eqe_cache; int spinlock; int ipz_queue; int ist; } ;
struct ehca_shca {struct ehca_eq eq; int ib_device; int ipz_hca_handle; } ;
struct ehca_eqe_cache_entry {TYPE_1__* eqe; struct ehca_cq* cq; } ;
struct ehca_eqe {int dummy; } ;
struct ehca_cq {int wait_completion; int nr_events; } ;
struct TYPE_2__ {scalar_t__ entry; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ehca_cq*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char*,scalar_t__) ;
 void* FUNC_6 (struct ehca_shca*,struct ehca_eq*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 struct ehca_cq* FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct ehca_shca*,scalar_t__) ;
 int FUNC_13 (struct ehca_shca*,struct ehca_eqe*) ;
 int FUNC_14 (struct ehca_cq*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct ehca_cq*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (int *) ;

void FUNC_22(struct ehca_shca *VAR_7, int VAR_8)
{
 struct ehca_eq *VAR_9 = &VAR_7->eq;
 struct ehca_eqe_cache_entry *VAR_10 = VAR_9->eqe_cache;
 u64 VAR_11, VAR_12;
 int VAR_13, VAR_14;
 int VAR_15 = 0;

 FUNC_18(&VAR_9->irq_spinlock);
 if (VAR_8) {
  const int VAR_16 = 100;
  int VAR_17 = 0;
  int VAR_18 = 1;
  do {
   VAR_18 = FUNC_8(
    VAR_7->ipz_hca_handle, VAR_9->ist);
   VAR_17++;
   FUNC_10();
  } while (VAR_18 && VAR_17 < VAR_16);
  if (FUNC_20((VAR_17 == VAR_16)))
   FUNC_4(&VAR_7->ib_device, "int_state=%x query_cnt=%x",
     VAR_18, VAR_17);
 }


 VAR_13 = 0;
 do {
  u32 VAR_19;
  VAR_10[VAR_13].eqe = FUNC_6(VAR_7, VAR_9);
  if (!VAR_10[VAR_13].eqe)
   break;
  VAR_11 = VAR_10[VAR_13].eqe->entry;
  if (FUNC_0(VAR_1, VAR_11)) {
   VAR_19 = FUNC_0(VAR_2, VAR_11);
   FUNC_15(&VAR_5);
   VAR_10[VAR_13].cq = FUNC_9(&VAR_4, VAR_19);
   if (VAR_10[VAR_13].cq)
    FUNC_2(&VAR_10[VAR_13].cq->nr_events);
   FUNC_16(&VAR_5);
   if (!VAR_10[VAR_13].cq) {
    FUNC_5(&VAR_7->ib_device,
      "Invalid eqe for non-existing cq "
      "token=%x", VAR_19);
    continue;
   }
  } else
   VAR_10[VAR_13].cq = ((void*)0);
  VAR_13++;
 } while (VAR_13 < VAR_0);
 if (!VAR_13) {
  if (VAR_8)
   FUNC_4(&VAR_7->ib_device,
     "No eqe found for irq event");
  goto unlock_irq_spinlock;
 } else if (!VAR_8) {
  VAR_12 = FUNC_7(VAR_9->ist);
  if (VAR_12 != VAR_3)
   FUNC_5(&VAR_7->ib_device,
     "bad return code EOI -rc = %lld\n", VAR_12);
  FUNC_4(&VAR_7->ib_device, "deadman found %x eqe", VAR_13);
 }
 if (FUNC_20(VAR_13 == VAR_0))
  FUNC_4(&VAR_7->ib_device, "too many eqes for one irq event");

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  if (VAR_9->eqe_cache[VAR_14].cq)
   FUNC_17(VAR_9->eqe_cache[VAR_14].cq);
 }

 FUNC_18(&VAR_9->spinlock);
 VAR_15 = (!FUNC_11(&VAR_7->eq.ipz_queue));
 FUNC_19(&VAR_9->spinlock);

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
  if (VAR_9->eqe_cache[VAR_14].cq) {
   if (VAR_6)
    FUNC_14(VAR_9->eqe_cache[VAR_14].cq);
   else {
    struct ehca_cq *VAR_20 = VAR_9->eqe_cache[VAR_14].cq;
    FUNC_3(VAR_20);
    if (FUNC_1(&VAR_20->nr_events))
     FUNC_21(&VAR_20->wait_completion);
   }
  } else {
   FUNC_4(&VAR_7->ib_device, "Got non completion event");
   FUNC_12(VAR_7, VAR_9->eqe_cache[VAR_14].eqe->entry);
  }

 if (VAR_15)
  goto unlock_irq_spinlock;
 do {
  struct ehca_eqe *VAR_21;
  VAR_21 = FUNC_6(VAR_7, &VAR_7->eq);
  if (!VAR_21)
   break;
  FUNC_13(VAR_7, VAR_21);
 } while (1);

unlock_irq_spinlock:
 FUNC_19(&VAR_9->irq_spinlock);
}
