
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,unsigned char*,int,int) ;
 int FUNC_2 (int ,unsigned char*,int,int) ;
 int FUNC_3 (int ,unsigned char*,int,int) ;
 int FUNC_4 (int ,unsigned char*,int,int) ;

__attribute__((used)) static int
FUNC_5 (conv_t VAR_2, unsigned char *VAR_3, ucs4_t VAR_4, int VAR_5)
{
  unsigned char VAR_6[2];
  int VAR_7;


  VAR_7 = FUNC_1(VAR_2,VAR_6,VAR_4,1);
  if (VAR_7 != VAR_0) {
    unsigned char VAR_8;
    if (VAR_7 != 1) FUNC_0();
    VAR_8 = VAR_6[0];
    if (VAR_8 < 0x80) {
      VAR_3[0] = VAR_8;
      return 1;
    }
  }


  VAR_7 = FUNC_3(VAR_2,VAR_6,VAR_4,1);
  if (VAR_7 != VAR_0) {
    unsigned char VAR_9;
    if (VAR_7 != 1) FUNC_0();
    VAR_9 = VAR_6[0];
    if (VAR_9 >= 0xa1 && VAR_9 <= 0xdf) {
      VAR_3[0] = VAR_9;
      return 1;
    }
  }


  VAR_7 = FUNC_4(VAR_2,VAR_6,VAR_4,2);
  if (VAR_7 != VAR_0) {
    unsigned char VAR_10, VAR_11;
    if (VAR_7 != 2) FUNC_0();
    if (VAR_5 < 2)
      return VAR_1;
    VAR_10 = VAR_6[0];
    VAR_11 = VAR_6[1];
    if ((VAR_10 >= 0x21 && VAR_10 <= 0x74) && (VAR_11 >= 0x21 && VAR_11 <= 0x7e)) {
      unsigned char VAR_12 = (VAR_10 - 0x21) >> 1;
      unsigned char VAR_13 = (((VAR_10 - 0x21) & 1) ? 0x5e : 0) + (VAR_11 - 0x21);
      VAR_3[0] = (VAR_12 < 0x1f ? VAR_12+0x81 : VAR_12+0xc1);
      VAR_3[1] = (VAR_13 < 0x3f ? VAR_13+0x40 : VAR_13+0x41);
      return 2;
    }
  }


  VAR_7 = FUNC_2(VAR_2,VAR_6,VAR_4,2);
  if (VAR_7 != VAR_0) {
    if (VAR_7 != 2) FUNC_0();
    if (VAR_5 < 2)
      return VAR_1;
    VAR_3[0] = VAR_6[0];
    VAR_3[1] = VAR_6[1];
    return 2;
  }



  if (VAR_4 >= 0xe000 && VAR_4 < 0xe758) {
    unsigned char VAR_14, VAR_15;
    if (VAR_5 < 2)
      return VAR_1;
    VAR_14 = (unsigned int) (VAR_4 - 0xe000) / 188;
    VAR_15 = (unsigned int) (VAR_4 - 0xe000) % 188;
    VAR_3[0] = VAR_14+0xf0;
    VAR_3[1] = (VAR_15 < 0x3f ? VAR_15+0x40 : VAR_15+0x41);
    return 2;
  }


  if (VAR_4 == 0xff5e) {
    if (VAR_5 < 2)
      return VAR_1;
    VAR_3[0] = 0x81;
    VAR_3[1] = 0x60;
    return 2;
  }
  if (VAR_4 == 0x2225) {
    if (VAR_5 < 2)
      return VAR_1;
    VAR_3[0] = 0x81;
    VAR_3[1] = 0x61;
    return 2;
  }
  if (VAR_4 == 0xff0d) {
    if (VAR_5 < 2)
      return VAR_1;
    VAR_3[0] = 0x81;
    VAR_3[1] = 0x7c;
    return 2;
  }
  if (VAR_4 == 0xffe0) {
    if (VAR_5 < 2)
      return VAR_1;
    VAR_3[0] = 0x81;
    VAR_3[1] = 0x91;
    return 2;
  }
  if (VAR_4 == 0xffe1) {
    if (VAR_5 < 2)
      return VAR_1;
    VAR_3[0] = 0x81;
    VAR_3[1] = 0x92;
    return 2;
  }

  return VAR_0;
}
