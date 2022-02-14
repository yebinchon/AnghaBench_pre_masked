
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int vector; int format; int pc; } ;
struct TYPE_4__ {unsigned short ssw; int baddr; int daddr; } ;
struct TYPE_5__ {TYPE_1__ fmtb; } ;
struct frame {TYPE_3__ ptregs; TYPE_2__ un; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int VAR_7 ;
 int FUNC_2 (char*,TYPE_3__*,int ) ;
 int FUNC_3 (char*,...) ;
 int * VAR_8 ;
 int FUNC_4 (int ) ;
 int * VAR_9 ;

void FUNC_5 (struct frame *VAR_10)
{
 FUNC_1();
 if (VAR_10->ptregs.vector < 4 * FUNC_0(VAR_9))
  FUNC_3 ("*** %s ***   FORMAT=%X\n",
   VAR_9[(VAR_10->ptregs.vector) >> 2],
   VAR_10->ptregs.format);
 else
  FUNC_3 ("*** Exception %d ***   FORMAT=%X\n",
   (VAR_10->ptregs.vector) >> 2,
   VAR_10->ptregs.format);
 if (VAR_10->ptregs.vector >> 2 == VAR_6 && VAR_0) {
  unsigned short VAR_11 = VAR_10->un.fmtb.ssw;

  FUNC_3 ("SSW=%#06x  ", VAR_11);

  if (VAR_11 & VAR_4)
   FUNC_3 ("Pipe stage C instruction fault at %#010lx\n",
    (VAR_10->ptregs.format) == 0xA ?
    VAR_10->ptregs.pc + 2 : VAR_10->un.fmtb.baddr - 2);
  if (VAR_11 & VAR_3)
   FUNC_3 ("Pipe stage B instruction fault at %#010lx\n",
    (VAR_10->ptregs.format) == 0xA ?
    VAR_10->ptregs.pc + 4 : VAR_10->un.fmtb.baddr);
  if (VAR_11 & VAR_1)
   FUNC_3 ("Data %s fault at %#010lx in %s (pc=%#lx)\n",
    VAR_11 & VAR_5 ? "read" : "write",
    VAR_10->un.fmtb.daddr, VAR_8[VAR_11 & VAR_2],
    VAR_10->ptregs.pc);
 }
 FUNC_3 ("Current process id is %d\n", FUNC_4(VAR_7));
 FUNC_2("BAD KERNEL TRAP", &VAR_10->ptregs, 0);
}
