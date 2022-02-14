
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned char*,int,int) ;
 int* VAR_2 ;
 int FUNC_1 (int ,unsigned char*,int,int) ;
 int FUNC_2 (int ,unsigned char*,int,int) ;
 int FUNC_3 (int ,unsigned char*,int,int) ;

__attribute__((used)) static int
FUNC_4 (conv_t VAR_3, unsigned char *VAR_4, ucs4_t VAR_5, int VAR_6)
{
  int VAR_7;


  VAR_7 = FUNC_0(VAR_3,VAR_4,VAR_5,VAR_6);
  if (VAR_7 != VAR_0)
    return VAR_7;


  VAR_7 = FUNC_3(VAR_3,VAR_4,VAR_5,VAR_6);
  if (VAR_7 != VAR_0)
    return VAR_7;

  VAR_7 = FUNC_1(VAR_3,VAR_4,VAR_5,VAR_6);
  if (VAR_7 != VAR_0)
    return VAR_7;


  if (VAR_5 >= 0xe000 && VAR_5 <= 0xe864) {
    if (VAR_6 >= 2) {
      if (VAR_5 < 0xe766) {

        if (VAR_5 < 0xe4c6) {
          unsigned int VAR_8 = VAR_5 - 0xe000;
          VAR_4[1] = (VAR_8 % 94) + 0xa1; VAR_8 = VAR_8 / 94;
          VAR_4[0] = (VAR_8 < 6 ? VAR_8 + 0xaa : VAR_8 + 0xf2);
          return 2;
        } else {
          unsigned int VAR_9 = VAR_5 - 0xe4c6;
          VAR_4[0] = (VAR_9 / 96) + 0xa1; VAR_9 = VAR_9 % 96;
          VAR_4[1] = VAR_9 + (VAR_9 >= 0x3f ? 0x41 : 0x40);
          return 2;
        }
      } else {

        unsigned int VAR_10 = 0;
        unsigned int VAR_11 = 32;


        while (VAR_10 < VAR_11) {
          unsigned int VAR_12 = (VAR_10 + VAR_11) / 2;
          if (VAR_5 < VAR_2[VAR_12*3+0])
            VAR_11 = VAR_12;
          else if (VAR_5 > VAR_2[VAR_12*3+1])
            VAR_10 = VAR_12 + 1;
          else {
            unsigned short VAR_13 =
              VAR_2[VAR_12*3+2] + (VAR_5 - VAR_2[VAR_12*3+0]);
            VAR_4[0] = (VAR_13 >> 8);
            VAR_4[1] = (VAR_13 & 0xff);
            return 2;
          }
        }
      }
    } else
      return VAR_1;
  }
  VAR_7 = FUNC_2(VAR_3,VAR_4,VAR_5,VAR_6);
  if (VAR_7 != VAR_0)
    return VAR_7;


  if (VAR_6 >= 4) {
    if (VAR_5 >= 0x10000 && VAR_5 < 0x110000) {
      unsigned int VAR_14 = VAR_5 - 0x10000;
      VAR_4[3] = (VAR_14 % 10) + 0x30; VAR_14 = VAR_14 / 10;
      VAR_4[2] = (VAR_14 % 126) + 0x81; VAR_14 = VAR_14 / 126;
      VAR_4[1] = (VAR_14 % 10) + 0x30; VAR_14 = VAR_14 / 10;
      VAR_4[0] = VAR_14 + 0x90;
      return 4;
    }
    return VAR_0;
  }
  return VAR_1;
}
