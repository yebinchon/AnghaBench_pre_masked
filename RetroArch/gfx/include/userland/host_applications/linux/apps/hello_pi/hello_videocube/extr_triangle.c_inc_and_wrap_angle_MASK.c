
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double GLfloat ;



__attribute__((used)) static GLfloat FUNC_0(GLfloat VAR_0, GLfloat VAR_1)
{
   VAR_0 += VAR_1;

   if (VAR_0 >= 360.0)
      VAR_0 -= 360.f;
   else if (VAR_0 <=0)
      VAR_0 += 360.f;

   return VAR_0;
}
