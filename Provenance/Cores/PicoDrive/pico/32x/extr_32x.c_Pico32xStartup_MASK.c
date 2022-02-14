
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int pal; scalar_t__ ncart_in; } ;
struct TYPE_11__ {TYPE_1__ m; } ;
struct TYPE_10__ {int * vdp_regs; int * sh2_regs; } ;
struct TYPE_9__ {void* irq_callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_7__ VAR_6 ;
 TYPE_6__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 TYPE_2__ VAR_9 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_10 ;
 int FUNC_5 (TYPE_2__*,int,TYPE_2__*) ;
 void* VAR_11 ;
 TYPE_2__ VAR_12 ;

void FUNC_6(void)
{
  FUNC_1(VAR_1|VAR_0, "32X startup");


  VAR_8 |= VAR_5;
  FUNC_5(&VAR_9, 0, &VAR_12);
  VAR_9 = VAR_11;
  FUNC_5(&VAR_12, 1, &VAR_9);
  VAR_12 = VAR_11;

  FUNC_0();
  FUNC_3();
  FUNC_4();

  VAR_7.sh2_regs[0] = VAR_2;
  if (VAR_6.m.ncart_in)
    VAR_7.sh2_regs[0] |= VAR_3;

  if (!VAR_6.m.pal)
    VAR_7.vdp_regs[0] |= VAR_4;

  VAR_10 = -1;

  FUNC_2();
}
