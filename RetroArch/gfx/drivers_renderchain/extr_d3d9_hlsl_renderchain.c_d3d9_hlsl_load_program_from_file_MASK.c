
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_pass {int vprg; int fprg; int vtable; int ftable; } ;
typedef int LPDIRECT3DDEVICE9 ;
typedef int ID3DXBuffer ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int const*,void**) ;
 int FUNC_2 (int ,int const*,void**) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (char const*,int *,int *,char*,char*,int ,int **,int **,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static bool FUNC_7(
      LPDIRECT3DDEVICE9 VAR_0,
      struct shader_pass *VAR_1,
      const char *VAR_2)
{
   ID3DXBuffer *VAR_3 = ((void*)0);
   ID3DXBuffer *VAR_4 = ((void*)0);
   ID3DXBuffer *VAR_5 = ((void*)0);
   ID3DXBuffer *VAR_6 = ((void*)0);

   if (FUNC_6(VAR_2))
      return 0;

   if (!FUNC_4(VAR_2, ((void*)0), ((void*)0),
            "main_fragment", "ps_3_0", 0, &VAR_5, &VAR_3, &VAR_1->ftable))
   {
      FUNC_0("Could not compile fragment shader program (%s)..\n", VAR_2);
      goto error;
   }
   if (!FUNC_4(VAR_2, ((void*)0), ((void*)0),
            "main_vertex", "vs_3_0", 0, &VAR_6, &VAR_4, &VAR_1->vtable))
   {
      FUNC_0("Could not compile vertex shader program (%s)..\n", VAR_2);
      goto error;
   }

   FUNC_1(VAR_0, (const DWORD*)FUNC_5(VAR_5), (void**)&VAR_1->fprg);
   FUNC_2(VAR_0, (const DWORD*)FUNC_5(VAR_6), (void**)&VAR_1->vprg);
   FUNC_3((void*)VAR_5);
   FUNC_3((void*)VAR_6);

   return 1;

error:
   FUNC_0("Cg/HLSL error:\n");
   if (VAR_3)
      FUNC_0("Fragment:\n%s\n", (char*)FUNC_5(VAR_3));
   if (VAR_4)
      FUNC_0("Vertex:\n%s\n", (char*)FUNC_5(VAR_4));
   FUNC_3((void*)VAR_3);
   FUNC_3((void*)VAR_4);

   return 0;
}
