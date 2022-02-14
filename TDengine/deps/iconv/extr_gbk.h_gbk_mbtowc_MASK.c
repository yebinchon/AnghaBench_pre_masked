
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int*,unsigned char*,int) ;
 int FUNC_2 (int ,int*,unsigned char*,int) ;
 int FUNC_3 (int ,int*,unsigned char const*,int) ;
 int FUNC_4 (int ,int*,unsigned char const*,int) ;

__attribute__((used)) static int
FUNC_5 (conv_t VAR_1, ucs4_t *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
  unsigned char VAR_5 = *VAR_3;

  if (VAR_5 >= 0x81 && VAR_5 < 0xff) {
    if (VAR_4 < 2)
      return FUNC_0(0);
    if (VAR_5 >= 0xa1 && VAR_5 <= 0xf7) {
      unsigned char VAR_6 = VAR_3[1];
      if (VAR_5 == 0xa1) {
        if (VAR_6 == 0xa4) {
          *VAR_2 = 0x00b7;
          return 2;
        }
        if (VAR_6 == 0xaa) {
          *VAR_2 = 0x2014;
          return 2;
        }
      }
      if (VAR_6 >= 0xa1 && VAR_6 < 0xff) {
        unsigned char VAR_7[2];
        int VAR_8;
        VAR_7[0] = VAR_5-0x80; VAR_7[1] = VAR_6-0x80;
        VAR_8 = FUNC_2(VAR_1,VAR_2,VAR_7,2);
        if (VAR_8 != VAR_0)
          return VAR_8;
        VAR_7[0] = VAR_5; VAR_7[1] = VAR_6;
        VAR_8 = FUNC_1(VAR_1,VAR_2,VAR_7,2);
        if (VAR_8 != VAR_0)
          return VAR_8;
      }
    }
    if (VAR_5 >= 0x81 && VAR_5 <= 0xa0)
      return FUNC_3(VAR_1,VAR_2,VAR_3,2);
    if (VAR_5 >= 0xa8 && VAR_5 <= 0xfe)
      return FUNC_4(VAR_1,VAR_2,VAR_3,2);
    if (VAR_5 == 0xa2) {
      unsigned char VAR_9 = VAR_3[1];
      if (VAR_9 >= 0xa1 && VAR_9 <= 0xaa) {
        *VAR_2 = 0x2170+(VAR_9-0xa1);
        return 2;
      }
    }
  }
  return VAR_0;
}
