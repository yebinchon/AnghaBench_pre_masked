
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


struct TYPE_13__ {int Count; } ;
struct TYPE_12__ {int CullMode; int FillMode; } ;
struct TYPE_11__ {void* BytecodeLength; int * pShaderBytecode; } ;
struct TYPE_10__ {void* BytecodeLength; int * pShaderBytecode; } ;
struct TYPE_9__ {void* BytecodeLength; int * pShaderBytecode; } ;
struct TYPE_14__ {int NumRenderTargets; TYPE_5__ SampleDesc; TYPE_4__ RasterizerState; int SampleMask; TYPE_3__ GS; TYPE_2__ PS; TYPE_1__ VS; } ;
typedef scalar_t__ D3DBlob ;
typedef TYPE_6__ D3D12_GRAPHICS_PIPELINE_STATE_DESC ;
typedef int D3D12PipelineState ;
typedef int D3D12Device ;


 int FUNC_0 (int ,TYPE_6__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (scalar_t__) ;
 int VAR_2 ;

bool FUNC_3(
      D3D12Device VAR_3,
      D3DBlob VAR_4,
      D3DBlob VAR_5,
      D3DBlob VAR_6,
      D3D12_GRAPHICS_PIPELINE_STATE_DESC* VAR_7,
      D3D12PipelineState* VAR_8)
{
   if (VAR_4)
   {
      VAR_7->VS.pShaderBytecode = FUNC_1(VAR_4);
      VAR_7->VS.BytecodeLength = FUNC_2(VAR_4);
   }
   else
   {
      VAR_7->VS.pShaderBytecode = ((void*)0);
      VAR_7->VS.BytecodeLength = 0;
   }

   if (VAR_5)
   {
      VAR_7->PS.pShaderBytecode = FUNC_1(VAR_5);
      VAR_7->PS.BytecodeLength = FUNC_2(VAR_5);
   }
   else
   {
      VAR_7->PS.pShaderBytecode = ((void*)0);
      VAR_7->PS.BytecodeLength = 0;
   }

   if (VAR_6)
   {
      VAR_7->GS.pShaderBytecode = FUNC_1(VAR_6);
      VAR_7->GS.BytecodeLength = FUNC_2(VAR_6);
   }
   else
   {
      VAR_7->GS.pShaderBytecode = ((void*)0);
      VAR_7->GS.BytecodeLength = 0;
   }

   VAR_7->SampleMask = VAR_2;
   VAR_7->RasterizerState.FillMode = VAR_1;
   VAR_7->RasterizerState.CullMode = VAR_0;
   VAR_7->NumRenderTargets = 1;
   VAR_7->SampleDesc.Count = 1;

   FUNC_0(VAR_3, VAR_7, VAR_8);

   return 1;
}
