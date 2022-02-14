
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int RowPitch; } ;
struct TYPE_10__ {int Offset; TYPE_2__ Footprint; } ;
struct TYPE_8__ {int Format; } ;
struct TYPE_11__ {int dirty; int upload_buffer; TYPE_3__ layout; TYPE_1__ desc; } ;
typedef TYPE_4__ d3d12_texture_t ;
struct TYPE_12__ {int member_1; int member_0; } ;
typedef int DXGI_FORMAT ;
typedef TYPE_5__ D3D12_RANGE ;


 int FUNC_0 (int ,int ,TYPE_5__*,void**) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int,int,int ,int,void const*,int ,int ,int *) ;

void FUNC_3(
      int VAR_0,
      int VAR_1,
      int VAR_2,
      DXGI_FORMAT VAR_3,
      const void* VAR_4,
      d3d12_texture_t* VAR_5)
{
   uint8_t* VAR_6;
   D3D12_RANGE VAR_7 = { 0, 0 };

   if (!VAR_5 || !VAR_5->upload_buffer)
      return;

   FUNC_0(VAR_5->upload_buffer, 0, &VAR_7, (void**)&VAR_6);

   FUNC_2(
         VAR_0, VAR_1, VAR_3, VAR_2, VAR_4, VAR_5->desc.Format,
         VAR_5->layout.Footprint.RowPitch, VAR_6 + VAR_5->layout.Offset);

   FUNC_1(VAR_5->upload_buffer, 0, ((void*)0));

   VAR_5->dirty = 1;
}
