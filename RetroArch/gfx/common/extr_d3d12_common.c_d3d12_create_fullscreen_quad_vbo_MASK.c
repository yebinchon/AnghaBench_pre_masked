
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vertices ;
struct TYPE_12__ {float member_0; float member_1; float member_2; float member_3; } ;
struct TYPE_11__ {float member_0; float member_1; } ;
struct TYPE_10__ {float member_0; float member_1; } ;
struct TYPE_13__ {TYPE_3__ member_2; TYPE_2__ member_1; TYPE_1__ member_0; } ;
typedef TYPE_4__ d3d12_vertex_t ;
struct TYPE_15__ {int member_1; int member_0; } ;
struct TYPE_14__ {int SizeInBytes; int StrideInBytes; int BufferLocation; } ;
typedef TYPE_5__ D3D12_VERTEX_BUFFER_VIEW ;
typedef TYPE_6__ D3D12_RANGE ;
typedef int D3D12Resource ;
typedef int D3D12Device ;


 int FUNC_0 (int ,int ,TYPE_6__*,void**) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (void*,TYPE_4__ const*,int) ;

void FUNC_4(
      D3D12Device VAR_0, D3D12_VERTEX_BUFFER_VIEW* VAR_1, D3D12Resource* VAR_2)
{
   static const d3d12_vertex_t VAR_3[] = {
      { { 0.0f, 0.0f }, { 0.0f, 1.0f }, { 1.0f, 1.0f, 1.0f, 1.0f } },
      { { 0.0f, 1.0f }, { 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f, 1.0f } },
      { { 1.0f, 0.0f }, { 1.0f, 1.0f }, { 1.0f, 1.0f, 1.0f, 1.0f } },
      { { 1.0f, 1.0f }, { 1.0f, 0.0f }, { 1.0f, 1.0f, 1.0f, 1.0f } },
   };

   VAR_1->SizeInBytes = sizeof(VAR_3);
   VAR_1->StrideInBytes = sizeof(*VAR_3);
   VAR_1->BufferLocation = FUNC_2(VAR_0, VAR_1->SizeInBytes, VAR_2);

   {
      void* VAR_4;
      D3D12_RANGE VAR_5 = { 0, 0 };

      FUNC_0(*VAR_2, 0, &VAR_5, &VAR_4);
      FUNC_3(VAR_4, VAR_3, sizeof(VAR_3));
      FUNC_1(*VAR_2, 0, ((void*)0));
   }
}
