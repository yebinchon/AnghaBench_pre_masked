
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int* VAR_4 ;
 unsigned char* VAR_5 ;
 unsigned char* VAR_6 ;
 int* VAR_7 ;
 unsigned char* VAR_8 ;
 int* VAR_9 ;

__attribute__((used)) static int
FUNC_1 (conv_t VAR_10, ucs4_t *VAR_11, const unsigned char *VAR_12, int VAR_13)
{
  unsigned char VAR_14 = VAR_12[0];
  if ((VAR_14 >= 0x84 && VAR_14 <= 0xd3)) {
    if (VAR_13 >= 2) {
      unsigned char VAR_15 = VAR_12[1];
      if ((VAR_15 >= 0x41 && VAR_15 < 0x7f) || (VAR_15 >= 0x81 && VAR_15 < 0xff)) {
        unsigned int VAR_16 = (VAR_14 << 8) | VAR_15;
        unsigned int VAR_17 = (VAR_16 >> 10) & 31;
        unsigned int VAR_18 = (VAR_16 >> 5) & 31;
        unsigned int VAR_19 = VAR_16 & 31;
        int VAR_20 = VAR_7[VAR_17];
        int VAR_21 = VAR_9[VAR_18];
        int VAR_22 = VAR_4[VAR_19];

        if (VAR_20 >= 0 && VAR_21 >= 0 && VAR_22 >= 0) {

          if (VAR_20 == VAR_3) {
            if (VAR_21 == VAR_3) {
              unsigned char VAR_23 = VAR_5[VAR_19];
              if (VAR_23 != VAR_1) {
                *VAR_11 = (ucs4_t) 0x3130 + VAR_23;
                return 2;
              }
            } else if (VAR_22 == VAR_3) {
              unsigned char VAR_24 = VAR_8[VAR_18];
              if (VAR_24 != VAR_1 && VAR_24 != VAR_0) {
                *VAR_11 = (ucs4_t) 0x3130 + VAR_24;
                return 2;
              }
            }

          } else if (VAR_21 == VAR_3) {
            if (VAR_22 == VAR_3) {
              unsigned char VAR_25 = VAR_6[VAR_17];
              if (VAR_25 != VAR_1 && VAR_25 != VAR_0) {
                *VAR_11 = (ucs4_t) 0x3130 + VAR_25;
                return 2;
              }
            }

          } else {


             *VAR_11 = 0xac00 + ((VAR_20 - 1) * 21 + (VAR_21 - 1)) * 28 + VAR_22;
             return 2;
          }
        }
      }
      return VAR_2;
    }
    return FUNC_0(0);
  }
  return VAR_2;
}
