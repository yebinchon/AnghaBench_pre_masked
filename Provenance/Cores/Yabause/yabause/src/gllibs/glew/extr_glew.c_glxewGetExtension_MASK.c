
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLubyte ;
typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int const*,int const*) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 () ;

GLboolean FUNC_4 (const char* VAR_2)
{
  const GLubyte* VAR_3;
  const GLubyte* VAR_4;

  if (&FUNC_3 == ((void*)0)) return VAR_1;
  VAR_3 = (const GLubyte*)FUNC_2(FUNC_3(), VAR_0);
  if (0 == VAR_3) return VAR_1;
  VAR_4 = VAR_3 + FUNC_1(VAR_3);
  return FUNC_0(VAR_2, VAR_3, VAR_4);
}
