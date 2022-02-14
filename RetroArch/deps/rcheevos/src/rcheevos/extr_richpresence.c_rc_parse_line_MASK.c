
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static const char* FUNC_1(const char* VAR_0, const char** VAR_1) {
  const char* VAR_2;
  const char* VAR_3;


  VAR_2 = VAR_0;
  while (*VAR_2 && *VAR_2 != '\n')
    ++VAR_2;


  VAR_3 = VAR_0;
  while (VAR_3 < VAR_2 && (VAR_3[0] != '/' || VAR_3[1] != '/' || (VAR_3 > VAR_0 && VAR_3[-1] == '\\')))
    ++VAR_3;


  if (VAR_3 == VAR_2) {
    if (VAR_3 > VAR_0 && VAR_3[-1] == '\r')
      --VAR_3;
  } else {
    while (VAR_3 > VAR_0 && FUNC_0(VAR_3[-1]))
      --VAR_3;
  }


  *VAR_1 = VAR_3;

  if (*VAR_2 == '\n')
    ++VAR_2;
  return VAR_2;
}
