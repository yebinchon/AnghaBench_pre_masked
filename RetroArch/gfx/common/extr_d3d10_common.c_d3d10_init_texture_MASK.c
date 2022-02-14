
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int Count; scalar_t__ Quality; } ;
struct TYPE_15__ {int BindFlags; int MipLevels; int ArraySize; scalar_t__ Usage; int MiscFlags; int Width; int Height; void* CPUAccessFlags; int Format; TYPE_1__ SampleDesc; } ;
struct TYPE_13__ {int x; int y; float z; float w; } ;
struct TYPE_14__ {TYPE_5__ desc; TYPE_3__ size_data; int staging; int rt_view; int handle; int view; } ;
typedef TYPE_4__ d3d10_texture_t ;
typedef int UINT ;
struct TYPE_12__ {int MipLevels; scalar_t__ MostDetailedMip; } ;
struct TYPE_16__ {TYPE_2__ Texture2D; int ViewDimension; int Format; int member_0; } ;
typedef TYPE_5__ D3D10_TEXTURE2D_DESC ;
typedef TYPE_6__ D3D10_SHADER_RESOURCE_VIEW_DESC ;
typedef int D3D10Device ;


 int FUNC_0 (int ,TYPE_5__*,int *,int *) ;
 int FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (int ,int ,TYPE_6__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_4__*) ;

void FUNC_5(D3D10Device VAR_11, d3d10_texture_t* VAR_12)
{
   bool VAR_13 = VAR_12->desc.BindFlags & VAR_0;
   UINT VAR_14 = VAR_5 | VAR_4;

   FUNC_4(VAR_12);

   VAR_12->desc.MipLevels = 1;
   VAR_12->desc.ArraySize = 1;
   VAR_12->desc.SampleDesc.Count = 1;
   VAR_12->desc.SampleDesc.Quality = 0;
   VAR_12->desc.BindFlags |= VAR_1;
   VAR_12->desc.CPUAccessFlags =
      VAR_12->desc.Usage == VAR_7 ? VAR_2 : 0;

   if (VAR_12->desc.MiscFlags & VAR_6)
   {
      unsigned VAR_15, VAR_16;

      VAR_12->desc.BindFlags |= VAR_0;
      VAR_15 = VAR_12->desc.Width >> 5;
      VAR_16 = VAR_12->desc.Height >> 5;

      while (VAR_15 && VAR_16)
      {
         VAR_15 >>= 1;
         VAR_16 >>= 1;
         VAR_12->desc.MipLevels++;
      }
   }

   if (VAR_12->desc.BindFlags & VAR_0)
      VAR_14 |= VAR_3;

   VAR_12->desc.Format = FUNC_3(VAR_11, VAR_12->desc.Format, VAR_14);

   FUNC_0(VAR_11, &VAR_12->desc, ((void*)0), &VAR_12->handle);

   {
      D3D10_SHADER_RESOURCE_VIEW_DESC VAR_17 = { VAR_10 };
      VAR_17.Format = VAR_12->desc.Format;
      VAR_17.ViewDimension = VAR_9;
      VAR_17.Texture2D.MostDetailedMip = 0;
      VAR_17.Texture2D.MipLevels = -1;
      FUNC_2(VAR_11, VAR_12->handle, &VAR_17, &VAR_12->view);
   }

   if (VAR_13)
      FUNC_1(VAR_11, VAR_12->handle, ((void*)0), &VAR_12->rt_view);
   else
   {
      D3D10_TEXTURE2D_DESC VAR_18 = VAR_12->desc;
      VAR_18.MipLevels = 1;
      VAR_18.BindFlags = 0;
      VAR_18.MiscFlags = 0;
      VAR_18.Usage = VAR_8;
      VAR_18.CPUAccessFlags = VAR_2;
      FUNC_0(VAR_11, &VAR_18, ((void*)0), &VAR_12->staging);
   }

   VAR_12->size_data.x = VAR_12->desc.Width;
   VAR_12->size_data.y = VAR_12->desc.Height;
   VAR_12->size_data.z = 1.0f / VAR_12->desc.Width;
   VAR_12->size_data.w = 1.0f / VAR_12->desc.Height;
}
