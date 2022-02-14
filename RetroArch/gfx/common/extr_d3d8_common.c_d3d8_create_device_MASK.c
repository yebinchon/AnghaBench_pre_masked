
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPDIRECT3D8 ;
typedef int HWND ;
typedef int D3DPRESENT_PARAMETERS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int *,int ,int ,unsigned int,int ) ;

bool FUNC_1(void *VAR_2,
      void *VAR_3,
      LPDIRECT3D8 VAR_4,
      HWND VAR_5,
      unsigned VAR_6)
{
   if (!FUNC_0(VAR_2,
            (D3DPRESENT_PARAMETERS*)VAR_3,
            VAR_4,
            VAR_5,
            VAR_6,
            VAR_0))
      if (!FUNC_0(
               VAR_2,
               (D3DPRESENT_PARAMETERS*)VAR_3, VAR_4, VAR_5,
               VAR_6,
               VAR_1))
         return 0;
   return 1;
}
