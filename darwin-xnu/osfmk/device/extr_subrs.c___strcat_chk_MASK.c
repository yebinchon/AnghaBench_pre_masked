
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char*,char*,char const*,size_t,size_t,size_t) ;
 size_t FUNC_3 (char const*) ;

char *
FUNC_4 (char *restrict VAR_0, const char *restrict VAR_1, size_t VAR_2)
{
  size_t VAR_3 = FUNC_3(VAR_0);
  size_t VAR_4 = FUNC_3(VAR_1);
  size_t VAR_5 = VAR_3 + VAR_4 + 1;
  if (FUNC_0 (VAR_2 < VAR_5)) {
    FUNC_2("__strcat_chk object size check failed: dst %p, src %p, (%zu < %zu + %zu + 1)", VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  }
  FUNC_1(VAR_0 + VAR_3, VAR_1, VAR_4 + 1);
  return VAR_0;
}
