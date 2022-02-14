
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_18__ {int * handle; int * allocator; int * cmd; int * fence; } ;
struct TYPE_17__ {int * handle; int ** renderTargets; } ;
struct TYPE_28__ {int * pipe_font; int * pipe_noblend; int * pipe_blend; int * vbo; } ;
struct TYPE_26__ {int * handle; TYPE_12__* map; } ;
struct TYPE_25__ {int * handle; TYPE_12__* map; } ;
struct TYPE_24__ {int * handle; TYPE_12__* map; } ;
struct TYPE_27__ {int * rootSignature; int * sl_rootSignature; int * cs_rootSignature; TYPE_7__ rtv_heap; TYPE_6__ srv_heap; TYPE_5__ sampler_heap; } ;
struct TYPE_22__ {int * upload_buffer; int * handle; } ;
struct TYPE_23__ {TYPE_3__ texture; int * vbo; } ;
struct TYPE_21__ {TYPE_1__* texture; int * vbo; int * ubo; } ;
struct TYPE_19__ {int ** adapters; int * adapter; int * device; int * factory; TYPE_11__ queue; TYPE_10__ chain; TYPE_9__ sprites; int * mipmapgen_pipe; int ** pipes; int * ubo; TYPE_8__ desc; TYPE_4__ menu; TYPE_2__ frame; int * menu_pipeline_vbo; } ;
typedef TYPE_12__ d3d12_video_t ;
struct TYPE_20__ {int * upload_buffer; int * handle; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_12__*) ;
 int FUNC_2 (TYPE_12__*) ;
 int FUNC_3 (TYPE_12__*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_12__*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(void* VAR_2)
{
   unsigned VAR_3;
   d3d12_video_t* VAR_4 = (d3d12_video_t*)VAR_2;

   if (!VAR_4)
      return;

   FUNC_3(VAR_4);





   FUNC_2(VAR_4);

   FUNC_4();

   FUNC_0(VAR_4->sprites.vbo);
   FUNC_0(VAR_4->menu_pipeline_vbo);

   FUNC_0(VAR_4->frame.ubo);
   FUNC_0(VAR_4->frame.vbo);
   FUNC_0(VAR_4->frame.texture[0].handle);
   FUNC_0(VAR_4->frame.texture[0].upload_buffer);
   FUNC_0(VAR_4->menu.vbo);
   FUNC_0(VAR_4->menu.texture.handle);
   FUNC_0(VAR_4->menu.texture.upload_buffer);

   FUNC_5(VAR_4->desc.sampler_heap.map);
   FUNC_5(VAR_4->desc.srv_heap.map);
   FUNC_5(VAR_4->desc.rtv_heap.map);
   FUNC_0(VAR_4->desc.sampler_heap.handle);
   FUNC_0(VAR_4->desc.srv_heap.handle);
   FUNC_0(VAR_4->desc.rtv_heap.handle);

   FUNC_0(VAR_4->desc.cs_rootSignature);
   FUNC_0(VAR_4->desc.sl_rootSignature);
   FUNC_0(VAR_4->desc.rootSignature);

   FUNC_0(VAR_4->ubo);

   for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
      FUNC_0(VAR_4->pipes[VAR_3]);

   FUNC_0(VAR_4->mipmapgen_pipe);
   FUNC_0(VAR_4->sprites.pipe_blend);
   FUNC_0(VAR_4->sprites.pipe_noblend);
   FUNC_0(VAR_4->sprites.pipe_font);

   FUNC_0(VAR_4->queue.fence);
   FUNC_0(VAR_4->chain.renderTargets[0]);
   FUNC_0(VAR_4->chain.renderTargets[1]);
   FUNC_0(VAR_4->chain.handle);

   FUNC_0(VAR_4->queue.cmd);
   FUNC_0(VAR_4->queue.allocator);
   FUNC_0(VAR_4->queue.handle);

   FUNC_0(VAR_4->factory);
   FUNC_0(VAR_4->device);
   FUNC_0(VAR_4->adapter);

   for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   {
      if (VAR_4->adapters[VAR_3])
      {
         FUNC_0(VAR_4->adapters[VAR_3]);
         VAR_4->adapters[VAR_3] = ((void*)0);
      }
   }
   FUNC_5(VAR_4);
}
