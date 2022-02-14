
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2 (conv_t VAR_0, ucs4_t *VAR_1, const unsigned char *VAR_2, int VAR_3)
{
  int VAR_4 = 0;
  if (VAR_3 >= 2) {
    ucs4_t VAR_5 = VAR_2[0] + (VAR_2[1] << 8);
    if (VAR_5 >= 0xd800 && VAR_5 < 0xdc00) {
      if (VAR_3 >= 4) {
        ucs4_t VAR_6 = VAR_2[2] + (VAR_2[3] << 8);
        if (!(VAR_6 >= 0xdc00 && VAR_6 < 0xe000))
          goto ilseq;
        *VAR_1 = 0x10000 + ((VAR_5 - 0xd800) << 10) + (VAR_6 - 0xdc00);
        return VAR_4+4;
      }
    } else if (VAR_5 >= 0xdc00 && VAR_5 < 0xe000) {
      goto ilseq;
    } else {
      *VAR_1 = VAR_5;
      return VAR_4+2;
    }
  }
  return FUNC_1(VAR_4);

ilseq:
  return FUNC_0(VAR_4);
}
