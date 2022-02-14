
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

__attribute__((used)) static int
FUNC_3 (conv_t VAR_2, unsigned char *VAR_3, ucs4_t VAR_4, int VAR_5)
{
  unsigned char VAR_6[2];
  int VAR_7;


  VAR_7 = FUNC_1(VAR_2,VAR_6,VAR_4,1);
  if (VAR_7 != VAR_0) {
    unsigned char VAR_8;
    if (VAR_7 != 1) FUNC_0();
    VAR_8 = VAR_6[0];
    if (VAR_8 < 0x80 || (VAR_8 >= 0xa1 && VAR_8 <= 0xdf)) {
      VAR_3[0] = VAR_8;
      return 1;
    }
  }


  VAR_7 = FUNC_2(VAR_2,VAR_6,VAR_4,2);
  if (VAR_7 != VAR_0) {
    unsigned char VAR_9, VAR_10;
    if (VAR_7 != 2) FUNC_0();
    if (VAR_5 < 2)
      return VAR_1;
    VAR_9 = VAR_6[0];
    VAR_10 = VAR_6[1];
    if ((VAR_9 >= 0x21 && VAR_9 <= 0x74) && (VAR_10 >= 0x21 && VAR_10 <= 0x7e)) {
      unsigned char VAR_11 = (VAR_9 - 0x21) >> 1;
      unsigned char VAR_12 = (((VAR_9 - 0x21) & 1) ? 0x5e : 0) + (VAR_10 - 0x21);
      VAR_3[0] = (VAR_11 < 0x1f ? VAR_11+0x81 : VAR_11+0xc1);
      VAR_3[1] = (VAR_12 < 0x3f ? VAR_12+0x40 : VAR_12+0x41);
      return 2;
    }
  }



  if (VAR_4 >= 0xe000 && VAR_4 < 0xe758) {
    unsigned char VAR_13, VAR_14;
    if (VAR_5 < 2)
      return VAR_1;
    VAR_13 = (unsigned int) (VAR_4 - 0xe000) / 188;
    VAR_14 = (unsigned int) (VAR_4 - 0xe000) % 188;
    VAR_3[0] = VAR_13+0xf0;
    VAR_3[1] = (VAR_14 < 0x3f ? VAR_14+0x40 : VAR_14+0x41);
    return 2;
  }

  return VAR_0;
}
