
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* prg; } ;
typedef TYPE_2__ cg_shader_data_t ;
struct TYPE_3__ {int vprg; void* lut_tex; void* vertex; void* color; void* tex; } ;
typedef void* CGparameter ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char const*,unsigned int) ;
 void* FUNC_1 (int ,int ) ;
 void* FUNC_2 (int ,char*) ;
 void* FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*) ;
 char* FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static void FUNC_8(void *VAR_3, unsigned VAR_4)
{
   cg_shader_data_t *VAR_5 = (cg_shader_data_t*)VAR_3;
   CGparameter VAR_6 = FUNC_1(
         VAR_5->prg[VAR_4].vprg, VAR_1);

   for (; VAR_6; VAR_6 = FUNC_3(VAR_6))
   {
      const char *VAR_7 = ((void*)0);
      if ( (FUNC_4(VAR_6) != VAR_0)
            || (FUNC_6(VAR_6) != VAR_2))
         continue;

      VAR_7 = FUNC_5(VAR_6);
      if (!VAR_7)
         continue;

      FUNC_0("[CG]: Found semantic \"%s\" in prog #%u.\n", VAR_7, VAR_4);

      if (
            FUNC_7(VAR_7, "TEXCOORD") ||
            FUNC_7(VAR_7, "TEXCOORD0")
         )
         VAR_5->prg[VAR_4].tex = VAR_6;
      else if (
            FUNC_7(VAR_7, "COLOR") ||
            FUNC_7(VAR_7, "COLOR0")
            )
            VAR_5->prg[VAR_4].color = VAR_6;
      else if (FUNC_7(VAR_7, "POSITION"))
         VAR_5->prg[VAR_4].vertex = VAR_6;
      else if (FUNC_7(VAR_7, "TEXCOORD1"))
         VAR_5->prg[VAR_4].lut_tex = VAR_6;
   }

   if (!VAR_5->prg[VAR_4].tex)
      VAR_5->prg[VAR_4].tex = FUNC_2(VAR_5->prg[VAR_4].vprg, "IN.tex_coord");
   if (!VAR_5->prg[VAR_4].color)
      VAR_5->prg[VAR_4].color = FUNC_2(VAR_5->prg[VAR_4].vprg, "IN.color");
   if (!VAR_5->prg[VAR_4].vertex)
      VAR_5->prg[VAR_4].vertex = FUNC_2(VAR_5->prg[VAR_4].vprg, "IN.vertex_coord");
   if (!VAR_5->prg[VAR_4].lut_tex)
      VAR_5->prg[VAR_4].lut_tex = FUNC_2(VAR_5->prg[VAR_4].vprg, "IN.lut_tex_coord");
}
