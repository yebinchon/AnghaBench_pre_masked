
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct ib_device {int dummy; } ;
struct ehca_shca {int ipz_hca_handle; struct ib_device ib_device; } ;
struct ehca_eqe {int dummy; } ;
struct ehca_eq {int is_initialized; int ipz_queue; int ist; int interrupt_task; int pf; int ipz_eq_handle; int length; int irq_spinlock; int spinlock; } ;
typedef enum ehca_eq_type { ____Placeholder_ehca_eq_type } ehca_eq_type ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ib_device*,char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ,int *,int const,int const,int *,int *,int*,int *) ;
 int FUNC_2 (int ,struct ehca_eq*) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int ,int ,scalar_t__,int) ;
 int FUNC_4 (int ,int ,int ,char*,void*) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int,int ,int,int ,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,long) ;
 scalar_t__ FUNC_11 (void*) ;

int FUNC_12(struct ehca_shca *VAR_11,
     struct ehca_eq *VAR_12,
     const enum ehca_eq_type VAR_13, const u32 VAR_14)
{
 int VAR_15;
 u64 VAR_16;
 u32 VAR_17;
 u32 VAR_18;
 void *VAR_19;
 struct ib_device *VAR_20 = &VAR_11->ib_device;

 FUNC_9(&VAR_12->spinlock);
 FUNC_9(&VAR_12->irq_spinlock);
 VAR_12->is_initialized = 0;

 if (VAR_13 != VAR_0 && VAR_13 != VAR_1) {
  FUNC_0(VAR_20, "Invalid EQ type %x. eq=%p", VAR_13, VAR_12);
  return -VAR_3;
 }
 if (!VAR_14) {
  FUNC_0(VAR_20, "EQ length must not be zero. eq=%p", VAR_12);
  return -VAR_3;
 }

 VAR_16 = FUNC_1(VAR_11->ipz_hca_handle,
      &VAR_12->pf,
      VAR_13,
      VAR_14,
      &VAR_12->ipz_eq_handle,
      &VAR_12->length,
      &VAR_17, &VAR_12->ist);

 if (VAR_16 != VAR_5) {
  FUNC_0(VAR_20, "Can't allocate EQ/NEQ. eq=%p", VAR_12);
  return -VAR_3;
 }

 VAR_15 = FUNC_7(((void*)0), &VAR_12->ipz_queue, VAR_17,
        VAR_2, sizeof(struct ehca_eqe), 0, 0);
 if (!VAR_15) {
  FUNC_0(VAR_20, "Can't allocate EQ pages eq=%p", VAR_12);
  goto create_eq_exit1;
 }

 for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {
  u64 VAR_21;

  VAR_19 = FUNC_6(&VAR_12->ipz_queue);
  if (!VAR_19)
   goto create_eq_exit2;

  VAR_21 = FUNC_11(VAR_19);
  VAR_16 = FUNC_3(VAR_11->ipz_hca_handle,
       VAR_12->ipz_eq_handle,
       &VAR_12->pf,
       0, 0, VAR_21, 1);

  if (VAR_18 == (VAR_17 - 1)) {

   VAR_19 = FUNC_6(&VAR_12->ipz_queue);
   if (VAR_16 != VAR_5 || VAR_19)
    goto create_eq_exit2;
  } else {
   if (VAR_16 != VAR_4)
    goto create_eq_exit2;
  }
 }

 FUNC_5(&VAR_12->ipz_queue);


 if (VAR_13 == VAR_0) {
  FUNC_10(&VAR_12->interrupt_task, VAR_9, (long)VAR_11);

  VAR_15 = FUNC_4(VAR_12->ist, VAR_7,
       VAR_6, "ehca_eq",
       (void *)VAR_11);
  if (VAR_15 < 0)
   FUNC_0(VAR_20, "Can't map interrupt handler.");
 } else if (VAR_13 == VAR_1) {
  FUNC_10(&VAR_12->interrupt_task, VAR_10, (long)VAR_11);

  VAR_15 = FUNC_4(VAR_12->ist, VAR_8,
       VAR_6, "ehca_neq",
       (void *)VAR_11);
  if (VAR_15 < 0)
   FUNC_0(VAR_20, "Can't map interrupt handler.");
 }

 VAR_12->is_initialized = 1;

 return 0;

create_eq_exit2:
 FUNC_8(((void*)0), &VAR_12->ipz_queue);

create_eq_exit1:
 FUNC_2(VAR_11->ipz_hca_handle, VAR_12);

 return -VAR_3;
}
