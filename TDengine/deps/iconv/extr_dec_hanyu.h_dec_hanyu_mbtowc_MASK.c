
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

__attribute__((used)) static int
FUNC_6 (conv_t VAR_1, ucs4_t *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
  unsigned char VAR_5 = *VAR_3;

  if (VAR_5 < 0x80)
    return FUNC_2(VAR_1,VAR_2,VAR_3,VAR_4);



  if (VAR_5 >= 0xa1 && VAR_5 < 0xff) {
    if (VAR_4 < 2)
      return FUNC_0(0);
    {
      unsigned char VAR_6 = VAR_3[1];
      if (VAR_5 == 0xc2 && VAR_6 == 0xcb) {
        if (VAR_4 < 4)
          return FUNC_0(0);
        if (VAR_3[2] >= 0xa1 && VAR_3[2] < 0xff && VAR_3[3] >= 0xa1 && VAR_3[3] < 0xff) {
          unsigned char VAR_7[2];
          int VAR_8;
          VAR_7[0] = VAR_3[2]-0x80; VAR_7[1] = VAR_3[3]-0x80;
          VAR_8 = FUNC_5(VAR_1,VAR_2,VAR_7,2);
          if (VAR_8 != VAR_0) {
            if (VAR_8 != 2) FUNC_1();
            return 4;
          }
        }
      } else if (VAR_6 >= 0xa1 && VAR_6 < 0xff) {
        if (VAR_5 != 0xc2 || VAR_6 < 0xc2) {
          unsigned char VAR_9[2];
          VAR_9[0] = VAR_5-0x80; VAR_9[1] = VAR_6-0x80;
          return FUNC_3(VAR_1,VAR_2,VAR_9,2);
        }
      } else if (VAR_6 >= 0x21 && VAR_6 < 0x7f) {
        unsigned char VAR_10[2];
        VAR_10[0] = VAR_5-0x80; VAR_10[1] = VAR_6;
        return FUNC_4(VAR_1,VAR_2,VAR_10,2);
      }
    }
  }
  return VAR_0;
}
