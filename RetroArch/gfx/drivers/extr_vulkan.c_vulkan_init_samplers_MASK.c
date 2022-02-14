
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int mipmap_linear; int mipmap_nearest; int linear; int nearest; } ;
struct TYPE_9__ {TYPE_2__ samplers; TYPE_1__* context; } ;
typedef TYPE_3__ vk_t ;
struct TYPE_10__ {float mipLodBias; float maxAnisotropy; int compareEnable; float minLod; float maxLod; int unnormalizedCoordinates; void* mipmapMode; void* minFilter; void* magFilter; int borderColor; void* addressModeW; void* addressModeV; void* addressModeU; int member_0; } ;
typedef TYPE_4__ VkSamplerCreateInfo ;
struct TYPE_7__ {int device; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 float VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,TYPE_4__*,int *,int *) ;

__attribute__((used)) static void FUNC_1(vk_t *VAR_8)
{
   VkSamplerCreateInfo VAR_9 =
   { VAR_7 };

   VAR_9.magFilter = VAR_2;
   VAR_9.minFilter = VAR_2;
   VAR_9.mipmapMode = VAR_6;
   VAR_9.addressModeU = VAR_4;
   VAR_9.addressModeV = VAR_4;
   VAR_9.addressModeW = VAR_4;
   VAR_9.mipLodBias = 0.0f;
   VAR_9.maxAnisotropy = 1.0f;
   VAR_9.compareEnable = 0;
   VAR_9.minLod = 0.0f;
   VAR_9.maxLod = 0.0f;
   VAR_9.unnormalizedCoordinates = 0;
   VAR_9.borderColor = VAR_0;
   FUNC_0(VAR_8->context->device,
         &VAR_9, ((void*)0), &VAR_8->samplers.nearest);

   VAR_9.magFilter = VAR_1;
   VAR_9.minFilter = VAR_1;
   FUNC_0(VAR_8->context->device,
         &VAR_9, ((void*)0), &VAR_8->samplers.linear);

   VAR_9.maxLod = VAR_3;
   VAR_9.magFilter = VAR_2;
   VAR_9.minFilter = VAR_2;
   VAR_9.mipmapMode = VAR_6;
   FUNC_0(VAR_8->context->device,
         &VAR_9, ((void*)0), &VAR_8->samplers.mipmap_nearest);

   VAR_9.magFilter = VAR_1;
   VAR_9.minFilter = VAR_1;
   VAR_9.mipmapMode = VAR_5;
   FUNC_0(VAR_8->context->device,
         &VAR_9, ((void*)0), &VAR_8->samplers.mipmap_linear);
}
