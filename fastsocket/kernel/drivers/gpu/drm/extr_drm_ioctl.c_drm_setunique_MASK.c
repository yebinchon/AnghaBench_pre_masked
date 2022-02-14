
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_unique {int unique_len; } ;
struct drm_master {scalar_t__ unique; scalar_t__ unique_len; } ;
struct drm_file {struct drm_master* master; } ;
struct drm_device {TYPE_2__* driver; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {int (* set_unique ) (struct drm_device*,struct drm_master*,struct drm_unique*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,struct drm_master*) ;
 int FUNC_1 (struct drm_device*,struct drm_master*,struct drm_unique*) ;

int FUNC_2(struct drm_device *VAR_2, void *VAR_3,
    struct drm_file *VAR_4)
{
 struct drm_unique *VAR_5 = VAR_3;
 struct drm_master *VAR_6 = VAR_4->master;
 int VAR_7;

 if (VAR_6->unique_len || VAR_6->unique)
  return -VAR_0;

 if (!VAR_5->unique_len || VAR_5->unique_len > 1024)
  return -VAR_1;

 if (!VAR_2->driver->bus->set_unique)
  return -VAR_1;

 VAR_7 = VAR_2->driver->bus->set_unique(VAR_2, VAR_6, VAR_5);
 if (VAR_7)
  goto err;

 return 0;

err:
 FUNC_0(VAR_2, VAR_6);
 return VAR_7;
}
