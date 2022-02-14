
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int BROTLI_BOOL ;


 int VAR_0 ;
 double const FUNC_0 (int *,int) ;
 double VAR_1 ;
 double VAR_2 ;
 int FUNC_1 (int) ;

__attribute__((used)) static BROTLI_BOOL FUNC_2(
    const uint8_t* VAR_3, size_t VAR_4, size_t VAR_5) {
  double VAR_6 = (double)VAR_4;
  if (VAR_5 < VAR_1 * VAR_6) {
    return VAR_0;
  } else {
    uint32_t VAR_7[256] = { 0 };
    const double VAR_8 = VAR_6 * 8 * VAR_1 / VAR_2;
    size_t VAR_9;
    for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9 += VAR_2) {
      ++VAR_7[VAR_3[VAR_9]];
    }
    return FUNC_1(FUNC_0(VAR_7, 256) < VAR_8);
  }
}
