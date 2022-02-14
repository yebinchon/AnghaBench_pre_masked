
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef scalar_t__ int16_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;

__attribute__((used)) static int64_t FUNC_1(int64_t VAR_2, int16_t VAR_3) {
  float VAR_4 = 0.3;


  if (VAR_3 == VAR_0) {
    VAR_2 = VAR_2 / 1000;
  }

  int64_t VAR_5 = (int64_t)VAR_1 * VAR_4;
  VAR_5 = ((FUNC_0() % VAR_5) + VAR_1) * 1000L;

  if (VAR_2 < VAR_5) {
    return VAR_2;
  } else {
    return VAR_5;
  }
}
