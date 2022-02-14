
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPDIRECT3DDEVICE8 ;
typedef int LPDIRECT3D8 ;
typedef int IDirect3DDevice8 ;
typedef int HWND ;
typedef int DWORD ;
typedef int D3DPRESENT_PARAMETERS ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int,int ,int ,int ,int *,int **) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(
      LPDIRECT3DDEVICE8 VAR_1,
      D3DPRESENT_PARAMETERS *VAR_2,
      LPDIRECT3D8 VAR_3,
      HWND VAR_4,
      unsigned VAR_5,
      DWORD VAR_6)
{
   if (VAR_1 &&
         FUNC_1(FUNC_0(VAR_3,
               VAR_5,
               VAR_0,
               VAR_4,
               VAR_6,
               VAR_2,
               (IDirect3DDevice8**)VAR_1)))
      return 1;

   return 0;
}
