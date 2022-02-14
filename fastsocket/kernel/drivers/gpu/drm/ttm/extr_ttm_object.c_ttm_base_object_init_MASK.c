
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_object_file {struct ttm_object_device* tdev; } ;
struct ttm_object_device {int object_hash; int object_lock; } ;
struct ttm_base_object {int shareable; void (* refcount_release ) (struct ttm_base_object**) ;void (* ref_obj_release ) (struct ttm_base_object*,int) ;int object_type; int hash; int refcount; int tfile; } ;
typedef enum ttm_object_type { ____Placeholder_ttm_object_type } ttm_object_type ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,unsigned long,int,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ttm_base_object**) ;
 int FUNC_4 (struct ttm_object_file*) ;
 int FUNC_5 (struct ttm_object_file*,struct ttm_base_object*,int ,int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct ttm_object_file *VAR_1,
    struct ttm_base_object *VAR_2,
    bool VAR_3,
    enum ttm_object_type VAR_4,
    void (*VAR_5) (struct ttm_base_object **),
    void (*VAR_6) (struct ttm_base_object *,
        enum ttm_ref_type VAR_7))
{
 struct ttm_object_device *VAR_8 = VAR_1->tdev;
 int VAR_9;

 VAR_2->shareable = VAR_3;
 VAR_2->tfile = FUNC_4(VAR_1);
 VAR_2->refcount_release = VAR_5;
 VAR_2->ref_obj_release = VAR_6;
 VAR_2->object_type = VAR_4;
 FUNC_7(&VAR_8->object_lock);
 FUNC_2(&VAR_2->refcount);
 VAR_9 = FUNC_0(&VAR_8->object_hash,
     &VAR_2->hash,
     (unsigned long)VAR_2, 31, 0, 0);
 FUNC_8(&VAR_8->object_lock);
 if (FUNC_6(VAR_9 != 0))
  goto out_err0;

 VAR_9 = FUNC_5(VAR_1, VAR_2, VAR_0, ((void*)0));
 if (FUNC_6(VAR_9 != 0))
  goto out_err1;

 FUNC_3(&VAR_2);

 return 0;
out_err1:
 (void)FUNC_1(&VAR_8->object_hash, &VAR_2->hash);
out_err0:
 return VAR_9;
}
