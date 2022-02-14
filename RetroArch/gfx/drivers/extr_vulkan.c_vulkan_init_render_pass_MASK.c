
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int render_pass; TYPE_1__* context; } ;
typedef TYPE_2__ vk_t ;
struct TYPE_11__ {int colorAttachmentCount; TYPE_5__* pColorAttachments; int pipelineBindPoint; int member_0; } ;
typedef TYPE_3__ VkSubpassDescription ;
struct TYPE_12__ {int attachmentCount; int subpassCount; TYPE_3__* pSubpasses; TYPE_6__* pAttachments; int member_0; } ;
typedef TYPE_4__ VkRenderPassCreateInfo ;
struct TYPE_13__ {void* member_1; int member_0; } ;
typedef TYPE_5__ VkAttachmentReference ;
struct TYPE_14__ {void* finalLayout; void* initialLayout; int stencilStoreOp; int stencilLoadOp; int storeOp; int loadOp; int samples; int format; int member_0; } ;
typedef TYPE_6__ VkAttachmentDescription ;
struct TYPE_9__ {int device; int swapchain_format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,TYPE_4__*,int *,int *) ;

__attribute__((used)) static void FUNC_1(
      vk_t *VAR_8)
{
   VkRenderPassCreateInfo VAR_9 = {
      VAR_7 };
   VkAttachmentDescription VAR_10 = {0};
   VkSubpassDescription VAR_11 = {0};
   VkAttachmentReference VAR_12 = { 0,
      VAR_4 };


   VAR_10.format = VAR_8->context->swapchain_format;

   VAR_10.samples = VAR_6;

   VAR_10.loadOp = VAR_0;

   VAR_10.storeOp = VAR_3;

   VAR_10.stencilLoadOp = VAR_1;
   VAR_10.stencilStoreOp = VAR_2;



   VAR_10.initialLayout = VAR_4;
   VAR_10.finalLayout = VAR_4;



   VAR_11.pipelineBindPoint = VAR_5;
   VAR_11.colorAttachmentCount = 1;
   VAR_11.pColorAttachments = &VAR_12;


   VAR_9.attachmentCount = 1;
   VAR_9.pAttachments = &VAR_10;
   VAR_9.subpassCount = 1;
   VAR_9.pSubpasses = &VAR_11;

   FUNC_0(VAR_8->context->device,
         &VAR_9, ((void*)0), &VAR_8->render_pass);
}
