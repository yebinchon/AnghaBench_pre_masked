
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* shader; } ;
typedef TYPE_2__ glsl_shader_data_t ;
typedef int buf ;
struct TYPE_4__ {int prefix; } ;
typedef int GLuint ;
typedef scalar_t__ GLint ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int * VAR_0 ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char*,int ,int) ;

__attribute__((used)) static GLint FUNC_5(glsl_shader_data_t *VAR_1,
      GLuint VAR_2, const char *VAR_3)
{
   unsigned VAR_4;
   GLint VAR_5;
   char VAR_6[80];

   VAR_6[0] = '\0';

   FUNC_4(VAR_6, VAR_1->shader->prefix, sizeof(VAR_6));
   FUNC_3(VAR_6, VAR_3, sizeof(VAR_6));
   VAR_5 = FUNC_2(VAR_2, VAR_6);
   if (VAR_5 >= 0)
      return VAR_5;

   for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++)
   {
      FUNC_4(VAR_6, VAR_0[VAR_4], sizeof(VAR_6));
      FUNC_3(VAR_6, VAR_3, sizeof(VAR_6));
      VAR_5 = FUNC_1(VAR_2, VAR_6);
      if (VAR_5 >= 0)
         return VAR_5;
   }

   return -1;
}
