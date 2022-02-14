
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,unsigned char const*,int) ;
 int FUNC_2 (int ,int *,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_3 (conv_t VAR_1, ucs4_t *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
  unsigned char VAR_5 = *VAR_3;

  if (VAR_5 < 0x80)
    return FUNC_1(VAR_1,VAR_2,VAR_3,VAR_4);

  if (VAR_5 >= 0xa1 && VAR_5 < 0xf5) {
    if (VAR_4 < 2)
      return FUNC_0(0);
    {
      unsigned char VAR_6 = VAR_3[1];
      if (VAR_6 >= 0xa1 && VAR_6 < 0xff) {
        unsigned char VAR_7[2];
        VAR_7[0] = VAR_5-0x80; VAR_7[1] = VAR_6-0x80;
        return FUNC_2(VAR_1,VAR_2,VAR_7,2);
      }
    }
  }
  return VAR_0;
}
