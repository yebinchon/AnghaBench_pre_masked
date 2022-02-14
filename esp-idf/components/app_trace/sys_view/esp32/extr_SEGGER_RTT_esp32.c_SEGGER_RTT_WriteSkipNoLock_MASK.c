
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,int *,unsigned int,int ) ;
 int FUNC_3 (int *,void const*,unsigned int) ;
 int * VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ FUNC_4 () ;

unsigned FUNC_5(unsigned VAR_9, const void* VAR_10, unsigned VAR_11) {
  uint8_t *VAR_12 = (uint8_t *)VAR_10;
  uint8_t VAR_13 = *VAR_12;

  if (VAR_11 > VAR_4) {
      FUNC_0(VAR_6, "Too large event %u bytes!", VAR_11);
      return 0;
  }
  if (FUNC_4()) {



    if (*VAR_12 & 0x80) {
      *(VAR_12 + 1) |= (1 << 6);
    } else if (VAR_11 != 10 || *VAR_12 != 0) {
      *VAR_12 |= (1 << 6);
    }
  }
  if (VAR_8 + VAR_11 > VAR_4) {
    esp_err_t VAR_14 = FUNC_2(VAR_0, VAR_7, VAR_8, VAR_2);
    if (VAR_14 != VAR_1) {
      return 0;
    }
    VAR_8 = 0;
  }
  FUNC_3(&VAR_7[VAR_8], VAR_10, VAR_11);
  VAR_8 += VAR_11;
  if (VAR_13 == VAR_5) {
    FUNC_1(0, VAR_3);
  }
  return VAR_11;
}
