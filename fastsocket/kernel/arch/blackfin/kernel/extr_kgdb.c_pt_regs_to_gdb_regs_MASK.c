
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long r0; unsigned long r1; unsigned long r2; unsigned long r3; unsigned long r4; unsigned long r5; unsigned long r6; unsigned long r7; unsigned long p0; unsigned long p1; unsigned long p2; unsigned long p3; unsigned long p4; unsigned long p5; unsigned long reserved; unsigned long fp; unsigned long i0; unsigned long i1; unsigned long i2; unsigned long i3; unsigned long m0; unsigned long m1; unsigned long m2; unsigned long m3; unsigned long b0; unsigned long b1; unsigned long b2; unsigned long b3; unsigned long l0; unsigned long l1; unsigned long l2; unsigned long l3; unsigned long a0x; unsigned long a0w; unsigned long a1x; unsigned long a1w; unsigned long astat; unsigned long rets; unsigned long lc0; unsigned long lt0; unsigned long lb0; unsigned long lc1; unsigned long lt1; unsigned long lb1; unsigned long usp; unsigned long seqstat; unsigned long syscfg; unsigned long pc; unsigned long retx; unsigned long retn; unsigned long rete; unsigned long ipend; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 size_t VAR_37 ;
 size_t VAR_38 ;
 size_t VAR_39 ;
 size_t VAR_40 ;
 size_t VAR_41 ;
 size_t VAR_42 ;
 size_t VAR_43 ;
 size_t VAR_44 ;
 size_t VAR_45 ;
 size_t VAR_46 ;
 size_t VAR_47 ;
 size_t VAR_48 ;
 size_t VAR_49 ;
 size_t VAR_50 ;
 size_t VAR_51 ;
 size_t VAR_52 ;
 size_t VAR_53 ;
 size_t VAR_54 ;
 size_t VAR_55 ;
 size_t VAR_56 ;
 size_t VAR_57 ;
 size_t VAR_58 ;

void FUNC_0(unsigned long *VAR_59, struct pt_regs *VAR_60)
{
 VAR_59[VAR_42] = VAR_60->r0;
 VAR_59[VAR_43] = VAR_60->r1;
 VAR_59[VAR_44] = VAR_60->r2;
 VAR_59[VAR_45] = VAR_60->r3;
 VAR_59[VAR_46] = VAR_60->r4;
 VAR_59[VAR_47] = VAR_60->r5;
 VAR_59[VAR_48] = VAR_60->r6;
 VAR_59[VAR_49] = VAR_60->r7;
 VAR_59[VAR_35] = VAR_60->p0;
 VAR_59[VAR_36] = VAR_60->p1;
 VAR_59[VAR_37] = VAR_60->p2;
 VAR_59[VAR_38] = VAR_60->p3;
 VAR_59[VAR_39] = VAR_60->p4;
 VAR_59[VAR_40] = VAR_60->p5;
 VAR_59[VAR_56] = VAR_60->reserved;
 VAR_59[VAR_15] = VAR_60->fp;
 VAR_59[VAR_16] = VAR_60->i0;
 VAR_59[VAR_17] = VAR_60->i1;
 VAR_59[VAR_18] = VAR_60->i2;
 VAR_59[VAR_19] = VAR_60->i3;
 VAR_59[VAR_31] = VAR_60->m0;
 VAR_59[VAR_32] = VAR_60->m1;
 VAR_59[VAR_33] = VAR_60->m2;
 VAR_59[VAR_34] = VAR_60->m3;
 VAR_59[VAR_5] = VAR_60->b0;
 VAR_59[VAR_6] = VAR_60->b1;
 VAR_59[VAR_7] = VAR_60->b2;
 VAR_59[VAR_8] = VAR_60->b3;
 VAR_59[VAR_21] = VAR_60->l0;
 VAR_59[VAR_22] = VAR_60->l1;
 VAR_59[VAR_23] = VAR_60->l2;
 VAR_59[VAR_24] = VAR_60->l3;
 VAR_59[VAR_1] = VAR_60->a0x;
 VAR_59[VAR_0] = VAR_60->a0w;
 VAR_59[VAR_3] = VAR_60->a1x;
 VAR_59[VAR_2] = VAR_60->a1w;
 VAR_59[VAR_4] = VAR_60->astat;
 VAR_59[VAR_53] = VAR_60->rets;
 VAR_59[VAR_27] = VAR_60->lc0;
 VAR_59[VAR_29] = VAR_60->lt0;
 VAR_59[VAR_25] = VAR_60->lb0;
 VAR_59[VAR_28] = VAR_60->lc1;
 VAR_59[VAR_30] = VAR_60->lt1;
 VAR_59[VAR_26] = VAR_60->lb1;
 VAR_59[VAR_10] = 0;
 VAR_59[VAR_11] = 0;
 VAR_59[VAR_58] = VAR_60->usp;
 VAR_59[VAR_55] = VAR_60->seqstat;
 VAR_59[VAR_57] = VAR_60->syscfg;
 VAR_59[VAR_51] = VAR_60->pc;
 VAR_59[VAR_54] = VAR_60->retx;
 VAR_59[VAR_52] = VAR_60->retn;
 VAR_59[VAR_50] = VAR_60->rete;
 VAR_59[VAR_41] = VAR_60->pc;
 VAR_59[VAR_9] = 0;
 VAR_59[VAR_12] = 0;
 VAR_59[VAR_13] = 0;
 VAR_59[VAR_14] = 0;
 VAR_59[VAR_20] = VAR_60->ipend;
}
