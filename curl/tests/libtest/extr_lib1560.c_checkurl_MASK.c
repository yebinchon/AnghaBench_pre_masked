
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*,char const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*,char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, const char *VAR_2)
{
  if(FUNC_1(VAR_2, VAR_1)) {
    FUNC_0(VAR_0, "Wanted: %s\nGot   : %s\n",
            VAR_2, VAR_1);
    return 1;
  }
  return 0;
}
