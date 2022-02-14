
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef scalar_t__ DXGI_FORMAT ;
typedef int D3D10Device ;


 int FUNC_0 (int ,scalar_t__,int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__* FUNC_3 (scalar_t__) ;

DXGI_FORMAT
FUNC_4(D3D10Device VAR_1,
      DXGI_FORMAT VAR_2, UINT VAR_3)
{
   DXGI_FORMAT VAR_4[] = {VAR_2, VAR_0};
   DXGI_FORMAT* VAR_5 = FUNC_3(VAR_2);

   if(!VAR_5)
      VAR_5 = VAR_4;

   while (*VAR_5 != VAR_0)
   {
      UINT VAR_6;
      if (FUNC_1(FUNC_0(VAR_1, *VAR_5, &VAR_6)) &&
            ((VAR_6 & VAR_3) == VAR_3))
         break;
      VAR_5++;
   }
   FUNC_2(*VAR_5);
   return *VAR_5;
}
