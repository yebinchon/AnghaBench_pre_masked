
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ MipLevels; } ;
struct TYPE_7__ {int upload_buffer; int handle; TYPE_4__* cpu_descriptor; scalar_t__ srv_heap; TYPE_1__ desc; } ;
typedef TYPE_2__ d3d12_texture_t ;
struct TYPE_8__ {scalar_t__ ptr; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (scalar_t__,TYPE_4__) ;

void FUNC_3(d3d12_texture_t* VAR_0)
{
   if (!VAR_0->handle)
      return;

   if (VAR_0->srv_heap && VAR_0->desc.MipLevels <= FUNC_1(VAR_0->cpu_descriptor))
   {
      int VAR_1;
      for (VAR_1 = 0; VAR_1 < VAR_0->desc.MipLevels; VAR_1++)
      {
         FUNC_2(VAR_0->srv_heap, VAR_0->cpu_descriptor[VAR_1]);
         VAR_0->cpu_descriptor[VAR_1].ptr = 0;
      }
   }

   FUNC_0(VAR_0->handle);
   FUNC_0(VAR_0->upload_buffer);
}
