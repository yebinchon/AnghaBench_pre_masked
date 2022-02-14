
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int m68krcycles_done; int state; int pc; } ;
typedef TYPE_1__ SH2 ;


 int FUNC_0 (TYPE_1__,int) ;
 scalar_t__ FUNC_1 (TYPE_1__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,int ,char*,int ,int,...) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int,int) ;

__attribute__((used)) static inline void FUNC_5(SH2 *VAR_6, int VAR_7)
{
  int VAR_8, VAR_9;

  FUNC_3(VAR_6, VAR_2);
  VAR_6->state |= VAR_5;
  VAR_8 = FUNC_0(*VAR_6, VAR_7);
  FUNC_2(VAR_6, VAR_0, "+run %u %d @%08x",
    VAR_6->m68krcycles_done, VAR_8, VAR_6->pc);

  VAR_9 = FUNC_4(VAR_6, VAR_8, VAR_4 & VAR_3);

  VAR_6->m68krcycles_done += FUNC_1(*VAR_6, VAR_9);
  VAR_6->state &= ~VAR_5;
  FUNC_3(VAR_6, VAR_1);
  FUNC_2(VAR_6, VAR_0, "-run %u %d",
    VAR_6->m68krcycles_done, VAR_9);
}
