
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ EGLint ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,char*,char const*,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(const char *VAR_2)
{
 EGLint VAR_3 = FUNC_0();
 if (VAR_3 != VAR_0) {
  FUNC_1(VAR_1, "%s %lx\n", VAR_2, VAR_3);
  return 1;
 }
 return 0;
}
