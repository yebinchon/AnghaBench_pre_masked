
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct srp_host {int list; } ;
struct srp_device {int fmr_page_size; int fmr_max_size; int * pd; int dev_list; int * fmr_pool; int * mr; struct ib_device* dev; scalar_t__ fmr_page_mask; int page_size_cap; } ;
struct ib_fmr_pool_param {int cache; int max_pages_per_fmr; int page_shift; int access; int dirty_watermark; int pool_size; } ;
struct ib_device_attr {int fmr_page_size; int fmr_max_size; int * pd; int dev_list; int * fmr_pool; int * mr; struct ib_device* dev; scalar_t__ fmr_page_mask; int page_size_cap; } ;
struct ib_device {scalar_t__ node_type; int phys_port_cnt; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (struct ib_device*) ;
 int * FUNC_4 (int *,struct ib_fmr_pool_param*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (struct ib_device*,struct srp_device*) ;
 int FUNC_8 (struct ib_device*,int *,struct srp_device*) ;
 int FUNC_9 (struct srp_device*) ;
 struct srp_device* FUNC_10 (int,int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int,scalar_t__) ;
 int FUNC_13 (struct ib_fmr_pool_param*,int ,int) ;
 int FUNC_14 (char*,int ) ;
 struct srp_host* FUNC_15 (struct srp_device*,int) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_16(struct ib_device *VAR_10)
{
 struct srp_device *VAR_11;
 struct ib_device_attr *VAR_12;
 struct ib_fmr_pool_param VAR_13;
 struct srp_host *VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_12 = FUNC_10(sizeof *VAR_12, VAR_0);
 if (!VAR_12)
  return;

 if (FUNC_7(VAR_10, VAR_12)) {
  FUNC_14("Query device failed for %s\n", VAR_10->name);
  goto free_attr;
 }

 VAR_11 = FUNC_10(sizeof *VAR_11, VAR_0);
 if (!VAR_11)
  goto free_attr;






 VAR_16 = FUNC_12(12, FUNC_2(VAR_12->page_size_cap) - 1);
 VAR_11->fmr_page_size = 1 << VAR_16;
 VAR_11->fmr_page_mask = ~((u64) VAR_11->fmr_page_size - 1);
 VAR_11->fmr_max_size = VAR_11->fmr_page_size * VAR_8;

 FUNC_0(&VAR_11->dev_list);

 VAR_11->dev = VAR_10;
 VAR_11->pd = FUNC_3(VAR_10);
 if (FUNC_1(VAR_11->pd))
  goto free_dev;

 VAR_11->mr = FUNC_6(VAR_11->pd,
        VAR_1 |
        VAR_2 |
        VAR_3);
 if (FUNC_1(VAR_11->mr))
  goto err_pd;

 for (VAR_15 = VAR_8;
   VAR_15 >= VAR_6;
   VAR_15 /= 2, VAR_11->fmr_max_size /= 2) {
  FUNC_13(&VAR_13, 0, sizeof VAR_13);
  VAR_13.pool_size = VAR_7;
  VAR_13.dirty_watermark = VAR_5;
  VAR_13.cache = 1;
  VAR_13.max_pages_per_fmr = VAR_15;
  VAR_13.page_shift = VAR_16;
  VAR_13.access = (VAR_1 |
            VAR_3 |
            VAR_2);

  VAR_11->fmr_pool = FUNC_4(VAR_11->pd, &VAR_13);
  if (!FUNC_1(VAR_11->fmr_pool))
   break;
 }

 if (FUNC_1(VAR_11->fmr_pool))
  VAR_11->fmr_pool = ((void*)0);

 if (VAR_10->node_type == VAR_4) {
  VAR_17 = 0;
  VAR_18 = 0;
 } else {
  VAR_17 = 1;
  VAR_18 = VAR_10->phys_port_cnt;
 }

 for (VAR_19 = VAR_17; VAR_19 <= VAR_18; ++VAR_19) {
  VAR_14 = FUNC_15(VAR_11, VAR_19);
  if (VAR_14)
   FUNC_11(&VAR_14->list, &VAR_11->dev_list);
 }

 FUNC_8(VAR_10, &VAR_9, VAR_11);

 goto free_attr;

err_pd:
 FUNC_5(VAR_11->pd);

free_dev:
 FUNC_9(VAR_11);

free_attr:
 FUNC_9(VAR_12);
}
