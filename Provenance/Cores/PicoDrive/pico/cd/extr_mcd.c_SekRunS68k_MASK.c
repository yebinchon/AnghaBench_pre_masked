
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int cycles; } ;
struct TYPE_5__ {scalar_t__ s68k_poll_a; } ;
struct TYPE_6__ {TYPE_1__ m; } ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,int ) ;
 int * VAR_8 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_9)
{
  int VAR_10;

  VAR_6 = VAR_9;
  if ((VAR_10 = VAR_6 - VAR_7) <= 0)
    return;

  if (FUNC_1())
    VAR_5->m.s68k_poll_a = 0;

  VAR_7 += VAR_10;
}
