
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int state; unsigned int m68krcycles_done; struct TYPE_7__* other_sh2; } ;
typedef TYPE_1__ SH2 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,char*,unsigned int,int) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;

void FUNC_4(SH2 *VAR_4, unsigned int VAR_5)
{
  SH2 *VAR_6 = VAR_4->other_sh2;
  int VAR_7;
  int VAR_8;

  if (VAR_6->state & VAR_2)
    return;

  VAR_8 = VAR_5 - VAR_6->m68krcycles_done;
  if (VAR_8 < 200)
    return;

  if (VAR_6->state & VAR_1) {
    VAR_6->m68krcycles_done = VAR_5;
    return;
  }

  FUNC_0(VAR_6, VAR_0, "sync to %u %d",
    VAR_5, VAR_8);

  FUNC_1(VAR_6, VAR_8);


  if (VAR_3) {
    VAR_7 = VAR_3 - VAR_5;
    VAR_7 *= 3;
    if (FUNC_2(VAR_4) > VAR_7) {
      if (VAR_7 < 1)
        VAR_7 = 1;
      FUNC_3(VAR_4, VAR_7);
    }
  }
}
