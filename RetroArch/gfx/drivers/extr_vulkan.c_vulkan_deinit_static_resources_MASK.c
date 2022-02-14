
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_7__* staging; } ;
struct TYPE_11__ {int wait_dst_stages; int cmd; } ;
struct TYPE_15__ {scalar_t__ memory; } ;
struct TYPE_10__ {TYPE_7__ blank_texture; } ;
struct TYPE_9__ {int cache; } ;
struct TYPE_14__ {TYPE_5__ readback; TYPE_4__* context; TYPE_3__ hw; int staging_pool; TYPE_2__ display; TYPE_1__ pipelines; } ;
typedef TYPE_6__ vk_t ;
struct TYPE_12__ {int device; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,TYPE_7__*) ;

__attribute__((used)) static void FUNC_4(vk_t *VAR_2)
{
   unsigned VAR_3;
   FUNC_2(VAR_2->context->device,
         VAR_2->pipelines.cache, ((void*)0));
   FUNC_3(
         VAR_2->context->device,
         &VAR_2->display.blank_texture);

   FUNC_1(VAR_2->context->device,
         VAR_2->staging_pool, ((void*)0));
   FUNC_0(VAR_2->hw.cmd);
   FUNC_0(VAR_2->hw.wait_dst_stages);

   for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
      if (VAR_2->readback.staging[VAR_3].memory != VAR_0)
         FUNC_3(
               VAR_2->context->device,
               &VAR_2->readback.staging[VAR_3]);
}
