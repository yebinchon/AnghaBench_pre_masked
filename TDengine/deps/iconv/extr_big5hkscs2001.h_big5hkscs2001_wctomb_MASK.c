
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ucs4_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_6__ {unsigned char ostate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int,int) ;
 int FUNC_2 (TYPE_1__*,unsigned char*,int,int) ;
 int FUNC_3 (TYPE_1__*,unsigned char*,int,int) ;

__attribute__((used)) static int
FUNC_4 (conv_t VAR_2, unsigned char *VAR_3, ucs4_t VAR_4, int VAR_5)
{
  int VAR_6 = 0;
  unsigned char VAR_7 = VAR_2->ostate;

  if (VAR_7) {

    if (VAR_4 == 0x0304 || VAR_4 == 0x030c) {

      if (VAR_5 >= 2) {
        VAR_3[0] = 0x88;
        VAR_3[1] = VAR_7 + ((VAR_4 & 24) >> 2) - 4;
        VAR_2->ostate = 0;
        return 2;
      } else
        return VAR_1;
    }


    if (VAR_5 < 2)
      return VAR_1;
    VAR_3[0] = 0x88;
    VAR_3[1] = VAR_7;
    VAR_3 += 2;
    VAR_6 = 2;
  }


  if (VAR_4 < 0x0080) {

    if (VAR_5 > VAR_6) {
      VAR_3[0] = (unsigned char) VAR_4;
      VAR_2->ostate = 0;
      return VAR_6+1;
    } else
      return VAR_1;
  } else {
    unsigned char VAR_8[2];
    int VAR_9;


    VAR_9 = FUNC_1(VAR_2,VAR_8,VAR_4,2);
    if (VAR_9 != VAR_0) {
      if (VAR_9 != 2) FUNC_0();
      if (!((VAR_8[0] == 0xc6 && VAR_8[1] >= 0xa1) || VAR_8[0] == 0xc7)) {
        if (VAR_5 >= VAR_6+2) {
          VAR_3[0] = VAR_8[0];
          VAR_3[1] = VAR_8[1];
          VAR_2->ostate = 0;
          return VAR_6+2;
        } else
          return VAR_1;
      }
    }
    VAR_9 = FUNC_2(VAR_2,VAR_8,VAR_4,2);
    if (VAR_9 != VAR_0) {
      if (VAR_9 != 2) FUNC_0();
      if ((VAR_4 & ~0x0020) == 0x00ca) {


        if (!(VAR_8[0] == 0x88 && (VAR_8[1] == 0x66 || VAR_8[1] == 0xa7))) FUNC_0();
        VAR_2->ostate = VAR_8[1];
        return VAR_6+0;
      }
      if (VAR_5 >= VAR_6+2) {
        VAR_3[0] = VAR_8[0];
        VAR_3[1] = VAR_8[1];
        VAR_2->ostate = 0;
        return VAR_6+2;
      } else
        return VAR_1;
    }
    VAR_9 = FUNC_3(VAR_2,VAR_8,VAR_4,2);
    if (VAR_9 != VAR_0) {
      if (VAR_9 != 2) FUNC_0();
      if (VAR_5 >= VAR_6+2) {
        VAR_3[0] = VAR_8[0];
        VAR_3[1] = VAR_8[1];
        VAR_2->ostate = 0;
        return VAR_6+2;
      } else
        return VAR_1;
    }
    return VAR_0;
  }
}
