
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int* VAR_1 ;
 unsigned int* VAR_2 ;

__attribute__((used)) static int
FUNC_1 (conv_t VAR_3, ucs4_t *VAR_4, const unsigned char *VAR_5, int VAR_6)
{
  unsigned char VAR_7 = VAR_5[0];
  if (VAR_7 >= 0x81 && VAR_7 <= 0x84) {
    if (VAR_6 >= 2) {
      unsigned char VAR_8 = VAR_5[1];
      if (VAR_8 >= 0x30 && VAR_8 <= 0x39) {
        if (VAR_6 >= 3) {
          unsigned char VAR_9 = VAR_5[2];
          if (VAR_9 >= 0x81 && VAR_9 <= 0xfe) {
            if (VAR_6 >= 4) {
              unsigned char VAR_10 = VAR_5[3];
              if (VAR_10 >= 0x30 && VAR_10 <= 0x39) {
                unsigned int VAR_11 = (((VAR_7 - 0x81) * 10 + (VAR_8 - 0x30)) * 126 + (VAR_9 - 0x81)) * 10 + (VAR_10 - 0x30);
                if (VAR_11 >= 0 && VAR_11 <= 39419) {
                  unsigned int VAR_12 = 0;
                  unsigned int VAR_13 = 205;
                  while (VAR_12 < VAR_13) {
                    unsigned int VAR_14 = (VAR_12 + VAR_13) / 2;
                    if (VAR_11 <= VAR_1[2*VAR_14+1])
                      VAR_13 = VAR_14;
                    else if (VAR_11 >= VAR_1[2*VAR_14+2])
                      VAR_12 = VAR_14 + 1;
                    else
                      return VAR_0;
                  }
                  {
                    unsigned int VAR_15 = VAR_2[VAR_12];
                    *VAR_4 = (ucs4_t) (VAR_11 + VAR_15);
                    return 4;
                  }
                }
              }
              return VAR_0;
            }
            return FUNC_0(0);
          }
          return VAR_0;
        }
        return FUNC_0(0);
      }
      return VAR_0;
    }
    return FUNC_0(0);
  }
  return VAR_0;
}
