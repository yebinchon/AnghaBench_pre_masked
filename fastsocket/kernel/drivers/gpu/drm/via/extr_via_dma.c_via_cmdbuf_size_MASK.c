
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_file {int dummy; } ;
struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_6__ {int * virtual_start; } ;
struct TYPE_7__ {TYPE_1__ ring; } ;
typedef TYPE_2__ drm_via_private_t ;
struct TYPE_8__ {int size; int func; int wait; } ;
typedef TYPE_3__ drm_via_cmdbuf_size_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct drm_device*,struct drm_file*) ;


 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_2, void *VAR_3, struct drm_file *VAR_4)
{
 drm_via_cmdbuf_size_t *VAR_5 = VAR_3;
 int VAR_6 = 0;
 uint32_t VAR_7, VAR_8;
 drm_via_private_t *VAR_9;

 FUNC_0("\n");
 FUNC_2(VAR_2, VAR_4);

 VAR_9 = (drm_via_private_t *) VAR_2->dev_private;

 if (VAR_9->ring.virtual_start == ((void*)0)) {
  FUNC_1("called without initializing AGP ring buffer.\n");
  return -VAR_1;
 }

 VAR_8 = 1000000;
 VAR_7 = VAR_5->size;
 switch (VAR_5->func) {
 case 128:
  while (((VAR_7 = FUNC_4(VAR_9)) < VAR_5->size)
         && --VAR_8) {
   if (!VAR_5->wait)
    break;
  }
  if (!VAR_8) {
   FUNC_1("VIA_CMDBUF_SPACE timed out.\n");
   VAR_6 = -VAR_0;
  }
  break;
 case 129:
  while (((VAR_7 = FUNC_3(VAR_9)) > VAR_5->size)
         && --VAR_8) {
   if (!VAR_5->wait)
    break;
  }
  if (!VAR_8) {
   FUNC_1("VIA_CMDBUF_LAG timed out.\n");
   VAR_6 = -VAR_0;
  }
  break;
 default:
  VAR_6 = -VAR_1;
 }
 VAR_5->size = VAR_7;

 return VAR_6;
}
