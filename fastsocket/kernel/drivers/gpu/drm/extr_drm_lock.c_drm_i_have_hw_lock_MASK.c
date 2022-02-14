
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct drm_file* file_priv; TYPE_1__* hw_lock; } ;
struct drm_master {TYPE_2__ lock; } ;
struct drm_file {scalar_t__ lock_count; struct drm_master* master; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {int lock; } ;


 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(struct drm_device *VAR_0, struct drm_file *VAR_1)
{
 struct drm_master *VAR_2 = VAR_1->master;
 return (VAR_1->lock_count && VAR_2->lock.hw_lock &&
  FUNC_0(VAR_2->lock.hw_lock->lock) &&
  VAR_2->lock.file_priv == VAR_1);
}
