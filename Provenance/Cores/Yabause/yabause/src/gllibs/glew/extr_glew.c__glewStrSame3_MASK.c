
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLuint ;
typedef char GLubyte ;
typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static GLboolean FUNC_0 (const GLubyte** VAR_2, GLuint* VAR_3, const GLubyte* VAR_4, GLuint VAR_5)
{
  if(*VAR_3 >= VAR_5)
  {
    GLuint VAR_6=0;
    while (VAR_6 < VAR_5 && (*VAR_2)+VAR_6 != ((void*)0) && VAR_4+VAR_6 != ((void*)0) && (*VAR_2)[VAR_6] == VAR_4[VAR_6]) VAR_6++;
    if (VAR_6 == VAR_5 && (*VAR_3 == VAR_5 || (*VAR_2)[VAR_6] == ' ' || (*VAR_2)[VAR_6] == '\n' || (*VAR_2)[VAR_6] == '\r' || (*VAR_2)[VAR_6] == '\t'))
    {
      *VAR_2 = *VAR_2 + VAR_5;
      *VAR_3 = *VAR_3 - VAR_5;
      return VAR_1;
    }
  }
  return VAR_0;
}
