
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TSKEY ;



int FUNC_0(char *VAR_0, int VAR_1, TSKEY VAR_2, int VAR_3) {
  int VAR_4, VAR_5, VAR_6 = -1;
  int VAR_7, VAR_8;
  TSKEY *VAR_9;

  VAR_9 = (TSKEY *)VAR_0;
  VAR_4 = 0;
  VAR_5 = VAR_1 - 1;

  if (VAR_3 == 0) {

    while (1) {
      if (VAR_2 >= VAR_9[VAR_5]) return VAR_5;
      if (VAR_2 == VAR_9[VAR_4]) return VAR_4;
      if (VAR_2 < VAR_9[VAR_4]) return VAR_4 - 1;

      VAR_8 = VAR_5 - VAR_4 + 1;
      VAR_7 = VAR_9[VAR_5] - VAR_9[VAR_4];
      VAR_6 = (VAR_2 - VAR_9[VAR_4]) / VAR_7 * VAR_8 + VAR_4;

      if (VAR_2 < VAR_9[VAR_6]) {
        VAR_5 = VAR_6 - 1;
      } else if (VAR_2 > VAR_9[VAR_6]) {
        VAR_4 = VAR_6 + 1;
      } else {
        break;
      }
    }

  } else {

    while (1) {
      if (VAR_2 <= VAR_9[VAR_4]) return VAR_4;
      if (VAR_2 == VAR_9[VAR_5]) return VAR_5;

      if (VAR_2 > VAR_9[VAR_5]) {
        VAR_5 = VAR_5 + 1;
        if (VAR_5 >= VAR_1) return -1;
      }

      VAR_8 = VAR_5 - VAR_4 + 1;
      VAR_7 = VAR_9[VAR_5] - VAR_9[VAR_4];
      VAR_6 = (VAR_2 - VAR_9[VAR_4]) / VAR_7 * VAR_8 + VAR_4;

      if (VAR_2 < VAR_9[VAR_6]) {
        VAR_5 = VAR_6 - 1;
      } else if (VAR_2 > VAR_9[VAR_6]) {
        VAR_4 = VAR_6 + 1;
      } else {
        break;
      }
    }
  }

  return VAR_6;
}
