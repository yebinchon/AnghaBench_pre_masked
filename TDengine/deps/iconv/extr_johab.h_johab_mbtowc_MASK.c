
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__*,unsigned char const*,int) ;
 int FUNC_2 (int ,scalar_t__*,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_3 (conv_t VAR_1, ucs4_t *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
  unsigned char VAR_5 = *VAR_3;
  if (VAR_5 < 0x80) {
    if (VAR_5 == 0x5c)
      *VAR_2 = (ucs4_t) 0x20a9;
    else
      *VAR_2 = (ucs4_t) VAR_5;
    return 1;
  } else if (VAR_5 < 0xd8) {
    return FUNC_1(VAR_1,VAR_2,VAR_3,VAR_4);
  } else {
    unsigned char VAR_6, VAR_7;
    VAR_6 = VAR_5;
    if ((VAR_6 >= 0xd9 && VAR_6 <= 0xde) || (VAR_6 >= 0xe0 && VAR_6 <= 0xf9)) {
      if (VAR_4 < 2)
        return FUNC_0(0);
      VAR_7 = VAR_3[1];
      if ((VAR_7 >= 0x31 && VAR_7 <= 0x7e) || (VAR_7 >= 0x91 && VAR_7 <= 0xfe)) {




        if (!(VAR_6 == 0xda && (VAR_7 >= 0xa1 && VAR_7 <= 0xd3))) {
          unsigned char VAR_8 = (VAR_6 < 0xe0 ? 2*(VAR_6-0xd9) : 2*VAR_6-0x197);
          unsigned char VAR_9 = (VAR_7 < 0x91 ? VAR_7-0x31 : VAR_7-0x43);
          unsigned char VAR_10[2];
          VAR_10[0] = VAR_8 + (VAR_9 < 0x5e ? 0 : 1) + 0x21;
          VAR_10[1] = (VAR_9 < 0x5e ? VAR_9 : VAR_9-0x5e) + 0x21;
          return FUNC_2(VAR_1,VAR_2,VAR_10,2);
        }
      }
    }
    return VAR_0;
  }
}
