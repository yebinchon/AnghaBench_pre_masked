
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ttm_buffer_object {struct ttm_bo_global* glob; } ;
struct ttm_bo_global {int lru_lock; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ttm_buffer_object*) ;
 int FUNC_4 (struct ttm_buffer_object*,int,int) ;
 int FUNC_5 (struct ttm_buffer_object*,int,int,int,int ) ;

int FUNC_6(struct ttm_buffer_object *VAR_0,
     bool VAR_1,
     bool VAR_2, bool VAR_3, uint32_t VAR_4)
{
 struct ttm_bo_global *VAR_5 = VAR_0->glob;
 int VAR_6 = 0;
 int VAR_7;

 VAR_7 = FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3,
       VAR_4);
 if (FUNC_0(VAR_7 == 0)) {
  FUNC_1(&VAR_5->lru_lock);
  VAR_6 = FUNC_3(VAR_0);
  FUNC_2(&VAR_5->lru_lock);
  FUNC_4(VAR_0, VAR_6, 1);
 }

 return VAR_7;
}
