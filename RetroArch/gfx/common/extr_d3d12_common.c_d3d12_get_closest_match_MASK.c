
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int format_support ;
struct TYPE_4__ {scalar_t__ Format; scalar_t__ member_0; int Support1; int Support2; } ;
typedef scalar_t__ DXGI_FORMAT ;
typedef TYPE_1__ D3D12_FEATURE_DATA_FORMAT_SUPPORT ;
typedef int D3D12Device ;


 int FUNC_0 (int ,int ,TYPE_1__*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__* FUNC_3 (scalar_t__) ;

DXGI_FORMAT FUNC_4(D3D12Device VAR_2, D3D12_FEATURE_DATA_FORMAT_SUPPORT* VAR_3)
{
   DXGI_FORMAT VAR_4[] = { VAR_3->Format, VAR_1 };
   DXGI_FORMAT* VAR_5 = FUNC_3(VAR_3->Format);

   if (!VAR_5)
      VAR_5 = VAR_4;

   while (*VAR_5 != VAR_1)
   {
      D3D12_FEATURE_DATA_FORMAT_SUPPORT VAR_6 = { *VAR_5 };
      if (FUNC_1(FUNC_0(
                VAR_2, VAR_0, &VAR_6, sizeof(VAR_6))) &&
          ((VAR_6.Support1 & VAR_3->Support1) == VAR_3->Support1) &&
          ((VAR_6.Support2 & VAR_3->Support2) == VAR_3->Support2))
         break;
      VAR_5++;
   }
   FUNC_2(*VAR_5);
   return *VAR_5;
}
