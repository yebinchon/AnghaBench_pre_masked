
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_user_sdma_queue {int pkt_slab; int dma_pages_root; int header_cache; int header_cache_name; int pkt_slab_name; int lock; int sent; scalar_t__ sent_counter; scalar_t__ counter; } ;
struct ipath_user_sdma_pkt {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct device*,int ,int,int ) ;
 int FUNC_2 (struct ipath_user_sdma_queue*) ;
 struct ipath_user_sdma_queue* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int,int ,int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int,char*,int,int,int) ;

struct ipath_user_sdma_queue *
FUNC_8(struct device *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct ipath_user_sdma_queue *VAR_7 =
  FUNC_3(sizeof(struct ipath_user_sdma_queue), VAR_0);

 if (!VAR_7)
  goto done;

 VAR_7->counter = 0;
 VAR_7->sent_counter = 0;
 FUNC_0(&VAR_7->sent);

 FUNC_6(&VAR_7->lock);

 FUNC_7(VAR_7->pkt_slab_name, sizeof(VAR_7->pkt_slab_name),
   "ipath-user-sdma-pkts-%u-%02u.%02u", VAR_4, VAR_5, VAR_6);
 VAR_7->pkt_slab = FUNC_4(VAR_7->pkt_slab_name,
      sizeof(struct ipath_user_sdma_pkt),
      0, 0, ((void*)0));

 if (!VAR_7->pkt_slab)
  goto err_kfree;

 FUNC_7(VAR_7->header_cache_name, sizeof(VAR_7->header_cache_name),
   "ipath-user-sdma-headers-%u-%02u.%02u", VAR_4, VAR_5, VAR_6);
 VAR_7->header_cache = FUNC_1(VAR_7->header_cache_name,
        VAR_3,
        VAR_1,
        4, 0);
 if (!VAR_7->header_cache)
  goto err_slab;

 VAR_7->dma_pages_root = VAR_2;

 goto done;

err_slab:
 FUNC_5(VAR_7->pkt_slab);
err_kfree:
 FUNC_2(VAR_7);
 VAR_7 = ((void*)0);

done:
 return VAR_7;
}
