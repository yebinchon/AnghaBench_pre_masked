
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_type_manager {int lru; } ;
struct ttm_bo_global {int lru_lock; } ;
struct ttm_bo_device {struct ttm_bo_global* glob; struct ttm_mem_type_manager* man; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ttm_bo_device*,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_5(struct ttm_bo_device *VAR_0,
     unsigned VAR_1, bool VAR_2)
{
 struct ttm_mem_type_manager *VAR_3 = &VAR_0->man[VAR_1];
 struct ttm_bo_global *VAR_4 = VAR_0->glob;
 int VAR_5;





 FUNC_2(&VAR_4->lru_lock);
 while (!FUNC_0(&VAR_3->lru)) {
  FUNC_3(&VAR_4->lru_lock);
  VAR_5 = FUNC_4(VAR_0, VAR_1, 0, 0);
  if (VAR_5) {
   if (VAR_2) {
    return VAR_5;
   } else {
    FUNC_1("Cleanup eviction failed\n");
   }
  }
  FUNC_2(&VAR_4->lru_lock);
 }
 FUNC_3(&VAR_4->lru_lock);
 return 0;
}
