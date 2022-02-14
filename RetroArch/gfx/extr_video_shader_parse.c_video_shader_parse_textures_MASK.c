
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wrap_mode ;
struct video_shader {size_t luts; TYPE_1__* lut; } ;
typedef int id_wrap ;
typedef int id_mipmap ;
typedef int id_filter ;
struct TYPE_7__ {int path; } ;
typedef TYPE_2__ config_file_t ;
struct TYPE_6__ {char* id; int mipmap; int wrap; int filter; int path; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_2__*,char const*,char*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char*,int*) ;
 int FUNC_3 (int ,int ,char*,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char const*,int) ;
 char* FUNC_8 (char*,char*,char**) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static bool FUNC_10(config_file_t *VAR_5,
      struct video_shader *VAR_6)
{
   size_t VAR_7 = VAR_1;
   const char *VAR_8 = ((void*)0);
   char *VAR_9 = ((void*)0);
   char *VAR_10 = (char*)FUNC_5(1024 + VAR_7);
   char *VAR_11 = VAR_10 + 1024;

   if (!VAR_10)
      return 0;

   VAR_10[0] = '\0';

   if (!FUNC_1(VAR_5, "textures", VAR_10, 1024))
   {
      FUNC_4(VAR_10);
      return 1;
   }

   for (VAR_8 = FUNC_8(VAR_10, ";", &VAR_9);
         VAR_8 && VAR_6->luts < VAR_0;
         VAR_6->luts++, VAR_8 = FUNC_8(((void*)0), ";", &VAR_9))
   {
      char VAR_12[64];
      char VAR_13[64];
      char VAR_14[64];
      char VAR_15[64];
      bool VAR_16 = 0;
      bool VAR_17 = 0;

      VAR_12[0] = VAR_13[0] = VAR_14[0] = VAR_15[0] = '\0';

      if (!FUNC_1(VAR_5, VAR_8, VAR_11, VAR_7))
      {
         FUNC_0("Cannot find path to texture \"%s\" ...\n", VAR_8);
         FUNC_4(VAR_10);
         return 0;
      }

      FUNC_3(VAR_6->lut[VAR_6->luts].path,
            VAR_5->path, VAR_11, sizeof(VAR_6->lut[VAR_6->luts].path));

      FUNC_7(VAR_6->lut[VAR_6->luts].id, VAR_8,
            sizeof(VAR_6->lut[VAR_6->luts].id));

      FUNC_7(VAR_12, VAR_8, sizeof(VAR_12));
      FUNC_6(VAR_12, "_linear", sizeof(VAR_12));
      if (FUNC_2(VAR_5, VAR_12, &VAR_17))
         VAR_6->lut[VAR_6->luts].filter = VAR_17 ?
            VAR_2 : VAR_3;
      else
         VAR_6->lut[VAR_6->luts].filter = VAR_4;

      FUNC_7(VAR_13, VAR_8, sizeof(VAR_13));
      FUNC_6(VAR_13, "_wrap_mode", sizeof(VAR_13));
      if (FUNC_1(VAR_5, VAR_13, VAR_14, sizeof(VAR_14)))
         VAR_6->lut[VAR_6->luts].wrap = FUNC_9(VAR_14);

      FUNC_7(VAR_15, VAR_8, sizeof(VAR_15));
      FUNC_6(VAR_15, "_mipmap", sizeof(VAR_15));
      if (FUNC_2(VAR_5, VAR_15, &VAR_16))
         VAR_6->lut[VAR_6->luts].mipmap = VAR_16;
      else
         VAR_6->lut[VAR_6->luts].mipmap = 0;
   }

   FUNC_4(VAR_10);
   return 1;
}
