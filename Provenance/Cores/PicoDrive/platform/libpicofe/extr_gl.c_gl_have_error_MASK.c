
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLenum ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(const char *VAR_2)
{
 GLenum VAR_3 = FUNC_1();
 if (VAR_3 != VAR_0) {
  FUNC_0(VAR_1, "GL error: %s %lx\n", VAR_2, VAR_3);
  return 1;
 }
 return 0;
}
