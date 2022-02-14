
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned long u16 ;
struct pt_regs {unsigned long tstate; } ;
struct TYPE_12__ {unsigned long left; unsigned long right; } ;
struct TYPE_11__ {unsigned long left; unsigned long right; } ;
struct TYPE_10__ {unsigned long left; unsigned long right; } ;
struct TYPE_9__ {unsigned long left; unsigned long right; } ;
struct TYPE_8__ {unsigned long left; unsigned long right; } ;
struct TYPE_7__ {unsigned long left; unsigned long right; } ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 TYPE_6__* VAR_3 ;
 TYPE_5__* VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 TYPE_2__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 unsigned long FUNC_3 (int ,struct pt_regs*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct pt_regs*,unsigned long,int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct pt_regs *VAR_9, unsigned int VAR_10, unsigned int VAR_11)
{
 unsigned long VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 u16 VAR_17, VAR_18;

 FUNC_4(FUNC_1(VAR_10), FUNC_2(VAR_10), FUNC_0(VAR_10), 0);
 VAR_12 = VAR_13 = FUNC_3(FUNC_1(VAR_10), VAR_9);
 VAR_14 = VAR_15 = FUNC_3(FUNC_2(VAR_10), VAR_9);

 if (FUNC_6(VAR_0)) {
  VAR_13 = VAR_13 & 0xffffffff;
  VAR_15 = VAR_15 & 0xffffffff;
 }
 switch (VAR_11) {
 default:
 case 128:
 case 129:
  VAR_17 = VAR_7[VAR_13 & 0x7].left;
  VAR_18 = VAR_7[VAR_15 & 0x7].right;
  break;
 case 130:
 case 131:
  VAR_17 = VAR_8[VAR_13 & 0x7].left;
  VAR_18 = VAR_8[VAR_15 & 0x7].right;
  break;

 case 136:
 case 137:
  VAR_17 = VAR_3[(VAR_13 >> 1) & 0x3].left;
  VAR_18 = VAR_3[(VAR_15 >> 1) & 0x3].right;
  break;

 case 138:
 case 139:
  VAR_17 = VAR_4[(VAR_13 >> 1) & 0x3].left;
  VAR_18 = VAR_4[(VAR_15 >> 1) & 0x3].right;
  break;

 case 132:
 case 133:
  VAR_17 = VAR_5[(VAR_13 >> 2) & 0x1].left;
  VAR_18 = VAR_5[(VAR_15 >> 2) & 0x1].right;
  break;

 case 134:
 case 135:
  VAR_17 = VAR_6[(VAR_13 >> 2) & 0x1].left;
  VAR_18 = VAR_6[(VAR_15 >> 2) & 0x1].right;
  break;
 };

 if ((VAR_13 & ~0x7UL) == (VAR_15 & ~0x7UL))
  VAR_16 = VAR_18 & VAR_17;
 else
  VAR_16 = VAR_17;

 FUNC_5(VAR_9, VAR_16, FUNC_0(VAR_10));

 switch (VAR_11) {
 case 128:
 case 130:
 case 136:
 case 138:
 case 132:
 case 134: {
  unsigned long VAR_19, VAR_20;

  __asm__ __volatile__("subcc	%1, %2, %%g0\n\t"
         "rd	%%ccr, %0"
         : "=r" (VAR_19)
         : "r" (VAR_12), "r" (VAR_14)
         : "cc");
  VAR_20 = VAR_9->tstate & ~(VAR_2 | VAR_1);
  VAR_9->tstate = VAR_20 | (VAR_19 << 32UL);
 }
 };
}
