
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct agp_bridge_data {int * key_list; TYPE_2__* driver; struct page* scratch_page_page; int scratch_page_dma; int mapped_lock; int mapped_list; TYPE_1__* dev; int scratch_page; int * version; int max_memory_agp; } ;
struct TYPE_4__ {int (* fetch_size ) () ;int (* free_gatt_table ) (struct agp_bridge_data*) ;int (* agp_destroy_page ) (void*,int ) ;scalar_t__ needs_scratch_page; int (* agp_unmap_page ) (struct page*,int ) ;scalar_t__ (* configure ) () ;scalar_t__ (* create_gatt_table ) (struct agp_bridge_data*) ;int (* mask_memory ) (struct agp_bridge_data*,int ,int ) ;scalar_t__ (* agp_map_page ) (struct page*,int *) ;struct page* (* agp_alloc_page ) (struct agp_bridge_data*) ;} ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int) ;
 void* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int *) ;
 struct page* FUNC_7 (struct agp_bridge_data*) ;
 int FUNC_8 (struct agp_bridge_data*) ;
 scalar_t__ FUNC_9 (struct page*,int *) ;
 int FUNC_10 (struct agp_bridge_data*,int ,int ) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (struct agp_bridge_data*) ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (struct page*,int ) ;
 int FUNC_15 (void*,int ) ;
 int FUNC_16 (void*,int ) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (int) ;

__attribute__((used)) static int FUNC_19(struct agp_bridge_data *VAR_6)
{
 int VAR_7, VAR_8, VAR_9=0, VAR_10=0;

 VAR_6->max_memory_agp = FUNC_1();
 VAR_6->version = &VAR_5;

 if (VAR_6->driver->needs_scratch_page) {
  struct page *VAR_11 = VAR_6->driver->agp_alloc_page(VAR_6);

  if (!VAR_11) {
   FUNC_2(&VAR_6->dev->dev,
    "can't get memory for scratch page\n");
   return -VAR_3;
  }

  VAR_6->scratch_page_page = VAR_11;
  if (VAR_6->driver->agp_map_page) {
   if (VAR_6->driver->agp_map_page(VAR_11,
        &VAR_6->scratch_page_dma)) {
    FUNC_2(&VAR_6->dev->dev,
     "unable to dma-map scratch page\n");
    VAR_8 = -VAR_3;
    goto err_out_nounmap;
   }
  } else {
   VAR_6->scratch_page_dma = FUNC_5(VAR_11);
  }

  VAR_6->scratch_page = VAR_6->driver->mask_memory(VAR_6,
         VAR_6->scratch_page_dma, 0);
 }

 VAR_7 = VAR_6->driver->fetch_size();
 if (VAR_7 == 0) {
  FUNC_2(&VAR_6->dev->dev, "can't determine aperture size\n");
  VAR_8 = -VAR_2;
  goto err_out;
 }
 if (VAR_6->driver->create_gatt_table(VAR_6)) {
  FUNC_2(&VAR_6->dev->dev,
   "can't get memory for graphics translation table\n");
  VAR_8 = -VAR_3;
  goto err_out;
 }
 VAR_9 = 1;

 VAR_6->key_list = FUNC_18(VAR_4 * 4);
 if (VAR_6->key_list == ((void*)0)) {
  FUNC_2(&VAR_6->dev->dev,
   "can't allocate memory for key lists\n");
  VAR_8 = -VAR_3;
  goto err_out;
 }
 VAR_10 = 1;


 FUNC_3(VAR_6->key_list, 0, VAR_4 * 4);

 if (VAR_6->driver->configure()) {
  FUNC_2(&VAR_6->dev->dev, "error configuring host chipset\n");
  VAR_8 = -VAR_2;
  goto err_out;
 }
 FUNC_0(&VAR_6->mapped_list);
 FUNC_6(&VAR_6->mapped_lock);

 return 0;

err_out:
 if (VAR_6->driver->needs_scratch_page &&
     VAR_6->driver->agp_unmap_page) {
  VAR_6->driver->agp_unmap_page(VAR_6->scratch_page_page,
            VAR_6->scratch_page_dma);
 }
err_out_nounmap:
 if (VAR_6->driver->needs_scratch_page) {
  void *VAR_12 = FUNC_4(VAR_6->scratch_page_page);

  VAR_6->driver->agp_destroy_page(VAR_12, VAR_1);
  VAR_6->driver->agp_destroy_page(VAR_12, VAR_0);
 }
 if (VAR_9)
  VAR_6->driver->free_gatt_table(VAR_6);
 if (VAR_10) {
  FUNC_17(VAR_6->key_list);
  VAR_6->key_list = ((void*)0);
 }
 return VAR_8;
}
