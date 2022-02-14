
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t GLuint ;
typedef char GLubyte ;
typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static GLboolean FUNC_0 (const GLubyte* VAR_2, const GLubyte* VAR_3, GLuint VAR_4)
{
  GLuint VAR_5=0;
  if(VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
    return (VAR_2 == ((void*)0) && VAR_3 == ((void*)0) && VAR_4 == 0) ? VAR_1 : VAR_0;
  while (VAR_5 < VAR_4 && VAR_2[VAR_5] != '\0' && VAR_3[VAR_5] != '\0' && VAR_2[VAR_5] == VAR_3[VAR_5]) VAR_5++;
  return VAR_5 == VAR_4 ? VAR_1 : VAR_0;
}
