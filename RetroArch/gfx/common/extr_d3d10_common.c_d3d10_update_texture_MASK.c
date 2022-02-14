
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int MiscFlags; int Format; } ;
struct TYPE_9__ {int view; TYPE_1__ desc; int staging; int handle; } ;
typedef TYPE_2__ d3d10_texture_t ;
typedef int UINT ;
struct TYPE_11__ {int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_10__ {int pData; int RowPitch; } ;
typedef int DXGI_FORMAT ;
typedef TYPE_3__ D3D10_MAPPED_TEXTURE2D ;
typedef TYPE_4__ D3D10_BOX ;
typedef int D3D10Device ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,TYPE_4__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,TYPE_3__*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,void const*,int,int,int ,int) ;
 int FUNC_7 (int,int,int ,int,void const*,int ,int ,int ) ;

void FUNC_8(
      D3D10Device VAR_2,
      int VAR_3,
      int VAR_4,
      int VAR_5,
      DXGI_FORMAT VAR_6,
      const void* VAR_7,
      d3d10_texture_t* VAR_8)
{
   D3D10_MAPPED_TEXTURE2D VAR_9;
   D3D10_BOX VAR_10 = { 0, 0, 0, (UINT)VAR_3,
      (UINT)VAR_4, 1 };

   if (!VAR_8 || !VAR_8->staging)
      return;

   FUNC_2(VAR_8->staging,
         0, VAR_0, 0,
         &VAR_9);







   FUNC_7(
         VAR_3, VAR_4, VAR_6, VAR_5, VAR_7, VAR_8->desc.Format,
         VAR_9.RowPitch,
         VAR_9.pData);


   FUNC_3(VAR_8->staging, 0);

   FUNC_0(
         VAR_2, VAR_8->handle, 0, 0, 0, 0, VAR_8->staging, 0, &VAR_10);

   if (VAR_8->desc.MiscFlags & VAR_1)
      FUNC_1(VAR_2, VAR_8->view);
}
