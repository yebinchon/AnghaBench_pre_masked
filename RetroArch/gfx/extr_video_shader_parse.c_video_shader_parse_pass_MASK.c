
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int wrap_name_buf ;
typedef int wrap_mode ;
struct gfx_fbo_scale {int srgb_fbo; int fp_fbo; int valid; scalar_t__ type_x; scalar_t__ type_y; double scale_x; double scale_y; int abs_x; int abs_y; } ;
struct TYPE_9__ {int path; } ;
struct video_shader_pass {unsigned int frame_count_mod; int mipmap; char* alias; struct gfx_fbo_scale fbo; int wrap; int filter; TYPE_1__ source; } ;
typedef int srgb_output_buf ;
typedef int shader_name ;
typedef int scale_type_y ;
typedef int scale_type_x ;
typedef int scale_type ;
typedef int scale_name_buf ;
typedef int mipmap_buf ;
typedef int frame_count_mod_buf ;
typedef int frame_count_mod ;
typedef int fp_fbo_buf ;
typedef int filter_name_buf ;
struct TYPE_10__ {int path; } ;
typedef TYPE_2__ config_file_t ;
typedef int attr_name_buf ;
typedef int alias_buf ;


 size_t VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_2__*,char*,char*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char*,int*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,char*,float*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,char*,int*) ;
 int FUNC_5 (TYPE_2__*,char*,char*,size_t) ;
 int FUNC_6 (int ,int ,char*,int) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (size_t) ;
 int FUNC_9 (char*,int,char*,unsigned int) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*,int) ;
 scalar_t__ FUNC_12 (char*,int *,int ) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static bool FUNC_14(config_file_t *VAR_7,
      struct video_shader_pass *VAR_8, unsigned VAR_9)
{
   char VAR_10[64];
   char VAR_11[64];
   char VAR_12[64];
   char VAR_13[64];
   char VAR_14[64];
   char VAR_15[64];
   char VAR_16[64];
   char VAR_17[64];
   char VAR_18[64];
   char VAR_19[64];
   char VAR_20[64];
   char VAR_21[64];
   char VAR_22[64];
   char VAR_23[64];
   char VAR_24[64];
   size_t VAR_25 = VAR_0;
   char *VAR_26 = (char*)FUNC_8(VAR_25);
   struct gfx_fbo_scale *VAR_27 = ((void*)0);
   bool VAR_28 = 0;
   float VAR_29 = 0.0f;
   int VAR_30 = 0;

   if (!VAR_26)
      return 0;

   VAR_16[0] = VAR_17[0] = VAR_18[0] =
   VAR_19[0] = VAR_20[0] = VAR_21[0] =
   VAR_22[0] = VAR_23[0] = VAR_24[0] =
   VAR_10[0] = VAR_11[0] = VAR_12[0] =
   VAR_13[0] = VAR_14[0] = VAR_15[0] = '\0';


   FUNC_9(VAR_10, sizeof(VAR_10), "shader%u", VAR_9);
   if (!FUNC_5(VAR_7, VAR_10, VAR_26, VAR_25))
   {
      FUNC_0("Couldn't parse shader source (%s).\n", VAR_10);
      FUNC_7(VAR_26);
      return 0;
   }

   FUNC_6(VAR_8->source.path,
         VAR_7->path, VAR_26, sizeof(VAR_8->source.path));
   FUNC_7(VAR_26);


   FUNC_9(VAR_11, sizeof(VAR_11), "filter_linear%u", VAR_9);

   if (FUNC_2(VAR_7, VAR_11, &VAR_28))
   {
      bool VAR_31 = VAR_28;
      VAR_8->filter = VAR_31 ? VAR_1 : VAR_2;
   }
   else
      VAR_8->filter = VAR_3;


   FUNC_9(VAR_12, sizeof(VAR_12), "wrap_mode%u", VAR_9);
   if (FUNC_1(VAR_7, VAR_12, VAR_13, sizeof(VAR_13)))
      VAR_8->wrap = FUNC_13(VAR_13);


   FUNC_9(VAR_14, sizeof(VAR_14), "frame_count_mod%u", VAR_9);
   if (FUNC_1(VAR_7, VAR_14,
            VAR_24, sizeof(VAR_24)))
      VAR_8->frame_count_mod = (unsigned)FUNC_12(VAR_24, ((void*)0), 0);


   FUNC_9(VAR_15, sizeof(VAR_15), "srgb_framebuffer%u", VAR_9);
   if (FUNC_2(VAR_7, VAR_15, &VAR_28))
      VAR_8->fbo.srgb_fbo = VAR_28;

