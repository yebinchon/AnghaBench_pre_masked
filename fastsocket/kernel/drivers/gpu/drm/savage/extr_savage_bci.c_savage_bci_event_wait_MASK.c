
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_4__ {int* status_ptr; unsigned int event_wrap; unsigned int event_counter; int (* wait_evnt ) (TYPE_1__*,unsigned int) ;} ;
typedef TYPE_1__ drm_savage_private_t ;
struct TYPE_5__ {int count; } ;
typedef TYPE_2__ drm_savage_event_wait_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_1, void *VAR_2, struct drm_file *VAR_3)
{
 drm_savage_private_t *VAR_4 = VAR_1->dev_private;
 drm_savage_event_wait_t *VAR_5 = VAR_2;
 unsigned int VAR_6, VAR_7;
 unsigned int VAR_8, VAR_9;

 FUNC_0("\n");

 FUNC_2();
 if (VAR_4->status_ptr)
  VAR_7 = VAR_4->status_ptr[1] & 0xffff;
 else
  VAR_7 = FUNC_1(VAR_0) & 0xffff;
 VAR_9 = VAR_4->event_wrap;
 if (VAR_7 > VAR_4->event_counter)
  VAR_9--;

 VAR_6 = VAR_5->count & 0xffff;
 VAR_8 = VAR_5->count >> 16;





 if (VAR_8 < VAR_9 || (VAR_8 == VAR_9 && VAR_6 <= VAR_7))
  return 0;
 else
  return VAR_4->wait_evnt(VAR_4, VAR_6);
}
