
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
 int FUNC_3 (int ,int *,unsigned char const*,int) ;
 int FUNC_4 (int ,int *,unsigned char const*,int) ;

__attribute__((used)) static int
FUNC_5 (conv_t VAR_1, ucs4_t *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
  int VAR_5;


  if (VAR_3[0] == 0x28) {
    if (VAR_4 >= 2) {
      unsigned char VAR_6 = VAR_3[1];
      if (VAR_6 >= 0x21 && VAR_6 <= 0x40) {
        unsigned char VAR_7[2];
        VAR_7[0] = 0x2b;
        VAR_7[1] = VAR_6;
        VAR_5 = FUNC_4(VAR_1,VAR_2,VAR_7,2);
        if (VAR_5 != VAR_0)
          return VAR_5;
      }
    }
  }

  VAR_5 = FUNC_2(VAR_1,VAR_2,VAR_3,VAR_4);
  if (VAR_5 != VAR_0)
    return VAR_5;

  if (VAR_3[0] == 0x2a) {
    if (VAR_4 >= 2) {
      unsigned char VAR_8 = VAR_3[1];
      if (VAR_8 >= 0x21 && VAR_8 < 0x7f) {
        int VAR_9 = FUNC_3(VAR_1,VAR_2,VAR_3+1,1);
        if (VAR_9 != 1) FUNC_1();
        return 2;
      }
      return VAR_0;
    }
    return FUNC_0(0);
  }

  VAR_5 = FUNC_4(VAR_1,VAR_2,VAR_3,VAR_4);
  return VAR_5;
}
