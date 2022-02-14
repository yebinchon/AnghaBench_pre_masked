
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_minor {int master_list; } ;
struct TYPE_2__ {int lock_queue; int spinlock; } ;
struct drm_master {int head; struct drm_minor* minor; int magicfree; int magiclist; TYPE_1__ lock; int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct drm_master* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

struct drm_master *FUNC_7(struct drm_minor *VAR_2)
{
 struct drm_master *VAR_3;

 VAR_3 = FUNC_4(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return ((void*)0);

 FUNC_3(&VAR_3->refcount);
 FUNC_6(&VAR_3->lock.spinlock);
 FUNC_2(&VAR_3->lock.lock_queue);
 FUNC_1(&VAR_3->magiclist, VAR_0);
 FUNC_0(&VAR_3->magicfree);
 VAR_3->minor = VAR_2;

 FUNC_5(&VAR_3->head, &VAR_2->master_list);

 return VAR_3;
}
