
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


struct TYPE_10__ {TYPE_5__* texture; } ;
struct TYPE_9__ {int srv_heap; } ;
struct TYPE_11__ {int init_history; TYPE_3__ frame; int device; TYPE_2__ desc; TYPE_7__* shader_preset; } ;
typedef TYPE_4__ d3d12_video_t ;
struct TYPE_13__ {scalar_t__ history_size; } ;
struct TYPE_8__ {unsigned int Width; unsigned int Height; int MipLevels; int Format; } ;
struct TYPE_12__ {int * srv_heap; TYPE_1__ desc; } ;


 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (int ,TYPE_5__*) ;

__attribute__((used)) static void FUNC_2(d3d12_video_t* VAR_0, unsigned VAR_1, unsigned VAR_2)
{
   unsigned VAR_3;





   FUNC_0(VAR_0->shader_preset);
   for (VAR_3 = 0; VAR_3 < (unsigned)VAR_0->shader_preset->history_size + 1; VAR_3++)
   {
      VAR_0->frame.texture[VAR_3].desc.Width = VAR_1;
      VAR_0->frame.texture[VAR_3].desc.Height = VAR_2;
      VAR_0->frame.texture[VAR_3].desc.Format = VAR_0->frame.texture[0].desc.Format;
      VAR_0->frame.texture[VAR_3].desc.MipLevels = VAR_0->frame.texture[0].desc.MipLevels;
      VAR_0->frame.texture[VAR_3].srv_heap = &VAR_0->desc.srv_heap;
      FUNC_1(VAR_0->device, &VAR_0->frame.texture[VAR_3]);

   }
   VAR_0->init_history = 0;
}
