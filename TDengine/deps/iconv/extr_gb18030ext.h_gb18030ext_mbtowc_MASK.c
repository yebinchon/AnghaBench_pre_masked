
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned short* VAR_1 ;
 unsigned short* VAR_2 ;

__attribute__((used)) static int
FUNC_1 (conv_t VAR_3, ucs4_t *VAR_4, const unsigned char *VAR_5, int VAR_6)
{
  unsigned char VAR_7 = VAR_5[0];
  if ((VAR_7 == 0xa2) || (VAR_7 >= 0xa4 && VAR_7 <= 0xa9) || (VAR_7 == 0xd7) || (VAR_7 == 0xfe)) {
    if (VAR_6 >= 2) {
      unsigned char VAR_8 = VAR_5[1];
      if ((VAR_8 >= 0x40 && VAR_8 < 0x7f) || (VAR_8 >= 0x80 && VAR_8 < 0xff)) {
        unsigned int VAR_9 = 190 * (VAR_7 - 0x81) + (VAR_8 - (VAR_8 >= 0x80 ? 0x41 : 0x40));
        unsigned short VAR_10 = 0xfffd;
        switch (VAR_7) {
          case 0xa2:
            if (VAR_9 >= 6376 && VAR_9 <= 6381)
              VAR_10 = 0xe766 + (VAR_9 - 6376);
            else if (VAR_9 == 6432)
              VAR_10 = 0x20ac;
            else if (VAR_9 == 6433)
              VAR_10 = 0xe76d;
            else if (VAR_9 >= 6444 && VAR_9 <= 6445)
              VAR_10 = 0xe76e + (VAR_9 - 6444);
            else if (VAR_9 >= 6458 && VAR_9 <= 6459)
              VAR_10 = 0xe770 + (VAR_9 - 6458);
            break;
          case 0xa4:
            if (VAR_9 >= 6829 && VAR_9 <= 6839)
              VAR_10 = 0xe772 + (VAR_9 - 6829);
            break;
          case 0xa5:
            if (VAR_9 >= 7022 && VAR_9 <= 7029)
              VAR_10 = 0xe77d + (VAR_9 - 7022);
            break;
          case 0xa6:
            if (VAR_9 >= 7150 && VAR_9 <= 7157)
              VAR_10 = 0xe785 + (VAR_9 - 7150);
            else if (VAR_9 >= 7182 && VAR_9 <= 7190)
              VAR_10 = 0xe78d + (VAR_9 - 7182);
            else if (VAR_9 >= 7201 && VAR_9 <= 7202)
              VAR_10 = 0xe794 + (VAR_9 - 7201);
            else if (VAR_9 == 7208)
              VAR_10 = 0xe796;
            else if (VAR_9 >= 7211 && VAR_9 <= 7219)
              VAR_10 = 0xe797 + (VAR_9 - 7211);
            break;
          case 0xa7:
            if (VAR_9 >= 7349 && VAR_9 <= 7363)
              VAR_10 = 0xe7a0 + (VAR_9 - 7349);
            else if (VAR_9 >= 7397 && VAR_9 <= 7409)
              VAR_10 = 0xe7af + (VAR_9 - 7397);
            break;
          case 0xa8:
            if (VAR_9 >= 7495 && VAR_9 <= 7505)
              VAR_10 = 0xe7bc + (VAR_9 - 7495);
            else if (VAR_9 == 7533)
              VAR_10 = 0xe7c7;
            else if (VAR_9 == 7536)
              VAR_10 = 0x01f9;
            else if (VAR_9 >= 7538 && VAR_9 <= 7541)
              VAR_10 = 0xe7c9 + (VAR_9 - 7538);
            else if (VAR_9 >= 7579 && VAR_9 <= 7599)
              VAR_10 = 0xe7cd + (VAR_9 - 7579);
            break;
          case 0xa9:
            if (VAR_9 == 7624)
              VAR_10 = 0xe7e2;
            else if (VAR_9 == 7627)
              VAR_10 = 0xe7e3;
            else if (VAR_9 >= 7629 && VAR_9 <= 7631)
              VAR_10 = 0xe7e4 + (VAR_9 - 7629);
            else if (VAR_9 >= 7672 && VAR_9 < 7685)
              VAR_10 = VAR_1[VAR_9-7672];
            else if (VAR_9 >= 7686 && VAR_9 <= 7698)
              VAR_10 = 0xe7f4 + (VAR_9 - 7686);
            else if (VAR_9 >= 7775 && VAR_9 <= 7789)
              VAR_10 = 0xe801 + (VAR_9 - 7775);
            break;
          case 0xd7:
            if (VAR_9 >= 16525 && VAR_9 <= 16529)
              VAR_10 = 0xe810 + (VAR_9 - 16525);
            break;
          case 0xfe:
            if (VAR_9 < 23846)
              VAR_10 = VAR_2[VAR_9-23750];
            break;
          default:
            break;
        }
        if (VAR_10 != 0xfffd) {
          *VAR_4 = (ucs4_t) VAR_10;
          return 2;
        }
      }
      return VAR_0;
    }
    return FUNC_0(0);
  }
  return VAR_0;
}
