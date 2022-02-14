
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *,int const*) ;

__attribute__((used)) static inline uint8_t *FUNC_2(uint8_t *VAR_0, const uint8_t * restrict VAR_1, uint32_t VAR_2) {
  uint8_t *VAR_3 = VAR_0 + VAR_2;
  { FUNC_0(VAR_0, VAR_1); VAR_0 += 16; VAR_1 += 16; }
  while (VAR_0 < VAR_3) { FUNC_1(VAR_0, VAR_1); VAR_0 += 32; VAR_1 += 32; }
  return VAR_3;
}
