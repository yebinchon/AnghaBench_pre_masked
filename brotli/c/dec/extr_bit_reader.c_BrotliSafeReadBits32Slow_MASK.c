
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int BrotliBitReaderState ;
typedef int BrotliBitReader ;
typedef int BROTLI_BOOL ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int * const,int *) ;
 int FUNC_2 (int * const,int *) ;
 int FUNC_3 (int * const,int,int*) ;

BROTLI_BOOL FUNC_4(BrotliBitReader* const VAR_2,
    uint32_t VAR_3, uint32_t* VAR_4) {
  uint32_t VAR_5;
  uint32_t VAR_6;
  BrotliBitReaderState VAR_7;
  FUNC_0(VAR_3 <= 32);
  FUNC_0(VAR_3 > 24);
  FUNC_2(VAR_2, &VAR_7);
  if (!FUNC_3(VAR_2, 16, &VAR_5) ||
      !FUNC_3(VAR_2, VAR_3 - 16, &VAR_6)) {
    FUNC_1(VAR_2, &VAR_7);
    return VAR_0;
  }
  *VAR_4 = VAR_5 | (VAR_6 << 16);
  return VAR_1;
}
