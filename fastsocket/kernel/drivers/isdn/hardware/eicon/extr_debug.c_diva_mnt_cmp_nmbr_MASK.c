
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2 (const char* VAR_1) {
  const char* VAR_2 = &VAR_0[0];
  int VAR_3 = FUNC_1(&VAR_0[0]), VAR_4 = FUNC_1(VAR_1);

  if (VAR_2[0] == 'C') {
    if (FUNC_0 (&VAR_2[1], "single")) {
      return (0);
    }
    return (-1);
  }

  if (!VAR_3 || (VAR_3 > VAR_4)) {
    return (-1);
  }

  VAR_1 = VAR_1 + VAR_4 - 1;
  VAR_2 = VAR_2 + VAR_3 - 1;

  while (VAR_3--) {
    if (*VAR_1-- != *VAR_2--) {
      return (-1);
    }
  }

  return (0);
}
