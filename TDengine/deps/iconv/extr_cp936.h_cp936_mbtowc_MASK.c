
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int*,unsigned char const*,int) ;

__attribute__((used)) static int
FUNC_2 (conv_t VAR_1, ucs4_t *VAR_2, const unsigned char *VAR_3, int VAR_4)
{

  {
    int VAR_5 = FUNC_1(VAR_1,VAR_2,VAR_3,VAR_4);
    if (VAR_5 != VAR_0)
      return VAR_5;
  }

  {
    unsigned char VAR_6 = *VAR_3;
    if (VAR_6 == 0x80) {
      *VAR_2 = 0x20ac;
      return 1;
    }

    if (VAR_6 >= 0xa1 && VAR_6 <= 0xa2) {
      if (VAR_4 < 2)
        return FUNC_0(0);
      {
        unsigned char VAR_7 = VAR_3[1];
        if ((VAR_7 >= 0x40 && VAR_7 < 0x7f) || (VAR_7 >= 0x80 && VAR_7 < 0xa1)) {
          *VAR_2 = 0xe4c6 + 96 * (VAR_6 - 0xa1) + (VAR_7 - (VAR_7 >= 0x80 ? 0x41 : 0x40));
          return 2;
        }
      }
    } else if ((VAR_6 >= 0xaa && VAR_6 < 0xb0) || (VAR_6 >= 0xf8 && VAR_6 < 0xff)) {
      if (VAR_4 < 2)
        return FUNC_0(0);
      {
        unsigned char VAR_8 = VAR_3[1];
        if (VAR_8 >= 0xa1 && VAR_8 < 0xff) {
          *VAR_2 = 0xe000 + 94 * (VAR_6 - (VAR_6 >= 0xf8 ? 0xf2 : 0xaa)) + (VAR_8 - 0xa1);
          return 2;
        }
      }
    }
  }
  return VAR_0;
}
