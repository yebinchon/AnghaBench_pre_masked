
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ttm_placement {int dummy; } ;
struct ttm_buffer_object {int dummy; } ;
struct ttm_bo_device {int dummy; } ;
struct file {int dummy; } ;
typedef enum ttm_bo_type { ____Placeholder_ttm_bo_type } ttm_bo_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct ttm_buffer_object* FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int) ;
 size_t FUNC_2 (struct ttm_bo_device*,unsigned long,int) ;
 int FUNC_3 (struct ttm_bo_device*,struct ttm_buffer_object*,unsigned long,int,struct ttm_placement*,int ,int,struct file*,size_t,int *,int *) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(struct ttm_bo_device *VAR_2,
   unsigned long VAR_3,
   enum ttm_bo_type VAR_4,
   struct ttm_placement *VAR_5,
   uint32_t VAR_6,
   bool VAR_7,
   struct file *VAR_8,
   struct ttm_buffer_object **VAR_9)
{
 struct ttm_buffer_object *VAR_10;
 size_t VAR_11;
 int VAR_12;

 VAR_10 = FUNC_0(sizeof(*VAR_10), VAR_1);
 if (FUNC_4(VAR_10 == ((void*)0)))
  return -VAR_0;

 VAR_11 = FUNC_2(VAR_2, VAR_3, sizeof(struct ttm_buffer_object));
 VAR_12 = FUNC_3(VAR_2, VAR_10, VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8, VAR_11,
     ((void*)0), ((void*)0));
 if (FUNC_1(VAR_12 == 0))
  *VAR_9 = VAR_10;

 return VAR_12;
}
