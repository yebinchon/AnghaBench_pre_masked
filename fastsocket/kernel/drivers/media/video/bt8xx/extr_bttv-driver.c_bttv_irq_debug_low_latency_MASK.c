
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int nr; } ;
struct TYPE_4__ {int * cpu; scalar_t__ dma; } ;
struct bttv {TYPE_1__ c; TYPE_2__ main; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,...) ;

__attribute__((used)) static void FUNC_4(struct bttv *VAR_4, u32 VAR_5)
{
 FUNC_3("bttv%d: irq: skipped frame [main=%lx,o_vbi=%lx,o_field=%lx,rc=%lx]\n",
        VAR_4->c.nr,
        (unsigned long)VAR_4->main.dma,
        (unsigned long)FUNC_2(VAR_4->main.cpu[VAR_3+1]),
        (unsigned long)FUNC_2(VAR_4->main.cpu[VAR_2+1]),
        (unsigned long)VAR_5);

 if (0 == (FUNC_0(VAR_0) & VAR_1)) {
  FUNC_3("bttv%d: Oh, there (temporarely?) is no input signal. "
         "Ok, then this is harmless, don't worry ;)\n",
         VAR_4->c.nr);
  return;
 }
 FUNC_3("bttv%d: Uhm. Looks like we have unusual high IRQ latencies.\n",
        VAR_4->c.nr);
 FUNC_3("bttv%d: Lets try to catch the culpit red-handed ...\n",
        VAR_4->c.nr);
 FUNC_1();
}
