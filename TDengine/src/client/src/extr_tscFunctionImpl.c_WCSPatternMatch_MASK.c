
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef size_t int32_t ;
typedef int SPatternCompareInfo ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 size_t FUNC_2 (scalar_t__ const*) ;
 size_t FUNC_3 (scalar_t__ const*,scalar_t__*) ;

int FUNC_4(const wchar_t *VAR_3, const wchar_t *VAR_4, size_t VAR_5, const SPatternCompareInfo *VAR_6) {
  wchar_t VAR_7, VAR_8;
  wchar_t VAR_9 = L'_';
  wchar_t VAR_10 = L'%';

  int32_t VAR_11 = 0;
  int32_t VAR_12 = 0;

  while ((VAR_7 = VAR_3[VAR_11++]) != 0) {
    if (VAR_7 == VAR_10) {

      while ((VAR_7 = VAR_3[VAR_11++]) == VAR_10 || VAR_7 == VAR_9) {
        if (VAR_7 == VAR_9 && (VAR_12 > VAR_5 || VAR_4[VAR_12++] == 0)) {
          return VAR_2;
        }
      }
      if (VAR_7 == 0) {
        return VAR_0;
      }

      wchar_t VAR_13[3] = {FUNC_1(VAR_7), FUNC_0(VAR_7), 0};
      while (1) {
        size_t VAR_14 = FUNC_3(VAR_4, VAR_13);

        VAR_4 += VAR_14;
        if (VAR_4[0] == 0 || (VAR_14 >= VAR_5 - 1)) {
          break;
        }

        VAR_4++;

        int32_t VAR_15 = FUNC_4(&VAR_3[VAR_11], VAR_4, FUNC_2(VAR_4), VAR_6);
        if (VAR_15 != VAR_1) {
          return VAR_15;
        }
      }

      return VAR_2;
    }

    VAR_8 = VAR_4[VAR_12++];

    if (VAR_12 <= VAR_5) {
      if (VAR_7 == VAR_8 || FUNC_0(VAR_7) == FUNC_0(VAR_8) || (VAR_7 == VAR_9 && VAR_8 != 0)) {
        continue;
      }
    }

    return VAR_1;
  }

  return (VAR_4[VAR_12] == 0 || VAR_12 >= VAR_5) ? VAR_0 : VAR_1;
}
