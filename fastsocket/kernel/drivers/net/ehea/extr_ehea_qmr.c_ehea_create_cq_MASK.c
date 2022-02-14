
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct h_epa {int dummy; } ;
struct ehea_cqe {int dummy; } ;
struct TYPE_4__ {struct h_epa kernel; } ;
struct TYPE_3__ {int max_nr_of_cqes; int cq_token; int nr_pages; int eq_handle; } ;
struct ehea_cq {int fw_handle; int hw_queue; TYPE_2__ epas; TYPE_1__ attr; struct ehea_adapter* adapter; } ;
struct ehea_adapter {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,TYPE_1__*,int *,TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int) ;
 int FUNC_4 (struct ehea_cq*) ;
 int FUNC_5 (struct ehea_cq*) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int *,int,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ehea_cq*) ;
 struct ehea_cq* FUNC_11 (int,int ) ;
 int FUNC_12 (void*) ;

struct ehea_cq *FUNC_13(struct ehea_adapter *VAR_6,
          int VAR_7, u64 VAR_8, u32 VAR_9)
{
 struct ehea_cq *VAR_10;
 struct h_epa VAR_11;
 u64 *VAR_12, VAR_13, VAR_14;
 u32 VAR_15, VAR_16, VAR_17;
 int VAR_18;
 void *VAR_19;

 VAR_10 = FUNC_11(sizeof(*VAR_10), VAR_3);
 if (!VAR_10) {
  FUNC_0("no mem for cq");
  goto out_nomem;
 }

 VAR_10->attr.max_nr_of_cqes = VAR_7;
 VAR_10->attr.cq_token = VAR_9;
 VAR_10->attr.eq_handle = VAR_8;

 VAR_10->adapter = VAR_6;

 VAR_12 = &VAR_10->fw_handle;
 VAR_15 = 0;
 VAR_16 = 0;

 VAR_13 = FUNC_1(VAR_6->handle, &VAR_10->attr,
     &VAR_10->fw_handle, &VAR_10->epas);
 if (VAR_13 != VAR_5) {
  FUNC_0("alloc_resource_cq failed");
  goto out_freemem;
 }

 VAR_18 = FUNC_8(&VAR_10->hw_queue, VAR_10->attr.nr_pages,
       VAR_1, sizeof(struct ehea_cqe));
 if (VAR_18)
  goto out_freeres;

 for (VAR_17 = 0; VAR_17 < VAR_10->attr.nr_pages; VAR_17++) {
  VAR_19 = FUNC_7(&VAR_10->hw_queue);
  if (!VAR_19) {
   FUNC_0("hw_qpageit_get_inc failed");
   goto out_kill_hwq;
  }

  VAR_14 = FUNC_12(VAR_19);
  VAR_13 = FUNC_3(VAR_6->handle,
          0, VAR_0,
          VAR_10->fw_handle, VAR_14, 1);
  if (VAR_13 < VAR_5) {
   FUNC_0("register_rpage_cq failed ehea_cq=%p "
       "hret=%llx counter=%i act_pages=%i",
       VAR_10, VAR_13, VAR_17, VAR_10->attr.nr_pages);
   goto out_kill_hwq;
  }

  if (VAR_17 == (VAR_10->attr.nr_pages - 1)) {
   VAR_19 = FUNC_7(&VAR_10->hw_queue);

   if ((VAR_13 != VAR_5) || (VAR_19)) {
    FUNC_0("registration of pages not "
        "complete hret=%llx\n", VAR_13);
    goto out_kill_hwq;
   }
  } else {
   if (VAR_13 != VAR_4) {
    FUNC_0("CQ: registration of page failed "
        "hret=%llx\n", VAR_13);
    goto out_kill_hwq;
   }
  }
 }

 FUNC_6(&VAR_10->hw_queue);
 VAR_11 = VAR_10->epas.kernel;
 FUNC_4(VAR_10);
 FUNC_5(VAR_10);

 return VAR_10;

out_kill_hwq:
 FUNC_9(&VAR_10->hw_queue);

out_freeres:
 FUNC_2(VAR_6->handle, VAR_10->fw_handle, VAR_2);

out_freemem:
 FUNC_10(VAR_10);

out_nomem:
 return ((void*)0);
}
