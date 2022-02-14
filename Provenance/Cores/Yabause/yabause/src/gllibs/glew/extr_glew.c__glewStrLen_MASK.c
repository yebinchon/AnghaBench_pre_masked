
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t GLuint ;
typedef char GLubyte ;



__attribute__((used)) static GLuint FUNC_0 (const GLubyte* VAR_0)
{
  GLuint VAR_1=0;
  if (VAR_0 == ((void*)0)) return 0;
  while (VAR_0[VAR_1] != '\0') VAR_1++;
  return VAR_1;
}
