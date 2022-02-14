
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_master {int lock; } ;
struct drm_lock {scalar_t__ context; } ;
struct drm_file {struct drm_master* master; } ;
struct drm_device {int * counts; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;

int FUNC_5(struct drm_device *VAR_4, void *VAR_5, struct drm_file *VAR_6)
{
 struct drm_lock *VAR_7 = VAR_5;
 struct drm_master *VAR_8 = VAR_6->master;

 if (VAR_7->context == VAR_0) {
  FUNC_0("Process %d using kernel context %d\n",
     FUNC_3(VAR_3), VAR_7->context);
  return -VAR_1;
 }

 FUNC_1(&VAR_4->counts[VAR_2]);

 if (FUNC_2(&VAR_8->lock, VAR_7->context)) {

 }

 FUNC_4();
 return 0;
}
