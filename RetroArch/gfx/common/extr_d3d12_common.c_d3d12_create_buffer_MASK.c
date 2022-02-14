
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {int member_3; int member_4; int member_2; int member_1; int member_0; } ;
struct TYPE_6__ {int Count; } ;
struct TYPE_7__ {int Height; int DepthOrArraySize; int MipLevels; int Layout; TYPE_1__ SampleDesc; int Width; int member_0; } ;
typedef TYPE_2__ D3D12_RESOURCE_DESC ;
typedef TYPE_3__ D3D12_HEAP_PROPERTIES ;
typedef int D3D12_GPU_VIRTUAL_ADDRESS ;
typedef int D3D12Resource ;
typedef int D3D12Device ;


 int FUNC_0 (int ,TYPE_3__*,int ,TYPE_2__*,int ,int *,int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

D3D12_GPU_VIRTUAL_ADDRESS
FUNC_2(D3D12Device VAR_7, UINT VAR_8, D3D12Resource* VAR_9)
{
   D3D12_HEAP_PROPERTIES VAR_10 = { VAR_2, VAR_0,
                                        VAR_3, 1, 1 };
   D3D12_RESOURCE_DESC VAR_11 = { VAR_4 };

   VAR_11.Width = VAR_8;
   VAR_11.Height = 1;
   VAR_11.DepthOrArraySize = 1;
   VAR_11.MipLevels = 1;
   VAR_11.SampleDesc.Count = 1;
   VAR_11.Layout = VAR_6;

   FUNC_0(
         VAR_7, (D3D12_HEAP_PROPERTIES*)&VAR_10, VAR_1, &VAR_11,
         VAR_5, ((void*)0), VAR_9);

   return FUNC_1(*VAR_9);
}
