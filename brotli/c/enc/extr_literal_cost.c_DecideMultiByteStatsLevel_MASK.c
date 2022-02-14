
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 size_t FUNC_0 (size_t,size_t,int) ;

__attribute__((used)) static size_t FUNC_1(size_t VAR_0, size_t VAR_1, size_t VAR_2,
                                        const uint8_t* VAR_3) {
  size_t VAR_4[3] = { 0 };
  size_t VAR_5 = 1;
  size_t VAR_6 = 0;
  size_t VAR_7;
  for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
    size_t VAR_8 = VAR_3[(VAR_0 + VAR_7) & VAR_2];
    ++VAR_4[FUNC_0(VAR_6, VAR_8, 2)];
    VAR_6 = VAR_8;
  }
  if (VAR_4[2] < 500) {
    VAR_5 = 1;
  }
  if (VAR_4[1] + VAR_4[2] < 25) {
    VAR_5 = 0;
  }
  return VAR_5;
}
