
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pdb_cpu {scalar_t__ type; TYPE_1__* context; int name; int id; } ;
struct TYPE_4__ {int* sh2irqi; int* sh2irq_mask; } ;
struct TYPE_3__ {int pc; int sr; int* r; int gbr; int vbr; size_t is_slave; int cycles_done; int cycles_aim; } ;
typedef TYPE_1__ SH2 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (char*,int,int,...) ;

__attribute__((used)) static int FUNC_2(struct pdb_cpu *VAR_4, const char *VAR_5)
{
  FUNC_0(VAR_1, "cpu %d (%s)", VAR_4->id, VAR_4->name);

  if (VAR_4->type == VAR_2) {
    SH2 *VAR_6 = VAR_4->context;
    int VAR_7;
    FUNC_1("PC,SR %08x,     %03x\n", VAR_6->pc, VAR_6->sr & 0x3ff);
    for (VAR_7 = 0; VAR_7 < 16/2; VAR_7++)
      FUNC_1("R%d,%2d %08x,%08x\n", VAR_7, VAR_7 + 8, VAR_6->r[VAR_7], VAR_6->r[VAR_7 + 8]);
    FUNC_1("gb,vb %08x,%08x\n", VAR_6->gbr, VAR_6->vbr);
    FUNC_1("IRQs/mask:        %02x/%02x\n", VAR_3.sh2irqi[VAR_6->is_slave],
      VAR_3.sh2irq_mask[VAR_6->is_slave]);
    FUNC_1("cycles %d/%d (%d)\n", VAR_6->cycles_done, VAR_6->cycles_aim, (signed int)VAR_6->sr >> 12);
  }

  return VAR_0;
}
