
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* path; } ;
struct video_shader_pass {scalar_t__ filter; scalar_t__ frame_count_mod; int mipmap; char* alias; int fbo; int wrap; TYPE_1__ source; } ;
struct video_shader {scalar_t__ passes; scalar_t__ feedback_pass; int num_parameters; int luts; TYPE_3__* lut; TYPE_2__* parameters; struct video_shader_pass* pass; } ;
typedef int key ;
typedef int config_file_t ;
struct TYPE_6__ {char const* id; char const* path; scalar_t__ filter; int mipmap; int wrap; } ;
struct TYPE_5__ {char const* id; int current; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (size_t) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,char*,size_t) ;
 int FUNC_10 (char*,size_t,int) ;
 int FUNC_11 (int *,int *,unsigned int) ;
 int FUNC_12 (char*,int,char*,unsigned int) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char*,char const*,int) ;
 char* FUNC_15 (int ) ;

void FUNC_16(config_file_t *VAR_3,
      const struct video_shader *VAR_4, const char *VAR_5)
{
   unsigned VAR_6;
   char VAR_7[64];
   size_t VAR_8 = VAR_0;
   char *VAR_9 = (char*)FUNC_7(3*VAR_8);
   char *VAR_10 = VAR_9 + VAR_8;
   char *VAR_11 = VAR_9 + 2*VAR_8;

   if (!VAR_9)
      return;

   FUNC_2(VAR_3, "shaders", VAR_4->passes);
   if (VAR_4->feedback_pass >= 0)
      FUNC_2(VAR_3, "feedback_pass", VAR_4->feedback_pass);

   if (VAR_5)
   {
      FUNC_14(VAR_11, VAR_5, VAR_8);


      FUNC_10(VAR_11, VAR_8, 0);
      FUNC_8(VAR_11);
   }

   for (VAR_6 = 0; VAR_6 < VAR_4->passes; VAR_6++)
   {
      const struct video_shader_pass *VAR_12 = &VAR_4->pass[VAR_6];

      FUNC_12(VAR_7, sizeof(VAR_7), "shader%u", VAR_6);

      if (VAR_5)
      {
         FUNC_14(VAR_9, VAR_12->source.path, VAR_8);
         FUNC_9(VAR_10, VAR_9, VAR_11, VAR_8);
         FUNC_6(VAR_10);

         FUNC_3(VAR_3, VAR_7, VAR_10);
      }
      else
         FUNC_3(VAR_3, VAR_7, VAR_12->source.path);


      if (VAR_12->filter != VAR_2)
      {
         FUNC_12(VAR_7, sizeof(VAR_7), "filter_linear%u", VAR_6);
         FUNC_0(VAR_3, VAR_7, VAR_12->filter == VAR_1);
      }

      FUNC_12(VAR_7, sizeof(VAR_7), "wrap_mode%u", VAR_6);
      FUNC_4(VAR_3, VAR_7, FUNC_15(VAR_12->wrap));

      if (VAR_12->frame_count_mod)
      {
         FUNC_12(VAR_7, sizeof(VAR_7), "frame_count_mod%u", VAR_6);
         FUNC_2(VAR_3, VAR_7, VAR_12->frame_count_mod);
      }

      FUNC_12(VAR_7, sizeof(VAR_7), "mipmap_input%u", VAR_6);
      FUNC_0(VAR_3, VAR_7, VAR_12->mipmap);

      FUNC_12(VAR_7, sizeof(VAR_7), "alias%u", VAR_6);
      FUNC_4(VAR_3, VAR_7, VAR_12->alias);

      FUNC_11(VAR_3, &VAR_12->fbo, VAR_6);
   }


   if (VAR_4->num_parameters)
   {
      size_t VAR_13 = 4096 * sizeof(char);
      char *VAR_14 = (char*)FUNC_7(VAR_13);

      if (VAR_14)
      {
         VAR_14[0] = '\0';

         FUNC_14(VAR_14, VAR_4->parameters[0].id, VAR_13);

         for (VAR_6 = 1; VAR_6 < VAR_4->num_parameters; VAR_6++)
         {

            FUNC_13(VAR_14, ";", VAR_13);
            FUNC_13(VAR_14, VAR_4->parameters[VAR_6].id, VAR_13);
         }

         FUNC_4(VAR_3, "parameters", VAR_14);

         for (VAR_6 = 0; VAR_6 < VAR_4->num_parameters; VAR_6++)
            FUNC_1(VAR_3, VAR_4->parameters[VAR_6].id,
                  VAR_4->parameters[VAR_6].current);
         FUNC_5(VAR_14);
      }
   }

   if (VAR_4->luts)
   {
      size_t VAR_15 = 4096 * sizeof(char);
      char *VAR_16 = (char*)FUNC_7(VAR_15);

      if (VAR_16)
      {
         VAR_16[0] = '\0';

         FUNC_14(VAR_16, VAR_4->lut[0].id, VAR_15);

         for (VAR_6 = 1; VAR_6 < VAR_4->luts; VAR_6++)
         {

            FUNC_13(VAR_16, ";", VAR_15);
            FUNC_13(VAR_16, VAR_4->lut[VAR_6].id, VAR_15);
         }

         FUNC_4(VAR_3, "textures", VAR_16);

         FUNC_5(VAR_16);

         for (VAR_6 = 0; VAR_6 < VAR_4->luts; VAR_6++)
         {
            if (VAR_5)
            {
               FUNC_14(VAR_9, VAR_4->lut[VAR_6].path, VAR_8);
               FUNC_9(VAR_10, VAR_9, VAR_11, VAR_8);
               FUNC_6(VAR_10);

               FUNC_3(VAR_3, VAR_4->lut[VAR_6].id, VAR_10);
            }
            else
               FUNC_3(VAR_3, VAR_4->lut[VAR_6].id, VAR_4->lut[VAR_6].path);

            if (VAR_4->lut[VAR_6].filter != VAR_2)
            {
               char VAR_17[128];
               VAR_17[0] = '\0';
               FUNC_14(VAR_17, VAR_4->lut[VAR_6].id, sizeof(VAR_17));
               FUNC_13(VAR_17, "_linear", sizeof(VAR_17));
               FUNC_0(VAR_3, VAR_17,
                     VAR_4->lut[VAR_6].filter == VAR_1);
            }

            {
               char VAR_18[128];
               VAR_18[0] = '\0';
               FUNC_14(VAR_18, VAR_4->lut[VAR_6].id, sizeof(VAR_18));
               FUNC_13(VAR_18, "_wrap_mode", sizeof(VAR_18));
               FUNC_4(VAR_3, VAR_18,
                     FUNC_15(VAR_4->lut[VAR_6].wrap));
            }

            {
               char VAR_19[128];
               VAR_19[0] = '\0';
               FUNC_14(VAR_19, VAR_4->lut[VAR_6].id, sizeof(VAR_19));
               FUNC_13(VAR_19, "_mipmap", sizeof(VAR_19));
               FUNC_0(VAR_3, VAR_19,
                     VAR_4->lut[VAR_6].mipmap);
            }
         }
      }
   }

   FUNC_5(VAR_9);
}
