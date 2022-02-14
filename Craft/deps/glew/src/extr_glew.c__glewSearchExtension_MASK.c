
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLuint ;
typedef int GLubyte ;
typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*,char) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*,int const*,scalar_t__) ;

__attribute__((used)) static GLboolean FUNC_3 (const char* VAR_2, const GLubyte *VAR_3, const GLubyte *VAR_4)
{
  const GLubyte* VAR_5;
  GLuint VAR_6 = FUNC_1((const GLubyte*)VAR_2);
  VAR_5 = VAR_3;
  while (VAR_5 < VAR_4)
  {
    GLuint VAR_7 = FUNC_0(VAR_5, ' ');
    if (VAR_6 == VAR_7 && FUNC_2((const GLubyte*)VAR_2, VAR_5, VAR_7)) return VAR_1;
    VAR_5 += VAR_7+1;
  }
  return VAR_0;
}
