
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int version ;
struct TYPE_3__ {char* alias_define; } ;
typedef TYPE_1__ glsl_shader_data_t ;
typedef int GLuint ;
typedef scalar_t__ GLint ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,unsigned int,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,scalar_t__*) ;
 int FUNC_4 (int ,int ,char const**,int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (char*,int,char*,unsigned int,...) ;
 char* FUNC_7 (char const*,char*) ;
 int FUNC_8 (char const*,char**,int) ;

__attribute__((used)) static bool FUNC_9(glsl_shader_data_t *VAR_5,
      GLuint VAR_6,
      const char *VAR_7, const char *VAR_8)
{
   GLint VAR_9;
   const char *VAR_10[4];
   char VAR_11[32];
   const char *VAR_12 = FUNC_7(VAR_8, "#version");

   VAR_11[0] = '\0';

   if (VAR_12)
   {
      const char* VAR_13 = "";
      unsigned VAR_14 = (unsigned)FUNC_8(VAR_12 + 8, (char**)&VAR_8, 10);
      FUNC_6(VAR_11, sizeof(VAR_11), "#version %u%s\n", VAR_14, VAR_13);
      FUNC_1("[GLSL]: Using GLSL version %u%s.\n", VAR_14, VAR_13);
   }
   else if (VAR_2)
   {
      unsigned VAR_15 = 0;
      unsigned VAR_16 = VAR_3 * 100 + VAR_4 * 10;

      switch (VAR_16)
      {
         case 300:
            VAR_15 = 130;
            break;
         case 310:
            VAR_15 = 140;
            break;
         case 320:
            VAR_15 = 150;
            break;
         default:
            VAR_15 = VAR_16;
            break;
      }

      FUNC_6(VAR_11, sizeof(VAR_11), "#version %u\n", VAR_15);
      FUNC_1("[GLSL]: Using GLSL version %u.\n", VAR_15);
   }

   VAR_10[0] = VAR_11;
   VAR_10[1] = VAR_7;
   VAR_10[2] = VAR_5->alias_define;
   VAR_10[3] = VAR_8;

   FUNC_4(VAR_6, FUNC_0(VAR_10), VAR_10, ((void*)0));
   FUNC_2(VAR_6);

   FUNC_3(VAR_6, VAR_0, &VAR_9);
   FUNC_5(VAR_6);

   return VAR_9 == VAR_1;
}
