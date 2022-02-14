
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_1 (char*,char const*) ;

__attribute__((used)) static int FUNC_2(int VAR_0, char *VAR_1, const char *VAR_2)
{
  if(FUNC_1(VAR_1, VAR_2)) {

    FUNC_0("sprintf line %d failed:\nwe      '%s'\nsystem: '%s'\n",
           VAR_0, VAR_1, VAR_2);
    return 1;
  }
  return 0;
}
