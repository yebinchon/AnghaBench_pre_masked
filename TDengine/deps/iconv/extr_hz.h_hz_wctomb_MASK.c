
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ucs4_t ;
typedef int state_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_5__ {int ostate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int ,int) ;
 int FUNC_2 (TYPE_1__*,unsigned char*,int ,int) ;

__attribute__((used)) static int
FUNC_3 (conv_t VAR_2, unsigned char *VAR_3, ucs4_t VAR_4, int VAR_5)
{
  state_t VAR_6 = VAR_2->ostate;
  unsigned char VAR_7[2];
  int VAR_8;


  VAR_8 = FUNC_1(VAR_2,VAR_7,VAR_4,1);
  if (VAR_8 != VAR_0) {
    if (VAR_8 != 1) FUNC_0();
    if (VAR_7[0] < 0x80) {
      int VAR_9 = (VAR_6 ? 3 : 1);
      if (VAR_5 < VAR_9)
        return VAR_1;
      if (VAR_6) {
        VAR_3[0] = '~';
        VAR_3[1] = '}';
        VAR_3 += 2;
        VAR_6 = 0;
      }
      VAR_3[0] = VAR_7[0];
      VAR_2->ostate = VAR_6;
      return VAR_9;
    }
  }


  VAR_8 = FUNC_2(VAR_2,VAR_7,VAR_4,2);
  if (VAR_8 != VAR_0) {
    if (VAR_8 != 2) FUNC_0();
    if (VAR_7[0] < 0x80 && VAR_7[1] < 0x80) {
      int VAR_10 = (VAR_6 ? 2 : 4);
      if (VAR_5 < VAR_10)
        return VAR_1;
      if (!VAR_6) {
        VAR_3[0] = '~';
        VAR_3[1] = '{';
        VAR_3 += 2;
        VAR_6 = 1;
      }
      VAR_3[0] = VAR_7[0];
      VAR_3[1] = VAR_7[1];
      VAR_2->ostate = VAR_6;
      return VAR_10;
    }
  }

  return VAR_0;
}
