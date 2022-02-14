
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float GLfloat ;



__attribute__((used)) static GLfloat FUNC_0(GLfloat VAR_0, GLfloat VAR_1)
{
   VAR_0 += VAR_1;

   if (VAR_0 >= 120.0f)
      VAR_0 = 120.f;
   else if (VAR_0 <= 40.0f)
      VAR_0 = 40.0f;

   return VAR_0;
}
