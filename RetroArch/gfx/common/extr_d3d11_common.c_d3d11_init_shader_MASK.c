
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int layout; int gs; int ps; int vs; } ;
typedef TYPE_1__ d3d11_shader_t ;
typedef int UINT ;
typedef int LPCWSTR ;
typedef scalar_t__ LPCSTR ;
typedef int * D3DBlob ;
typedef int D3D11_INPUT_ELEMENT_DESC ;
typedef int D3D11Device ;


 int FUNC_0 (int ,int ,int ,int *,int *) ;
 int FUNC_1 (int ,int const*,int ,int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ,int *,int *) ;
 int FUNC_3 (int ,int ,int ,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*,size_t,scalar_t__,scalar_t__,char*,int **) ;
 int FUNC_8 (int ,scalar_t__,char*,int **) ;

bool FUNC_9(
      D3D11Device VAR_0,
      const char* VAR_1,
      size_t VAR_2,
      const void* VAR_3,
      LPCSTR VAR_4,
      LPCSTR VAR_5,
      LPCSTR VAR_6,
      const D3D11_INPUT_ELEMENT_DESC* VAR_7,
      UINT VAR_8,
      d3d11_shader_t* VAR_9)
{
   D3DBlob VAR_10 = ((void*)0);
   D3DBlob VAR_11 = ((void*)0);
   D3DBlob VAR_12 = ((void*)0);

   bool VAR_13 = 1;

   if (!VAR_1)
   {
      if (VAR_4 && !FUNC_8((LPCWSTR)VAR_3, VAR_4, "vs_4_0", &VAR_10))
         VAR_13 = 0;
      if (VAR_5 && !FUNC_8((LPCWSTR)VAR_3, VAR_5, "ps_4_0", &VAR_11))
         VAR_13 = 0;
      if (VAR_6 && !FUNC_8((LPCWSTR)VAR_3, VAR_6, "gs_4_0", &VAR_12))
         VAR_13 = 0;
   }
   else
   {
      if (VAR_4 && !FUNC_7(VAR_1, VAR_2, (LPCSTR)VAR_3, VAR_4, "vs_4_0", &VAR_10))
         VAR_13 = 0;
      if (VAR_5 && !FUNC_7(VAR_1, VAR_2, (LPCSTR)VAR_3, VAR_5, "ps_4_0", &VAR_11))
         VAR_13 = 0;
      if (VAR_6 && !FUNC_7(VAR_1, VAR_2, (LPCSTR)VAR_3, VAR_6, "gs_4_0", &VAR_12))
         VAR_13 = 0;
   }

   if (VAR_10)
      FUNC_3(
            VAR_0, FUNC_4(VAR_10), FUNC_5(VAR_10), ((void*)0), &VAR_9->vs);

   if (VAR_11)
      FUNC_2(
            VAR_0, FUNC_4(VAR_11), FUNC_5(VAR_11), ((void*)0), &VAR_9->ps);

   if (VAR_12)
      FUNC_0(
            VAR_0, FUNC_4(VAR_12), FUNC_5(VAR_12), ((void*)0), &VAR_9->gs);

   if (VAR_10 && VAR_7)
      FUNC_1(
            VAR_0, VAR_7, VAR_8, FUNC_4(VAR_10),
            FUNC_5(VAR_10), &VAR_9->layout);

   FUNC_6(VAR_10);
   FUNC_6(VAR_11);
   FUNC_6(VAR_12);

   return VAR_13;
}
