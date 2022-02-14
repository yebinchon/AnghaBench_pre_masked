
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,unsigned char const*,int) ;
 int FUNC_3 (int ,int *,unsigned char*,int) ;
 int FUNC_4 (int ,int *,unsigned char*,int) ;
 int FUNC_5 (int ,int *,unsigned char*,int) ;
 int FUNC_6 (int ,int *,unsigned char*,int) ;
 int FUNC_7 (int ,int *,unsigned char*,int) ;
 int FUNC_8 (int ,int *,unsigned char*,int) ;
 int FUNC_9 (int ,int *,unsigned char*,int) ;
 int FUNC_10 (int ,int *,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_11 (conv_t VAR_1, ucs4_t *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
  unsigned char VAR_5 = *VAR_3;

  if (VAR_5 < 0x80)
    return FUNC_2(VAR_1,VAR_2,VAR_3,VAR_4);

  if (VAR_5 >= 0xa1 && VAR_5 < 0xff) {
    if (VAR_4 < 2)
      return FUNC_0(0);
    {
      unsigned char VAR_6 = VAR_3[1];
      if (VAR_6 >= 0xa1 && VAR_6 < 0xff) {
        unsigned char VAR_7[2];
        VAR_7[0] = VAR_5-0x80; VAR_7[1] = VAR_6-0x80;
        return FUNC_4(VAR_1,VAR_2,VAR_7,2);
      } else
        return VAR_0;
    }
  }

  if (VAR_5 == 0x8e) {
    if (VAR_4 < 4)
      return FUNC_0(0);
    {
      unsigned char VAR_8 = VAR_3[1];
      if (VAR_8 >= 0xa1 && VAR_8 <= 0xb0) {
        unsigned char VAR_9 = VAR_3[2];
        unsigned char VAR_10 = VAR_3[3];
        if (VAR_9 >= 0xa1 && VAR_9 < 0xff && VAR_10 >= 0xa1 && VAR_10 < 0xff) {
          unsigned char VAR_11[2];
          int VAR_12;
          VAR_11[0] = VAR_9-0x80; VAR_11[1] = VAR_10-0x80;
          switch (VAR_8-0xa0) {
            case 1: VAR_12 = FUNC_4(VAR_1,VAR_2,VAR_11,2); break;
            case 2: VAR_12 = FUNC_5(VAR_1,VAR_2,VAR_11,2); break;
            case 3: VAR_12 = FUNC_6(VAR_1,VAR_2,VAR_11,2); break;
            case 4: VAR_12 = FUNC_7(VAR_1,VAR_2,VAR_11,2); break;
            case 5: VAR_12 = FUNC_8(VAR_1,VAR_2,VAR_11,2); break;
            case 6: VAR_12 = FUNC_9(VAR_1,VAR_2,VAR_11,2); break;
            case 7: VAR_12 = FUNC_10(VAR_1,VAR_2,VAR_11,2); break;
            case 15: VAR_12 = FUNC_3(VAR_1,VAR_2,VAR_11,2); break;
            default: return VAR_0;
          }
          if (VAR_12 == VAR_0)
            return VAR_0;
          if (VAR_12 != 2) FUNC_1();
          return 4;
        }
      }
    }
  }
  return VAR_0;
}
