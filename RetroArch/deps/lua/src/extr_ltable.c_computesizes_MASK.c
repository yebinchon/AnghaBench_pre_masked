
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static unsigned int FUNC_1 (unsigned int VAR_0[], unsigned int *VAR_1) {
  int VAR_2;
  unsigned int VAR_3;
  unsigned int VAR_4 = 0;
  unsigned int VAR_5 = 0;
  unsigned int VAR_6 = 0;

  for (VAR_2 = 0, VAR_3 = 1;
       VAR_3 > 0 && *VAR_1 > VAR_3 / 2;
       VAR_2++, VAR_3 *= 2) {
    if (VAR_0[VAR_2] > 0) {
      VAR_4 += VAR_0[VAR_2];
      if (VAR_4 > VAR_3/2) {
        VAR_6 = VAR_3;
        VAR_5 = VAR_4;
      }
    }
  }
  FUNC_0((VAR_6 == 0 || VAR_6 / 2 < VAR_5) && VAR_5 <= VAR_6);
  *VAR_1 = VAR_5;
  return VAR_6;
}
