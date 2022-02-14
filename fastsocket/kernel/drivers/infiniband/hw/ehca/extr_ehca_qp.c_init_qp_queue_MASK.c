
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct ipz_queue {int dummy; } ;
struct ipz_adapter_handle {int dummy; } ;
struct ib_device {int dummy; } ;
struct ehca_shca {struct ipz_adapter_handle ipz_hca_handle; struct ib_device ib_device; } ;
struct TYPE_2__ {int kernel; } ;
struct ehca_qp {struct ipz_queue ipz_rqueue; TYPE_1__ galpas; int ipz_qp_handle; } ;
struct ehca_pd {int dummy; } ;
struct ehca_alloc_queue_parms {int queue_size; int page_size; scalar_t__ is_small; int act_nr_sges; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (struct ib_device*,char*,void*) ;
 void* FUNC_2 (struct ipz_adapter_handle,int ,int *,int ,int,void*,int,int ) ;
 int FUNC_3 (struct ipz_queue*) ;
 void* FUNC_4 (struct ipz_queue*) ;
 int FUNC_5 (struct ehca_pd*,struct ipz_queue*,int,int,int,int ,int) ;
 int FUNC_6 (struct ehca_pd*,struct ipz_queue*) ;
 void* FUNC_7 (void*) ;

__attribute__((used)) static inline int FUNC_8(struct ehca_shca *VAR_4,
    struct ehca_pd *VAR_5,
    struct ehca_qp *VAR_6,
    struct ipz_queue *VAR_7,
    int VAR_8,
    u64 VAR_9,
    struct ehca_alloc_queue_parms *VAR_10,
    int VAR_11)
{
 int VAR_12, VAR_13, VAR_14, VAR_15;
 void *VAR_16;
 u64 VAR_17, VAR_18;
 struct ib_device *VAR_19 = &VAR_4->ib_device;
 struct ipz_adapter_handle VAR_20 = VAR_4->ipz_hca_handle;

 if (!VAR_10->queue_size)
  return 0;

 if (VAR_10->is_small) {
  VAR_15 = 1;
  VAR_14 = FUNC_5(VAR_5, VAR_7, VAR_15,
     128 << VAR_10->page_size,
     VAR_11, VAR_10->act_nr_sges, 1);
 } else {
  VAR_15 = VAR_10->queue_size;
  VAR_14 = FUNC_5(VAR_5, VAR_7, VAR_15,
     VAR_1, VAR_11,
     VAR_10->act_nr_sges, 0);
 }

 if (!VAR_14) {
  FUNC_1(VAR_19, "Cannot allocate page for queue. ipz_rc=%i",
    VAR_14);
  return -VAR_0;
 }


 for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
  VAR_16 = FUNC_4(VAR_7);
  if (!VAR_16) {
   FUNC_1(VAR_19, "ipz_qpageit_get_inc() "
     "failed p_vpage= %p", VAR_16);
   VAR_12 = -VAR_2;
   goto init_qp_queue1;
  }
  VAR_17 = FUNC_7(VAR_16);

  VAR_18 = FUNC_2(VAR_20,
       VAR_6->ipz_qp_handle,
       ((void*)0), 0, VAR_8,
       VAR_17, VAR_10->is_small ? 0 : 1,
       VAR_6->galpas.kernel);
  if (VAR_13 == (VAR_15 - 1)) {
   if (VAR_18 != VAR_9) {
    FUNC_1(VAR_19, "hipz_qp_register_rpage() "
      "h_ret=%lli", VAR_18);
    VAR_12 = FUNC_0(VAR_18);
    goto init_qp_queue1;
   }
   VAR_16 = FUNC_4(&VAR_6->ipz_rqueue);
   if (VAR_16) {
    FUNC_1(VAR_19, "ipz_qpageit_get_inc() "
      "should not succeed vpage=%p", VAR_16);
    VAR_12 = -VAR_2;
    goto init_qp_queue1;
   }
  } else {
   if (VAR_18 != VAR_3) {
    FUNC_1(VAR_19, "hipz_qp_register_rpage() "
      "h_ret=%lli", VAR_18);
    VAR_12 = FUNC_0(VAR_18);
    goto init_qp_queue1;
   }
  }
 }

 FUNC_3(VAR_7);

 return 0;

init_qp_queue1:
 FUNC_6(VAR_5, VAR_7);
 return VAR_12;
}
