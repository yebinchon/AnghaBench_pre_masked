
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int rarch_system_info_t ;
struct TYPE_13__ {int * set_state; int * callback; } ;
struct TYPE_11__ {int need_fullpath; int block_extract; int * valid_extensions; int * library_version; int * library_name; } ;
struct TYPE_10__ {scalar_t__ num_descriptors; int * descriptors; } ;
struct TYPE_9__ {void* data; scalar_t__ size; } ;
struct TYPE_8__ {void* data; scalar_t__ size; } ;
struct TYPE_12__ {TYPE_4__ info; TYPE_3__ mmaps; TYPE_2__ ports; TYPE_1__ subsystem; } ;


 TYPE_7__ VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_5__*,int ,int) ;
 int * VAR_1 ;
 int * VAR_2 ;
 TYPE_5__ VAR_3 ;

__attribute__((used)) static void FUNC_2(void)
{
   if (VAR_3.subsystem.data)
      FUNC_0(VAR_3.subsystem.data);
   VAR_3.subsystem.data = ((void*)0);
   VAR_3.subsystem.size = 0;

   if (VAR_3.ports.data)
      FUNC_0(VAR_3.ports.data);
   VAR_3.ports.data = ((void*)0);
   VAR_3.ports.size = 0;

   if (VAR_3.mmaps.descriptors)
      FUNC_0((void *)VAR_3.mmaps.descriptors);
   VAR_3.mmaps.descriptors = ((void*)0);
   VAR_3.mmaps.num_descriptors = 0;

   VAR_2 = ((void*)0);
   VAR_1 = ((void*)0);

   VAR_0.callback = ((void*)0);
   VAR_0.set_state = ((void*)0);

   VAR_3.info.library_name = ((void*)0);
   VAR_3.info.library_version = ((void*)0);
   VAR_3.info.valid_extensions = ((void*)0);
   VAR_3.info.need_fullpath = 0;
   VAR_3.info.block_extract = 0;

   FUNC_1(&VAR_3, 0, sizeof(rarch_system_info_t));
}
