
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_object_file {int * ref_hash; int ref_list; int refcount; struct ttm_object_device* tdev; int lock; } ;
struct ttm_object_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 unsigned int VAR_1 ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ttm_object_file*) ;
 struct ttm_object_file* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;

struct ttm_object_file *FUNC_8(struct ttm_object_device *VAR_2,
          unsigned int VAR_3)
{
 struct ttm_object_file *VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_0);
 unsigned int VAR_5;
 unsigned int VAR_6 = 0;
 int VAR_7;

 if (FUNC_7(VAR_4 == ((void*)0)))
  return ((void*)0);

 FUNC_6(&VAR_4->lock);
 VAR_4->tdev = VAR_2;
 FUNC_5(&VAR_4->refcount);
 FUNC_0(&VAR_4->ref_list);

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  VAR_7 = FUNC_1(&VAR_4->ref_hash[VAR_5], VAR_3);
  if (VAR_7) {
   VAR_6 = VAR_5;
   goto out_err;
  }
 }

 return VAR_4;
out_err:
 for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_5)
  FUNC_2(&VAR_4->ref_hash[VAR_5]);

 FUNC_3(VAR_4);

 return ((void*)0);
}
