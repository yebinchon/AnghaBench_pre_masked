
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int*,unsigned char const*,int) ;
 int FUNC_2 (int ,int*,unsigned char const*,int) ;
 int FUNC_3 (int ,int*,unsigned char const*,int) ;
 int FUNC_4 (int ,int*,unsigned char const*,int) ;

__attribute__((used)) static int
FUNC_5 (conv_t VAR_1, ucs4_t *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
  int VAR_5;


  if (*VAR_3 < 0x80)
    return FUNC_1(VAR_1,VAR_2,VAR_3,VAR_4);


  VAR_5 = FUNC_4(VAR_1,VAR_2,VAR_3,VAR_4);
  if (VAR_5 != VAR_0)
    return VAR_5;

  VAR_5 = FUNC_2(VAR_1,VAR_2,VAR_3,VAR_4);
  if (VAR_5 != VAR_0)
    return VAR_5;



  VAR_5 = FUNC_3(VAR_1,VAR_2,VAR_3,VAR_4);
  if (VAR_5 != VAR_0)
    return VAR_5;

  {
    unsigned char VAR_6 = VAR_3[0];
    if ((VAR_6 >= 0xaa && VAR_6 <= 0xaf) || (VAR_6 >= 0xf8 && VAR_6 <= 0xfe)) {
      if (VAR_4 >= 2) {
        unsigned char VAR_7 = VAR_3[1];
        if (VAR_7 >= 0xa1 && VAR_7 <= 0xfe) {
          *VAR_2 = 0xe000 + 94 * (VAR_6 >= 0xf8 ? VAR_6 - 0xf2 : VAR_6 - 0xaa) + (VAR_7 - 0xa1);
          return 2;
        }
      } else
        return FUNC_0(0);
    } else if (VAR_6 >= 0xa1 && VAR_6 <= 0xa7) {
      if (VAR_4 >= 2) {
        unsigned char VAR_8 = VAR_3[1];
        if (VAR_8 >= 0x40 && VAR_8 <= 0xa1 && VAR_8 != 0x7f) {
          *VAR_2 = 0xe4c6 + 96 * (VAR_6 - 0xa1) + VAR_8 - (VAR_8 >= 0x80 ? 0x41 : 0x40);
          return 2;
        }
      } else
        return FUNC_0(0);
    }
  }


  {
    unsigned char VAR_9 = VAR_3[0];
    if (VAR_9 >= 0x90 && VAR_9 <= 0xe3) {
      if (VAR_4 >= 2) {
        unsigned char VAR_10 = VAR_3[1];
        if (VAR_10 >= 0x30 && VAR_10 <= 0x39) {
          if (VAR_4 >= 3) {
            unsigned char VAR_11 = VAR_3[2];
            if (VAR_11 >= 0x81 && VAR_11 <= 0xfe) {
              if (VAR_4 >= 4) {
                unsigned char VAR_12 = VAR_3[3];
                if (VAR_12 >= 0x30 && VAR_12 <= 0x39) {
                  unsigned int VAR_13 = (((VAR_9 - 0x90) * 10 + (VAR_10 - 0x30)) * 126 + (VAR_11 - 0x81)) * 10 + (VAR_12 - 0x30);
                  if (VAR_13 >= 0 && VAR_13 < 0x100000) {
                    *VAR_2 = (ucs4_t) (0x10000 + VAR_13);
                    return 4;
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
}
