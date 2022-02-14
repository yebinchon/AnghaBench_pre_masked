
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_22__ {int icount; int pending_level; int sr; int (* irq_callback ) (TYPE_1__*,int) ;scalar_t__ test_irq; scalar_t__ delay; scalar_t__ pc; scalar_t__ ppc; } ;
typedef TYPE_1__ SH2 ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (TYPE_1__*,int) ;
 int FUNC_15 (TYPE_1__*,int) ;
 int FUNC_16 (TYPE_1__*,int) ;
 int FUNC_17 (TYPE_1__*,int,int) ;
 int FUNC_18 (TYPE_1__*,int) ;

int FUNC_19(SH2 *VAR_0, int VAR_1)
{
 UINT32 VAR_2;

 VAR_0->icount = VAR_1;

 if (VAR_0->icount <= 0)
  goto out;

 do
 {
  if (VAR_0->delay)
  {
   VAR_0->ppc = VAR_0->delay;
   VAR_2 = FUNC_0(VAR_0, VAR_0->delay);
   VAR_0->pc -= 2;
  }
  else
  {
   VAR_0->ppc = VAR_0->pc;
   VAR_2 = FUNC_0(VAR_0, VAR_0->pc);
  }

  VAR_0->delay = 0;
  VAR_0->pc += 2;

  switch (VAR_2 & ( 15 << 12))
  {
  case 0<<12: FUNC_1(VAR_0, VAR_2); break;
  case 1<<12: FUNC_2(VAR_0, VAR_2); break;
  case 2<<12: FUNC_3(VAR_0, VAR_2); break;
  case 3<<12: FUNC_4(VAR_0, VAR_2); break;
  case 4<<12: FUNC_5(VAR_0, VAR_2); break;
  case 5<<12: FUNC_6(VAR_0, VAR_2); break;
  case 6<<12: FUNC_7(VAR_0, VAR_2); break;
  case 7<<12: FUNC_8(VAR_0, VAR_2); break;
  case 8<<12: FUNC_9(VAR_0, VAR_2); break;
  case 9<<12: FUNC_10(VAR_0, VAR_2); break;
  case 10<<12: FUNC_11(VAR_0, VAR_2); break;
  case 11<<12: FUNC_12(VAR_0, VAR_2); break;
  case 12<<12: FUNC_13(VAR_0, VAR_2); break;
  case 13<<12: FUNC_14(VAR_0, VAR_2); break;
  case 14<<12: FUNC_15(VAR_0, VAR_2); break;
  default: FUNC_16(VAR_0, VAR_2); break;
  }

  VAR_0->icount--;

  if (VAR_0->test_irq && !VAR_0->delay && VAR_0->pending_level > ((VAR_0->sr >> 4) & 0x0f))
  {
   int VAR_3 = VAR_0->pending_level;
   int VAR_4 = VAR_0->irq_callback(VAR_0, VAR_3);
   FUNC_17(VAR_0, VAR_3, VAR_4);
   VAR_0->test_irq = 0;
  }

 }
 while (VAR_0->icount > 0 || VAR_0->delay);

out:
 return VAR_0->icount;
}
