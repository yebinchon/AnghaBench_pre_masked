
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;
typedef scalar_t__ GLint ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__*,char*) ;
 int FUNC_3 (int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(GLuint VAR_1)
{
   char *VAR_2 = ((void*)0);
   GLint VAR_3, VAR_4 = 0;

   FUNC_3(VAR_1, VAR_0, &VAR_3);

   if (VAR_3 == 0)
      return;

   VAR_2 = (char*)FUNC_4(VAR_3);
   if (!VAR_2)
      return;

   FUNC_2(VAR_1, VAR_3, &VAR_4, VAR_2);

   if (VAR_4 > 0)
      FUNC_0("Shader log: %s\n", VAR_2);

   FUNC_1(VAR_2);
}
