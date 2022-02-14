
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_prime_handle {int handle; int fd; } ;
struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* prime_fd_to_handle ) (struct drm_device*,struct drm_file*,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_device*,struct drm_file*,int ,int *) ;

int FUNC_2(struct drm_device *VAR_3, void *VAR_4,
     struct drm_file *VAR_5)
{
 struct drm_prime_handle *VAR_6 = VAR_4;

 if (!FUNC_0(VAR_3, VAR_0))
  return -VAR_1;

 if (!VAR_3->driver->prime_fd_to_handle)
  return -VAR_2;

 return VAR_3->driver->prime_fd_to_handle(VAR_3, VAR_5,
   VAR_6->fd, &VAR_6->handle);
}
