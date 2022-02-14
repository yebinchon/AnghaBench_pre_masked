
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wl1271 {int * target_mem_map; TYPE_3__* hw; TYPE_1__* ops; } ;
struct TYPE_6__ {TYPE_2__* wiphy; } ;
struct TYPE_5__ {int frag_threshold; } ;
struct TYPE_4__ {int (* hw_init ) (struct wl1271*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct wl1271*) ;
 int FUNC_2 (struct wl1271*) ;
 int FUNC_3 (struct wl1271*,int ) ;
 int FUNC_4 (struct wl1271*) ;
 int FUNC_5 (struct wl1271*) ;
 int FUNC_6 (struct wl1271*) ;
 int FUNC_7 (struct wl1271*) ;
 int FUNC_8 (struct wl1271*,int) ;
 int FUNC_9 (struct wl1271*) ;
 int FUNC_10 (struct wl1271*) ;
 int FUNC_11 (struct wl1271*) ;
 int FUNC_12 (struct wl1271*) ;
 int FUNC_13 (struct wl1271*) ;
 int FUNC_14 (struct wl1271*) ;
 int FUNC_15 (struct wl1271*) ;
 int FUNC_16 (struct wl1271*) ;
 int FUNC_17 (struct wl1271*) ;

int FUNC_18(struct wl1271 *VAR_0)
{
 int VAR_1;


 VAR_1 = VAR_0->ops->hw_init(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;


 VAR_1 = FUNC_11(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_13(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;


 VAR_1 = FUNC_15(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_17(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;


 VAR_1 = FUNC_10(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;


 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;


 VAR_1 = FUNC_16(VAR_0);
 if (VAR_1 < 0)
  goto out_free_memmap;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 < 0)
  goto out_free_memmap;


 VAR_1 = FUNC_7(VAR_0);
 if (VAR_1 < 0)
  goto out_free_memmap;


 VAR_1 = FUNC_5(VAR_0);
 if (VAR_1 < 0)
  goto out_free_memmap;


 VAR_1 = FUNC_9(VAR_0);
 if (VAR_1 < 0)
  goto out_free_memmap;


 VAR_1 = FUNC_3(VAR_0, VAR_0->hw->wiphy->frag_threshold);
 if (VAR_1 < 0)
  goto out_free_memmap;


 VAR_1 = FUNC_8(VAR_0, 1);
 if (VAR_1 < 0)
  goto out_free_memmap;


 VAR_1 = FUNC_6(VAR_0);
 if (VAR_1 < 0)
  goto out_free_memmap;

 VAR_1 = FUNC_14(VAR_0);
 if (VAR_1 < 0)
  goto out_free_memmap;


 VAR_1 = FUNC_12(VAR_0);
 if (VAR_1 < 0)
  goto out_free_memmap;

 return 0;

 out_free_memmap:
 FUNC_0(VAR_0->target_mem_map);
 VAR_0->target_mem_map = ((void*)0);

 return VAR_1;
}
