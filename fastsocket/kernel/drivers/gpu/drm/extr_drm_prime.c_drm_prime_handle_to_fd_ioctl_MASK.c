
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_prime_handle {int flags; int fd; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* prime_handle_to_fd ) (struct drm_device*,struct drm_file*,int ,int,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_device*,struct drm_file*,int ,int,int *) ;

int FUNC_2(struct drm_device *VAR_4, void *VAR_5,
     struct drm_file *VAR_6)
{
 struct drm_prime_handle *VAR_7 = VAR_5;
 uint32_t VAR_8;

 if (!FUNC_0(VAR_4, VAR_0))
  return -VAR_2;

 if (!VAR_4->driver->prime_handle_to_fd)
  return -VAR_3;


 if (VAR_7->flags & ~VAR_1)
  return -VAR_2;


 VAR_8 = VAR_7->flags & VAR_1;

 return VAR_4->driver->prime_handle_to_fd(VAR_4, VAR_6,
   VAR_7->handle, VAR_8, &VAR_7->fd);
}
