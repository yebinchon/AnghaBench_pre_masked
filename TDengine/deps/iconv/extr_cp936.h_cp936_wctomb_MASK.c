
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char*,int,int) ;

__attribute__((used)) static int
FUNC_2 (conv_t VAR_1, unsigned char *VAR_2, ucs4_t VAR_3, int VAR_4)
{

  {
    int VAR_5 = FUNC_1(VAR_1,VAR_2,VAR_3,VAR_4);
    if (VAR_5 != VAR_0)
      return VAR_5;
  }

  if (VAR_3 >= 0xe000 && VAR_3 < 0xe586) {

    if (VAR_4 < 2)
      return FUNC_0(0);
    if (VAR_3 < 0xe4c6) {
      unsigned int VAR_6 = VAR_3 - 0xe000;
      unsigned int VAR_7 = VAR_6 / 94;
      unsigned int VAR_8 = VAR_6 % 94;
      VAR_2[0] = VAR_7 + (VAR_7 < 6 ? 0xaa : 0xf2);
      VAR_2[1] = VAR_8 + 0xa1;
      return 2;
    } else {
      unsigned int VAR_9 = VAR_3 - 0xe4c6;
      unsigned int VAR_10 = VAR_9 / 96;
      unsigned int VAR_11 = VAR_9 % 96;
      VAR_2[0] = VAR_10 + 0xa1;
      VAR_2[1] = VAR_11 + (VAR_11 < 0x3f ? 0x40 : 0x41);
      return 2;
    }
  } else if (VAR_3 == 0x20ac) {
    VAR_2[0] = 0x80;
    return 1;
  }
  return VAR_0;
}
