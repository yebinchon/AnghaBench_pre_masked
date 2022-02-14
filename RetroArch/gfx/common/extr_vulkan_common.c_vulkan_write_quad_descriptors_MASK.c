
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vk_texture {int layout; int view; } ;
struct TYPE_5__ {int dstBinding; int descriptorCount; TYPE_2__* pImageInfo; int descriptorType; void* dstSet; TYPE_3__* pBufferInfo; int member_0; } ;
typedef TYPE_1__ VkWriteDescriptorSet ;
typedef int VkSampler ;
typedef void* VkDeviceSize ;
typedef int VkDevice ;
typedef void* VkDescriptorSet ;
struct TYPE_6__ {int imageLayout; int imageView; int sampler; } ;
typedef TYPE_2__ VkDescriptorImageInfo ;
struct TYPE_7__ {void* range; void* offset; int buffer; } ;
typedef TYPE_3__ VkDescriptorBufferInfo ;
typedef int VkBuffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,TYPE_1__*,int ,int *) ;

__attribute__((used)) static void FUNC_1(
      VkDevice VAR_3,
      VkDescriptorSet VAR_4,
      VkBuffer VAR_5,
      VkDeviceSize VAR_6,
      VkDeviceSize VAR_7,
      const struct vk_texture *VAR_8,
      VkSampler VAR_9)
{
   VkDescriptorBufferInfo VAR_10;
   VkWriteDescriptorSet VAR_11 = { VAR_2 };

   VAR_10.buffer = VAR_5;
   VAR_10.offset = VAR_6;
   VAR_10.range = VAR_7;

   VAR_11.dstSet = VAR_4;
   VAR_11.dstBinding = 0;
   VAR_11.descriptorCount = 1;
   VAR_11.descriptorType = VAR_1;
   VAR_11.pBufferInfo = &VAR_10;
   FUNC_0(VAR_3, 1, &VAR_11, 0, ((void*)0));

   if (VAR_8)
   {
      VkDescriptorImageInfo VAR_12;

      VAR_12.sampler = VAR_9;
      VAR_12.imageView = VAR_8->view;
      VAR_12.imageLayout = VAR_8->layout;

      VAR_11.dstSet = VAR_4;
      VAR_11.dstBinding = 1;
      VAR_11.descriptorCount = 1;
      VAR_11.descriptorType = VAR_0;
      VAR_11.pImageInfo = &VAR_12;
      FUNC_0(VAR_3, 1, &VAR_11, 0, ((void*)0));
   }
}
