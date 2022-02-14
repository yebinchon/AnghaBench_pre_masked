
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


  if (VAR_4 < 0x0080 && VAR_4 != 0x005c) {
    *VAR_3 = VAR_4;
    return 1;
  }
  if (VAR_4 == 0x20a9) {
    *VAR_3 = 0x5c;
    return 1;
  }






  VAR_7 = FUNC_1(VAR_2,VAR_6,VAR_4,2);
  if (VAR_7 != VAR_0) {
    if (VAR_7 != 2) FUNC_0();
    if (VAR_5 < 2)
      return VAR_1;
    VAR_3[0] = VAR_6[0];
    VAR_3[1] = VAR_6[1];
    return 2;
  }


  VAR_7 = FUNC_2(VAR_2,VAR_6,VAR_4,2);
  if (VAR_7 != VAR_0) {
    unsigned char VAR_8, VAR_9;
    if (VAR_7 != 2) FUNC_0();
    if (VAR_5 < 2)
      return VAR_1;
    VAR_8 = VAR_6[0];
    VAR_9 = VAR_6[1];
    if (((VAR_8 >= 0x21 && VAR_8 <= 0x2c) || (VAR_8 >= 0x4a && VAR_8 <= 0x7d))
        && (VAR_9 >= 0x21 && VAR_9 <= 0x7e)) {
      unsigned int VAR_10 = (VAR_8 < 0x4A ? (VAR_8-0x21+0x1B2) : (VAR_8-0x21+0x197));
      unsigned char VAR_11 = ((VAR_10 & 1) ? 0x5e : 0) + (VAR_9 - 0x21);
      VAR_3[0] = VAR_10 >> 1;
      VAR_3[1] = (VAR_11 < 0x4e ? VAR_11+0x31 : VAR_11+0x43);
      return 2;
    }
  }

  return VAR_0;
}
