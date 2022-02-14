
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uInt ;
struct TYPE_3__ {int exop; int bits; int base; } ;
typedef TYPE_1__ inflate_huft ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;

void FUNC_5(uInt VAR_1, inflate_huft *VAR_2)
{
  int VAR_3, VAR_4;

  VAR_3 = 0;
  while (1)
  {
    VAR_4 = VAR_2[VAR_3].exop;
    if (VAR_4 && (VAR_4 & (16+64)) == 0)
    {
      FUNC_1(VAR_0, "maketree: cannot initialize sub-tables!\n");
      FUNC_0(1);
    }
    if (VAR_3 % 4 == 0)
      FUNC_2("\n   ");
    FUNC_2(" {{{%u,%u}},%u}", VAR_2[VAR_3].exop, VAR_2[VAR_3].bits, VAR_2[VAR_3].base);
    if (++VAR_3 == (1<<VAR_1))
      break;
    FUNC_3(',');
  }
  FUNC_4("");
}
