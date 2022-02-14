
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned char ucs4_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_6__ {unsigned char istate; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,unsigned char const*,int) ;
 int FUNC_2 (TYPE_1__*,unsigned char*,unsigned char const*,int) ;
 int FUNC_3 (TYPE_1__*,unsigned char*,unsigned char const*,int) ;

__attribute__((used)) static int
FUNC_4 (conv_t VAR_1, ucs4_t *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
  ucs4_t VAR_5 = VAR_1->istate;
  if (VAR_5) {

    VAR_1->istate = 0;
    *VAR_2 = VAR_5;
    return 0;
  } else {
    unsigned char VAR_6 = *VAR_3;

    if (VAR_6 < 0x80)
      return FUNC_1(VAR_1,VAR_2,VAR_3,VAR_4);

    if (VAR_6 >= 0xa1 && VAR_6 < 0xff) {
      if (VAR_4 < 2)
        return FUNC_0(0);
      {
        unsigned char VAR_7 = VAR_3[1];
        if ((VAR_7 >= 0x40 && VAR_7 < 0x7f) || (VAR_7 >= 0xa1 && VAR_7 < 0xff)) {
          if (!((VAR_6 == 0xc6 && VAR_7 >= 0xa1) || VAR_6 == 0xc7)) {
            int VAR_8 = FUNC_2(VAR_1,VAR_2,VAR_3,2);
            if (VAR_8 != VAR_0)
              return VAR_8;
          }
        }
      }
    }
    {
      int VAR_9 = FUNC_3(VAR_1,VAR_2,VAR_3,VAR_4);
      if (VAR_9 != VAR_0)
        return VAR_9;
    }
    if (VAR_6 == 0x88) {
      if (VAR_4 < 2)
        return FUNC_0(0);
      {
        unsigned char VAR_10 = VAR_3[1];
        if (VAR_10 == 0x62 || VAR_10 == 0x64 || VAR_10 == 0xa3 || VAR_10 == 0xa5) {

          ucs4_t VAR_11 = ((VAR_10 >> 3) << 2) + 0x009a;
          ucs4_t VAR_12 = ((VAR_10 & 6) << 2) + 0x02fc;


          *VAR_2 = VAR_11;
          VAR_1->istate = VAR_12;
          return 2;
        }
      }
    }
    return VAR_0;
  }
}
