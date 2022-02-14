
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct pt_regs {int r31; int r30; int r29; int r28; int r27; int r26; int r25; int r24; int r23; int r22; int r21; int r20; int r19; int r18; int r17; int r16; int r15; int r14; int r13; int r12; int r11; int r10; int r9; int r8; int r3; int r2; int r1; int ar_rsc; int b0; int pr; int cr_ifs; int cr_ipsr; int cr_iip; } ;
struct TYPE_4__ {int pmsa_nat_bits; int * pmsa_bank0_gr; int * pmsa_bank1_gr; int const* pmsa_gr; int pmsa_rsc; int pmsa_br0; int pmsa_pr; int pmsa_xfs; int pmsa_xpsr; int pmsa_xip; int pmsa_ifs; int pmsa_ipsr; int pmsa_iip; } ;
typedef TYPE_1__ pal_min_state_area_t ;
struct TYPE_5__ {scalar_t__ bn; scalar_t__ ic; } ;


 int FUNC_0 (int const*,int ,int *,unsigned long*) ;
 TYPE_2__* FUNC_1 (struct pt_regs*) ;

__attribute__((used)) static void
FUNC_2(struct pt_regs *VAR_0, const pal_min_state_area_t *VAR_1,
  unsigned long *VAR_2)
{
 const u64 *VAR_3;




 if (FUNC_1(VAR_0)->ic) {
  VAR_0->cr_iip = VAR_1->pmsa_iip;
  VAR_0->cr_ipsr = VAR_1->pmsa_ipsr;
  VAR_0->cr_ifs = VAR_1->pmsa_ifs;
 } else {
  VAR_0->cr_iip = VAR_1->pmsa_xip;
  VAR_0->cr_ipsr = VAR_1->pmsa_xpsr;
  VAR_0->cr_ifs = VAR_1->pmsa_xfs;
 }
 VAR_0->pr = VAR_1->pmsa_pr;
 VAR_0->b0 = VAR_1->pmsa_br0;
 VAR_0->ar_rsc = VAR_1->pmsa_rsc;
 FUNC_0(&VAR_1->pmsa_gr[1-1], VAR_1->pmsa_nat_bits, &VAR_0->r1, VAR_2);
 FUNC_0(&VAR_1->pmsa_gr[2-1], VAR_1->pmsa_nat_bits, &VAR_0->r2, VAR_2);
 FUNC_0(&VAR_1->pmsa_gr[3-1], VAR_1->pmsa_nat_bits, &VAR_0->r3, VAR_2);
 FUNC_0(&VAR_1->pmsa_gr[8-1], VAR_1->pmsa_nat_bits, &VAR_0->r8, VAR_2);
 FUNC_0(&VAR_1->pmsa_gr[9-1], VAR_1->pmsa_nat_bits, &VAR_0->r9, VAR_2);
 FUNC_0(&VAR_1->pmsa_gr[10-1], VAR_1->pmsa_nat_bits, &VAR_0->r10, VAR_2);
 FUNC_0(&VAR_1->pmsa_gr[11-1], VAR_1->pmsa_nat_bits, &VAR_0->r11, VAR_2);
 FUNC_0(&VAR_1->pmsa_gr[12-1], VAR_1->pmsa_nat_bits, &VAR_0->r12, VAR_2);
 FUNC_0(&VAR_1->pmsa_gr[13-1], VAR_1->pmsa_nat_bits, &VAR_0->r13, VAR_2);
 FUNC_0(&VAR_1->pmsa_gr[14-1], VAR_1->pmsa_nat_bits, &VAR_0->r14, VAR_2);
 FUNC_0(&VAR_1->pmsa_gr[15-1], VAR_1->pmsa_nat_bits, &VAR_0->r15, VAR_2);
 if (FUNC_1(VAR_0)->bn)
  VAR_3 = VAR_1->pmsa_bank1_gr;
 else
  VAR_3 = VAR_1->pmsa_bank0_gr;
 FUNC_0(&VAR_3[16-16], VAR_1->pmsa_nat_bits, &VAR_0->r16, VAR_2);
 FUNC_0(&VAR_3[17-16], VAR_1->pmsa_nat_bits, &VAR_0->r17, VAR_2);
 FUNC_0(&VAR_3[18-16], VAR_1->pmsa_nat_bits, &VAR_0->r18, VAR_2);
 FUNC_0(&VAR_3[19-16], VAR_1->pmsa_nat_bits, &VAR_0->r19, VAR_2);
 FUNC_0(&VAR_3[20-16], VAR_1->pmsa_nat_bits, &VAR_0->r20, VAR_2);
 FUNC_0(&VAR_3[21-16], VAR_1->pmsa_nat_bits, &VAR_0->r21, VAR_2);
 FUNC_0(&VAR_3[22-16], VAR_1->pmsa_nat_bits, &VAR_0->r22, VAR_2);
 FUNC_0(&VAR_3[23-16], VAR_1->pmsa_nat_bits, &VAR_0->r23, VAR_2);
 FUNC_0(&VAR_3[24-16], VAR_1->pmsa_nat_bits, &VAR_0->r24, VAR_2);
 FUNC_0(&VAR_3[25-16], VAR_1->pmsa_nat_bits, &VAR_0->r25, VAR_2);
 FUNC_0(&VAR_3[26-16], VAR_1->pmsa_nat_bits, &VAR_0->r26, VAR_2);
 FUNC_0(&VAR_3[27-16], VAR_1->pmsa_nat_bits, &VAR_0->r27, VAR_2);
 FUNC_0(&VAR_3[28-16], VAR_1->pmsa_nat_bits, &VAR_0->r28, VAR_2);
 FUNC_0(&VAR_3[29-16], VAR_1->pmsa_nat_bits, &VAR_0->r29, VAR_2);
 FUNC_0(&VAR_3[30-16], VAR_1->pmsa_nat_bits, &VAR_0->r30, VAR_2);
 FUNC_0(&VAR_3[31-16], VAR_1->pmsa_nat_bits, &VAR_0->r31, VAR_2);
}
