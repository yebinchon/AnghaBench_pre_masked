
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int start; int end; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (char const*,char**,int) ;

int FUNC_2(const char *VAR_5) {
  const char *VAR_6 = VAR_5;
  char *VAR_7 = ((void*)0);
  int VAR_8 = (int)FUNC_1(VAR_6, &VAR_7, 10), VAR_9 = 0;
  if (VAR_7 == VAR_6 || VAR_8 < 0)
    return 0;
  if (*VAR_7 == '%') {
    if (VAR_8 > 100)
      VAR_8 = 100;
    VAR_3 = VAR_8 * 65536 / 100;
    FUNC_0(VAR_0, "packet loss level set to %d%%\n", VAR_8);
  } else {
    if (VAR_8 <= 0)
      return 0;
    while (VAR_9 < 10) {
      VAR_2[VAR_9].start = VAR_8;
      if (*VAR_7 == '-') {
        VAR_6 = VAR_7 + 1;
        VAR_8 = (int)FUNC_1(VAR_6, &VAR_7, 10);
        if (VAR_7 == VAR_6 || VAR_8 <= 0)
          return 0;
      }
      VAR_2[VAR_9++].end = VAR_8;
      if (*VAR_7 == 0)
        break;
      if (*VAR_7 != ',')
        return 0;
      VAR_6 = VAR_7 + 1;
      VAR_8 = (int)FUNC_1(VAR_6, &VAR_7, 10);
      if (VAR_7 == VAR_6 || VAR_8 <= 0)
        return 0;
    }
    if (VAR_9 == 10)
      return 0;
    VAR_1 = VAR_9;
  }
  VAR_4 = 0;
  return 1;
}