   FUNC_9(VAR_16, sizeof(VAR_16), "float_framebuffer%u", VAR_9);
   if (FUNC_2(VAR_7, VAR_16, &VAR_28))
      VAR_8->fbo.fp_fbo = VAR_28;

   FUNC_9(VAR_17, sizeof(VAR_17), "mipmap_input%u", VAR_9);
   if (FUNC_2(VAR_7, VAR_17, &VAR_28))
      VAR_8->mipmap = VAR_28;

   FUNC_9(VAR_18, sizeof(VAR_18), "alias%u", VAR_9);
   if (!FUNC_1(VAR_7, VAR_18, VAR_8->alias, sizeof(VAR_8->alias)))
      *VAR_8->alias = '\0';


   VAR_27 = &VAR_8->fbo;
   FUNC_9(VAR_19, sizeof(VAR_19), "scale_type%u", VAR_9);
   FUNC_1(VAR_7, VAR_19, VAR_21, sizeof(VAR_21));

   FUNC_9(VAR_19, sizeof(VAR_19), "scale_type_x%u", VAR_9);
   FUNC_1(VAR_7, VAR_19, VAR_22, sizeof(VAR_22));

   FUNC_9(VAR_19, sizeof(VAR_19), "scale_type_y%u", VAR_9);
   FUNC_1(VAR_7, VAR_19, VAR_23, sizeof(VAR_23));

   if (!*VAR_21 && !*VAR_22 && !*VAR_23)
      return 1;

   if (*VAR_21)
   {
      FUNC_11(VAR_22, VAR_21, sizeof(VAR_22));
      FUNC_11(VAR_23, VAR_21, sizeof(VAR_23));
   }

   VAR_27->valid = 1;
   VAR_27->type_x = VAR_5;
   VAR_27->type_y = VAR_5;
   VAR_27->scale_x = 1.0;
   VAR_27->scale_y = 1.0;

   if (*VAR_22)
   {
      if (FUNC_10(VAR_22, "source"))
         VAR_27->type_x = VAR_5;
      else if (FUNC_10(VAR_22, "viewport"))
         VAR_27->type_x = VAR_6;
      else if (FUNC_10(VAR_22, "absolute"))
         VAR_27->type_x = VAR_4;
      else
      {
         FUNC_0("Invalid attribute.\n");
         return 0;
      }
   }

   if (*VAR_23)
   {
      if (FUNC_10(VAR_23, "source"))
         VAR_27->type_y = VAR_5;
      else if (FUNC_10(VAR_23, "viewport"))
         VAR_27->type_y = VAR_6;
      else if (FUNC_10(VAR_23, "absolute"))
         VAR_27->type_y = VAR_4;
      else
      {
         FUNC_0("Invalid attribute.\n");
         return 0;
      }
   }

   FUNC_9(VAR_20, sizeof(VAR_20), "scale%u", VAR_9);

   if (VAR_27->type_x == VAR_4)
   {
      if (FUNC_4(VAR_7, VAR_20, &VAR_30))
         VAR_27->abs_x = VAR_30;
      else
      {
         FUNC_9(VAR_20, sizeof(VAR_20), "scale_x%u", VAR_9);
         if (FUNC_4(VAR_7, VAR_20, &VAR_30))
            VAR_27->abs_x = VAR_30;
      }
   }
   else
   {
      if (FUNC_3(VAR_7, VAR_20, &VAR_29))
         VAR_27->scale_x = VAR_29;
      else
      {
         FUNC_9(VAR_20, sizeof(VAR_20), "scale_x%u", VAR_9);
         if (FUNC_3(VAR_7, VAR_20, &VAR_29))
            VAR_27->scale_x = VAR_29;
      }
   }

   FUNC_9(VAR_20, sizeof(VAR_20), "scale%u", VAR_9);

   if (VAR_27->type_y == VAR_4)
   {
      if (FUNC_4(VAR_7, VAR_20, &VAR_30))
         VAR_27->abs_y = VAR_30;
      else
      {
         FUNC_9(VAR_20, sizeof(VAR_20), "scale_y%u", VAR_9);
         if (FUNC_4(VAR_7, VAR_20, &VAR_30))
            VAR_27->abs_y = VAR_30;
      }
   }
   else
   {
      if (FUNC_3(VAR_7, VAR_20, &VAR_29))
         VAR_27->scale_y = VAR_29;
      else
      {
         FUNC_9(VAR_20, sizeof(VAR_20), "scale_y%u", VAR_9);
         if (FUNC_3(VAR_7, VAR_20, &VAR_29))
            VAR_27->scale_y = VAR_29;
      }
   }

   return 1;
}
