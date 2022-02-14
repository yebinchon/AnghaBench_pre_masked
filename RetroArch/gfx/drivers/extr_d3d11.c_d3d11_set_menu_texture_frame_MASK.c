
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


struct TYPE_11__ {scalar_t__ menu_linear_filter; } ;
struct TYPE_12__ {TYPE_3__ bools; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_9__ {unsigned int Width; unsigned int Height; int Format; } ;
struct TYPE_14__ {int sampler; TYPE_1__ desc; } ;
struct TYPE_10__ {TYPE_6__ texture; } ;
struct TYPE_13__ {int ** samplers; TYPE_2__ menu; int context; int device; } ;
typedef TYPE_5__ d3d11_video_t ;
typedef int DXGI_FORMAT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 TYPE_4__* FUNC_0 () ;
 int FUNC_1 (int ,TYPE_6__*) ;
 int FUNC_2 (int ,unsigned int,unsigned int,int ,int ,void const*,TYPE_6__*) ;

__attribute__((used)) static void FUNC_3(
      void* VAR_5, const void* VAR_6, bool VAR_7, unsigned VAR_8, unsigned VAR_9, float VAR_10)
{
   d3d11_video_t* VAR_11 = (d3d11_video_t*)VAR_5;
   settings_t* VAR_12 = FUNC_0();
   DXGI_FORMAT VAR_13 = VAR_7 ? VAR_0 :
      (DXGI_FORMAT)VAR_1;

   if (
         VAR_11->menu.texture.desc.Width != VAR_8 ||
         VAR_11->menu.texture.desc.Height != VAR_9)
   {
      VAR_11->menu.texture.desc.Format = VAR_13;
      VAR_11->menu.texture.desc.Width = VAR_8;
      VAR_11->menu.texture.desc.Height = VAR_9;
      FUNC_1(VAR_11->device, &VAR_11->menu.texture);
   }

   FUNC_2(VAR_11->context, VAR_8, VAR_9, 0,
         VAR_13, VAR_6, &VAR_11->menu.texture);
   VAR_11->menu.texture.sampler = VAR_11->samplers
      [VAR_12->bools.menu_linear_filter
      ? VAR_2
         : VAR_3][VAR_4];
}
