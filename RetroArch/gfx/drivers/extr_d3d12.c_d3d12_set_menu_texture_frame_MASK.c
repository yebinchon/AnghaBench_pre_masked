
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_16__ {scalar_t__ menu_linear_filter; } ;
struct TYPE_17__ {TYPE_4__ bools; } ;
typedef TYPE_5__ settings_t ;
struct TYPE_13__ {unsigned int Width; unsigned int Height; int Format; } ;
struct TYPE_21__ {int sampler; int * srv_heap; TYPE_1__ desc; } ;
struct TYPE_15__ {float alpha; TYPE_9__ texture; int vbo; } ;
struct TYPE_14__ {int srv_heap; } ;
struct TYPE_18__ {int ** samplers; TYPE_3__ menu; int device; TYPE_2__ desc; } ;
typedef TYPE_6__ d3d12_video_t ;
struct TYPE_19__ {float* color; } ;
typedef TYPE_7__ d3d12_vertex_t ;
struct TYPE_20__ {int member_1; int member_0; } ;
typedef int DXGI_FORMAT ;
typedef TYPE_8__ D3D12_RANGE ;


 int FUNC_0 (int ,int ,TYPE_8__*,void**) ;
 int FUNC_1 (int ,int ,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 TYPE_5__* FUNC_2 () ;
 int FUNC_3 (int ,TYPE_9__*) ;
 int FUNC_4 (unsigned int,unsigned int,int,int ,void const*,TYPE_9__*) ;

__attribute__((used)) static void FUNC_5(
      void* VAR_5, const void* VAR_6, bool VAR_7,
      unsigned VAR_8, unsigned VAR_9, float VAR_10)
{
   d3d12_video_t* VAR_11 = (d3d12_video_t*)VAR_5;
   settings_t* VAR_12 = FUNC_2();
   int VAR_13 = VAR_8 *
      (VAR_7 ? sizeof(uint32_t) : sizeof(uint16_t));
   DXGI_FORMAT VAR_14 = VAR_7 ? VAR_0
      : (DXGI_FORMAT)VAR_1;

   if (
         VAR_11->menu.texture.desc.Width != VAR_8 ||
         VAR_11->menu.texture.desc.Height != VAR_9)
   {
      VAR_11->menu.texture.desc.Width = VAR_8;
      VAR_11->menu.texture.desc.Height = VAR_9;
      VAR_11->menu.texture.desc.Format = VAR_14;
      VAR_11->menu.texture.srv_heap = &VAR_11->desc.srv_heap;
      FUNC_3(VAR_11->device, &VAR_11->menu.texture);
   }

   FUNC_4(VAR_8, VAR_9, VAR_13,
         VAR_14, VAR_6, &VAR_11->menu.texture);

   VAR_11->menu.alpha = VAR_10;

   {
      D3D12_RANGE VAR_15 = { 0, 0 };
      d3d12_vertex_t* VAR_16 = ((void*)0);

      FUNC_0(VAR_11->menu.vbo, 0, &VAR_15, (void**)&VAR_16);
      VAR_16[0].color[3] = VAR_10;
      VAR_16[1].color[3] = VAR_10;
      VAR_16[2].color[3] = VAR_10;
      VAR_16[3].color[3] = VAR_10;
      FUNC_1(VAR_11->menu.vbo, 0, ((void*)0));
   }

   VAR_11->menu.texture.sampler = VAR_12->bools.menu_linear_filter
      ? VAR_11->samplers[VAR_2][VAR_4]
      : VAR_11->samplers[VAR_3][VAR_4];
}
