
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,char*,char const*) ;

int FUNC_1(char* VAR_0, size_t VAR_1, const char* VAR_2) {
  int VAR_3 = FUNC_0(
    VAR_0,
    VAR_1,
    "http://i.retroachievements.org/Badge/%s",
    VAR_2
  );

  return (size_t)VAR_3 >= VAR_1 ? -1 : 0;
}
