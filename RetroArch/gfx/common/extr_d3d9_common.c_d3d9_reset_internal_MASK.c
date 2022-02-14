
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPDIRECT3DDEVICE9 ;
typedef int D3DPRESENT_PARAMETERS ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int *) ;

__attribute__((used)) static bool FUNC_1(void *VAR_1,
      D3DPRESENT_PARAMETERS *VAR_2
      )
{
   LPDIRECT3DDEVICE9 VAR_3 = (LPDIRECT3DDEVICE9)VAR_1;
   if (VAR_3 &&
         FUNC_0(VAR_3, VAR_2) == VAR_0)
      return 1;

   return 0;
}
