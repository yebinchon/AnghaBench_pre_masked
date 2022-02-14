
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ off; scalar_t__ column; int row; } ;
struct TYPE_5__ {int* byte; } ;
struct nandsim {TYPE_2__ regs; TYPE_1__ buf; } ;
struct TYPE_7__ {int failed; int corrected; } ;
struct TYPE_8__ {TYPE_3__ ecc_stats; } ;


 int FUNC_0 (char*,int,int ,scalar_t__,int ,int ) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_1 () ;

void FUNC_2(struct nandsim *VAR_2, int VAR_3)
{
 if (VAR_0 && FUNC_1() < (1 << 22)) {
  int VAR_4 = 1;
  if (VAR_0 > 1)
   VAR_4 = (FUNC_1() % (int) VAR_0) + 1;
  while (VAR_4--) {
   int VAR_5 = FUNC_1() % (VAR_3 * 8);
   VAR_2->buf.byte[VAR_5 / 8] ^= (1 << (VAR_5 % 8));
   FUNC_0("read_page: flipping bit %d in page %d "
    "reading from %d ecc: corrected=%u failed=%u\n",
    VAR_5, VAR_2->regs.row, VAR_2->regs.column + VAR_2->regs.off,
    VAR_1->ecc_stats.corrected, VAR_1->ecc_stats.failed);
  }
 }
}
