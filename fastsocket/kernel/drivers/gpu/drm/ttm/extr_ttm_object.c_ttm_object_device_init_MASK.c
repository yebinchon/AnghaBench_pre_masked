
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_object_device {int object_hash; int object_count; int object_lock; struct ttm_mem_global* mem_glob; } ;
struct ttm_mem_global {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (struct ttm_object_device*) ;
 struct ttm_object_device* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;

struct ttm_object_device *FUNC_7(struct ttm_mem_global
       *VAR_1,
       unsigned int VAR_2)
{
 struct ttm_object_device *VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 int VAR_4;

 if (FUNC_6(VAR_3 == ((void*)0)))
  return ((void*)0);

 VAR_3->mem_glob = VAR_1;
 FUNC_5(&VAR_3->object_lock);
 FUNC_0(&VAR_3->object_count, 0);
 VAR_4 = FUNC_1(&VAR_3->object_hash, VAR_2);

 if (FUNC_4(VAR_4 == 0))
  return VAR_3;

 FUNC_2(VAR_3);
 return ((void*)0);
}
