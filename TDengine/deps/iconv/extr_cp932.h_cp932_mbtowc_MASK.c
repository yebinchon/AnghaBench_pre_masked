
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
 int FUNC_4 (int ,int*,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_5 (conv_t VAR_1, ucs4_t *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
  unsigned char VAR_5 = *VAR_3;
  if (VAR_5 < 0x80)
    return FUNC_1(VAR_1,VAR_2,VAR_3,VAR_4);
  else if (VAR_5 >= 0xa1 && VAR_5 <= 0xdf)
    return FUNC_3(VAR_1,VAR_2,VAR_3,VAR_4);
  else {
    unsigned char VAR_6, VAR_7;
    VAR_6 = VAR_5;
    if ((VAR_6 >= 0x81 && VAR_6 <= 0x9f && VAR_6 != 0x87) || (VAR_6 >= 0xe0 && VAR_6 <= 0xea)) {
      if (VAR_4 < 2)
        return FUNC_0(0);
      VAR_7 = VAR_3[1];
      if ((VAR_7 >= 0x40 && VAR_7 <= 0x7e) || (VAR_7 >= 0x80 && VAR_7 <= 0xfc)) {
        unsigned char VAR_8 = (VAR_6 < 0xe0 ? VAR_6-0x81 : VAR_6-0xc1);
        unsigned char VAR_9 = (VAR_7 < 0x80 ? VAR_7-0x40 : VAR_7-0x41);
        unsigned char VAR_10[2];
        VAR_10[0] = 2*VAR_8 + (VAR_9 < 0x5e ? 0 : 1) + 0x21;
        VAR_10[1] = (VAR_9 < 0x5e ? VAR_9 : VAR_9-0x5e) + 0x21;
        return FUNC_4(VAR_1,VAR_2,VAR_10,2);
      }
    } else if ((VAR_6 == 0x87) || (VAR_6 >= 0xed && VAR_6 <= 0xee) || (VAR_6 >= 0xfa)) {
      if (VAR_4 < 2)
        return FUNC_0(0);
      return FUNC_2(VAR_1,VAR_2,VAR_3,2);
    } else if (VAR_6 >= 0xf0 && VAR_6 <= 0xf9) {


      if (VAR_4 < 2)
        return FUNC_0(0);
      VAR_7 = VAR_3[1];
      if ((VAR_7 >= 0x40 && VAR_7 <= 0x7e) || (VAR_7 >= 0x80 && VAR_7 <= 0xfc)) {
        *VAR_2 = 0xe000 + 188*(VAR_6 - 0xf0) + (VAR_7 < 0x80 ? VAR_7-0x40 : VAR_7-0x41);
        return 2;
      }
    }
    return VAR_0;
  }
}
