
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mipmap_linear; int mipmap_nearest; int linear; int nearest; } ;
struct TYPE_7__ {TYPE_2__ samplers; TYPE_1__* context; } ;
typedef TYPE_3__ vk_t ;
struct TYPE_5__ {int device; } ;


 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_1(vk_t *VAR_0)
{
   FUNC_0(VAR_0->context->device, VAR_0->samplers.nearest, ((void*)0));
   FUNC_0(VAR_0->context->device, VAR_0->samplers.linear, ((void*)0));
   FUNC_0(VAR_0->context->device, VAR_0->samplers.mipmap_nearest, ((void*)0));
   FUNC_0(VAR_0->context->device, VAR_0->samplers.mipmap_linear, ((void*)0));
}
