
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int*,unsigned char const*,int) ;
 int FUNC_3 (int ,int*,unsigned char const*,int) ;
 int FUNC_4 (int ,int*,unsigned char*,int) ;
 int FUNC_5 (int ,int*,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_6 (conv_t VAR_1, ucs4_t *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
  unsigned char VAR_5 = *VAR_3;

  if (VAR_5 < 0x80)
    return FUNC_2(VAR_1,VAR_2,VAR_3,VAR_4);

  if (VAR_5 >= 0xa1 && VAR_5 < 0xff) {
    if (VAR_4 < 2)
      return FUNC_0(0);
    if (VAR_5 < 0xf5) {
      unsigned char VAR_6 = VAR_3[1];
      if (VAR_6 >= 0xa1 && VAR_6 < 0xff) {
        unsigned char VAR_7[2];
        VAR_7[0] = VAR_5-0x80; VAR_7[1] = VAR_6-0x80;
        return FUNC_4(VAR_1,VAR_2,VAR_7,2);
      } else
        return VAR_0;
    } else {


      unsigned char VAR_8 = VAR_3[1];
      if (VAR_8 >= 0xa1 && VAR_8 < 0xff) {
        *VAR_2 = 0xe000 + 94*(VAR_5-0xf5) + (VAR_8-0xa1);
        return 2;
      } else
        return VAR_0;
    }
  }

  if (VAR_5 == 0x8e) {
    if (VAR_4 < 2)
      return FUNC_0(0);
    {
      unsigned char VAR_9 = VAR_3[1];
      if (VAR_9 >= 0xa1 && VAR_9 < 0xe0) {
        int VAR_10 = FUNC_3(VAR_1,VAR_2,VAR_3+1,VAR_4-1);
        if (VAR_10 == VAR_0)
          return VAR_0;
        if (VAR_10 != 1) FUNC_1();
        return 2;
      } else
        return VAR_0;
    }
  }

  if (VAR_5 == 0x8f) {
    if (VAR_4 < 2)
      return FUNC_0(0);
    {
      unsigned char VAR_11 = VAR_3[1];
      if (VAR_11 >= 0xa1 && VAR_11 < 0xff) {
        if (VAR_4 < 3)
          return FUNC_0(0);
        if (VAR_11 < 0xf5) {
          unsigned char VAR_12 = VAR_3[2];
          if (VAR_12 >= 0xa1 && VAR_12 < 0xff) {
            unsigned char VAR_13[2];
            int VAR_14;
            VAR_13[0] = VAR_11-0x80; VAR_13[1] = VAR_12-0x80;
            VAR_14 = FUNC_5(VAR_1,VAR_2,VAR_13,2);
            if (VAR_14 == VAR_0)
              return VAR_0;
            if (VAR_14 != 2) FUNC_1();
            return 3;
          } else
            return VAR_0;
        } else {


          unsigned char VAR_15 = VAR_3[2];
          if (VAR_15 >= 0xa1 && VAR_15 < 0xff) {
            *VAR_2 = 0xe3ac + 94*(VAR_11-0xf5) + (VAR_15-0xa1);
            return 3;
          } else
            return VAR_0;
        }
      } else
        return VAR_0;
    }
  }
  return VAR_0;
}
