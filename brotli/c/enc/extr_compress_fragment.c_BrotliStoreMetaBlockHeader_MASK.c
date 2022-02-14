
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint64_t ;
typedef scalar_t__ BROTLI_BOOL ;


 int FUNC_0 (int,size_t,size_t*,int *) ;

__attribute__((used)) static void FUNC_1(
    size_t VAR_0, BROTLI_BOOL VAR_1, size_t* VAR_2,
    uint8_t* VAR_3) {
  size_t VAR_4 = 6;

  FUNC_0(1, 0, VAR_2, VAR_3);
  if (VAR_0 <= (1U << 16)) {
    VAR_4 = 4;
  } else if (VAR_0 <= (1U << 20)) {
    VAR_4 = 5;
  }
  FUNC_0(2, VAR_4 - 4, VAR_2, VAR_3);
  FUNC_0(VAR_4 * 4, VAR_0 - 1, VAR_2, VAR_3);

  FUNC_0(1, (uint64_t)VAR_1, VAR_2, VAR_3);
}
