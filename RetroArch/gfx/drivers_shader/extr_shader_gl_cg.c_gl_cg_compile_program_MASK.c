
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shader_program_info {int combined; scalar_t__ is_file; } ;
struct shader_program_cg {void* vprg; void* fprg; } ;
struct TYPE_2__ {char** alias_define; int cgCtx; int cgVProf; int cgFProf; struct shader_program_cg* prg; } ;
typedef TYPE_1__ cg_shader_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 void* FUNC_1 (int ,int ,int ,int ,char*,char const**) ;
 void* FUNC_2 (int ,int ,int ,int ,char*,char const**) ;
 int FUNC_3 (void*) ;
 int FUNC_4 () ;
 char* FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char const*) ;

__attribute__((used)) static bool FUNC_9(
      void *VAR_2,
      unsigned VAR_3,
      void *VAR_4,
      struct shader_program_info *VAR_5)
{
   const char *VAR_6[2 + VAR_1];
   const char *VAR_7 = ((void*)0);
   bool VAR_8 = 1;
   char *VAR_9 = ((void*)0);
   char *VAR_10 = ((void*)0);
   unsigned VAR_11, VAR_12 = 0;
   struct shader_program_cg *VAR_13 = (struct shader_program_cg*)VAR_4;
   cg_shader_data_t *VAR_14 = (cg_shader_data_t*)VAR_2;

   if (!VAR_13)
      VAR_13 = &VAR_14->prg[VAR_3];

   VAR_6[VAR_12++] = "-DPARAMETER_UNIFORM";

   for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
   {
      if (*(VAR_14->alias_define[VAR_11]))
         VAR_6[VAR_12++] = VAR_14->alias_define[VAR_11];
   }

   VAR_6[VAR_12] = ((void*)0);

   if (VAR_5->is_file)
      VAR_13->fprg = FUNC_2(
            VAR_14->cgCtx, VAR_0,
            VAR_5->combined, VAR_14->cgFProf, "main_fragment", VAR_6);
   else
      VAR_13->fprg = FUNC_1(VAR_14->cgCtx, VAR_0,
            VAR_5->combined, VAR_14->cgFProf, "main_fragment", VAR_6);

   VAR_7 = FUNC_6(VAR_14->cgCtx);

   if (VAR_7)
      VAR_9 = FUNC_8(VAR_7);

   VAR_7 = ((void*)0);

   if (VAR_5->is_file)
      VAR_13->vprg = FUNC_2(
            VAR_14->cgCtx, VAR_0,
            VAR_5->combined, VAR_14->cgVProf, "main_vertex", VAR_6);
   else
      VAR_13->vprg = FUNC_1(VAR_14->cgCtx, VAR_0,
            VAR_5->combined, VAR_14->cgVProf, "main_vertex", VAR_6);

   VAR_7 = FUNC_6(VAR_14->cgCtx);

   if (VAR_7)
      VAR_10 = FUNC_8(VAR_7);

   if (!VAR_13->fprg || !VAR_13->vprg)
   {
      FUNC_0("CG error: %s\n", FUNC_5(FUNC_4()));
      if (VAR_9)
         FUNC_0("Fragment:\n%s\n", VAR_9);
      else if (VAR_10)
         FUNC_0("Vertex:\n%s\n", VAR_10);

      VAR_8 = 0;
      goto end;
   }

   FUNC_3(VAR_13->fprg);
   FUNC_3(VAR_13->vprg);

end:
   FUNC_7(VAR_9);
   FUNC_7(VAR_10);
   return VAR_8;
}
