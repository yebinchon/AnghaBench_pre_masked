
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


  VAR_7 = FUNC_1(VAR_2,VAR_3,VAR_4,VAR_5);
  if (VAR_7 != VAR_0)
    return VAR_7;


  VAR_7 = FUNC_3(VAR_2,VAR_6,VAR_4,2);
  if (VAR_7 != VAR_0) {
    if (VAR_7 != 2) FUNC_0();
    if (VAR_5 < 2)
      return VAR_1;
    VAR_3[0] = VAR_6[0]+0x80;
    VAR_3[1] = VAR_6[1]+0x80;
    return 2;
  }


  VAR_7 = FUNC_2(VAR_2,VAR_6,VAR_4,1);
  if (VAR_7 != VAR_0 && VAR_6[0] >= 0x80) {
    if (VAR_7 != 1) FUNC_0();
    if (VAR_5 < 2)
      return VAR_1;
    VAR_3[0] = 0x8e;
    VAR_3[1] = VAR_6[0];
    return 2;
  }


  VAR_7 = FUNC_4(VAR_2,VAR_6,VAR_4,2);
  if (VAR_7 != VAR_0) {
    if (VAR_7 != 2) FUNC_0();
    if (VAR_5 < 3)
      return VAR_1;
    VAR_3[0] = 0x8f;
    VAR_3[1] = VAR_6[0]+0x80;
    VAR_3[2] = VAR_6[1]+0x80;
    return 3;
  }


  if (VAR_4 == 0x00a5) {
    VAR_3[0] = 0x5c;
    return 1;
  }
  if (VAR_4 == 0x203e) {
    VAR_3[0] = 0x7e;
    return 1;
  }



  if (VAR_4 >= 0xe000 && VAR_4 < 0xe758) {
    if (VAR_4 < 0xe3ac) {
      unsigned char VAR_8, VAR_9;
      if (VAR_5 < 2)
        return VAR_1;
      VAR_8 = (unsigned int) (VAR_4 - 0xe000) / 94;
      VAR_9 = (unsigned int) (VAR_4 - 0xe000) % 94;
      VAR_3[0] = VAR_8+0xf5;
      VAR_3[1] = VAR_9+0xa1;
      return 2;
    } else {
      unsigned char VAR_10, VAR_11;
      if (VAR_5 < 3)
        return VAR_1;
      VAR_10 = (unsigned int) (VAR_4 - 0xe3ac) / 94;
      VAR_11 = (unsigned int) (VAR_4 - 0xe3ac) % 94;
      VAR_3[0] = 0x8f;
      VAR_3[1] = VAR_10+0xf5;
      VAR_3[2] = VAR_11+0xa1;
      return 3;
    }
  }

  return VAR_0;
}
