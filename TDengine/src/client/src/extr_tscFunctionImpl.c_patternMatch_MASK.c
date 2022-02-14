
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_3__ {char matchAll; char matchOne; } ;
typedef TYPE_1__ SPatternCompareInfo ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char) ;
 char FUNC_2 (char) ;

int FUNC_3(const char *VAR_3, const char *VAR_4, size_t VAR_5, const SPatternCompareInfo *VAR_6) {
  char VAR_7, VAR_8;

  int32_t VAR_9 = 0;
  int32_t VAR_10 = 0;

  while ((VAR_7 = VAR_3[VAR_9++]) != 0) {
    if (VAR_7 == VAR_6->matchAll) {

      while ((VAR_7 = VAR_3[VAR_9++]) == VAR_6->matchAll || VAR_7 == VAR_6->matchOne) {
        if (VAR_7 == VAR_6->matchOne && (VAR_10 > VAR_5 || VAR_4[VAR_10++] == 0)) {

          return VAR_2;
        }
      }

      if (VAR_7 == 0) {
        return VAR_0;
      }

      char VAR_11[3] = {FUNC_2(VAR_7), FUNC_1(VAR_7), 0};
      while (1) {
        size_t VAR_12 = FUNC_0(VAR_4, VAR_11);
        VAR_4 += VAR_12;

        if (VAR_4[0] == 0 || (VAR_12 >= VAR_5 - 1)) {
          break;
        }

        int32_t VAR_13 = FUNC_3(&VAR_3[VAR_9], ++VAR_4, VAR_5 - VAR_12 - 1, VAR_6);
        if (VAR_13 != VAR_1) {
          return VAR_13;
        }
      }
      return VAR_2;
    }

    VAR_8 = VAR_4[VAR_10++];

    if (VAR_10 <= VAR_5) {
      if (VAR_7 == VAR_8 || FUNC_1(VAR_7) == FUNC_1(VAR_8) || (VAR_7 == VAR_6->matchOne && VAR_8 != 0)) {
        continue;
      }
    }

    return VAR_1;
  }

  return (VAR_4[VAR_10] == 0 || VAR_10 >= VAR_5) ? VAR_0 : VAR_1;
}
