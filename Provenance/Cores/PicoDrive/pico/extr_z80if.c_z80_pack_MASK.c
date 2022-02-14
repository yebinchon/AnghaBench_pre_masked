
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_19__ {void* l; void* h; void* e; void* d; void* c; void* b; int f; void* a; } ;
struct TYPE_18__ {void* l; void* h; void* e; void* d; void* c; void* b; int f; void* a; } ;
struct z80_state {int halted; int iff1; int iff2; int irq_pending; int* irq_vector; int im; scalar_t__ pc; scalar_t__ sp; void* iy; void* ix; int r; void* i; TYPE_6__ a; TYPE_5__ m; int magic; } ;
struct TYPE_16__ {void* L; void* H; } ;
struct TYPE_17__ {TYPE_3__ B; } ;
struct TYPE_14__ {void* L; void* H; } ;
struct TYPE_15__ {TYPE_1__ B; } ;
struct TYPE_21__ {void* L; void* H; } ;
struct TYPE_20__ {TYPE_8__ B; } ;
struct TYPE_22__ {TYPE_4__ HL2; TYPE_2__ DE2; TYPE_7__ BC2; } ;
typedef TYPE_9__ cz80_struc ;
struct TYPE_13__ {int Z80IF; int z80irqvector; int Z80_IRQ; int Z80IM; scalar_t__ Z80PC_BASE; scalar_t__ Z80PC; scalar_t__ Z80SP_BASE; scalar_t__ Z80SP; int spare; int Z80F2; int Z80F; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_9__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_9__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_10__ VAR_18 ;
 int FUNC_5 (void*,int ,int ) ;
 int FUNC_6 (int ,char*) ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 void* VAR_27 ;
 void* VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 void* VAR_32 ;
 void* VAR_33 ;
 void* VAR_34 ;
 int VAR_35 ;

void FUNC_7(void *VAR_36)
{
  struct z80_state *VAR_37 = VAR_36;
  FUNC_5(VAR_36, 0, VAR_17);
  FUNC_6(VAR_37->magic, "Z80");
}
