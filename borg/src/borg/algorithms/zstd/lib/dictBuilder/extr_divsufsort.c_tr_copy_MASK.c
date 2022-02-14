
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static
void
FUNC_0(int *VAR_0, const int *VAR_1,
        int *VAR_2, int *VAR_3, int *VAR_4, int *VAR_5,
        int VAR_6) {


  int *VAR_7, *VAR_8, *VAR_9;
  int VAR_10, VAR_11;

  VAR_11 = VAR_4 - VAR_1 - 1;
  for(VAR_7 = VAR_2, VAR_8 = VAR_3 - 1; VAR_7 <= VAR_8; ++VAR_7) {
    if((0 <= (VAR_10 = *VAR_7 - VAR_6)) && (VAR_0[VAR_10] == VAR_11)) {
      *++VAR_8 = VAR_10;
      VAR_0[VAR_10] = VAR_8 - VAR_1;
    }
  }
  for(VAR_7 = VAR_5 - 1, VAR_9 = VAR_8 + 1, VAR_8 = VAR_4; VAR_9 < VAR_8; --VAR_7) {
    if((0 <= (VAR_10 = *VAR_7 - VAR_6)) && (VAR_0[VAR_10] == VAR_11)) {
      *--VAR_8 = VAR_10;
      VAR_0[VAR_10] = VAR_8 - VAR_1;
    }
  }
}
