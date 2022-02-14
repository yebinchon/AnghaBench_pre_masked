
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vm_shared_region_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ slide; int * slide_object; } ;
struct TYPE_6__ {int sr_ref_count; TYPE_1__ sr_slide_info; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;

uint32_t
FUNC_3(
 vm_shared_region_t VAR_0)
{
 FUNC_0(
  ("shared_region: -> vm_shared_region_get_slide(%p)\n",
   (void *)FUNC_1(VAR_0)));
 FUNC_2(VAR_0->sr_ref_count > 1);
 FUNC_0(
  ("shared_region: vm_shared_region_get_slide(%p) <- %u\n",
   (void )FUNC_1(VAR_0),
   VAR_0->sr_slide_info.slide));


 FUNC_2(VAR_0->sr_slide_info.slide_object != ((void*)0) ||
   VAR_0->sr_slide_info.slide == 0);

 return VAR_0->sr_slide_info.slide;
}
