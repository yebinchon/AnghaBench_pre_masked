
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct kvm_vcpu {int vcpu_id; } ;
struct TYPE_15__ {int * bits; } ;
struct TYPE_16__ {TYPE_11__ u; } ;
struct TYPE_26__ {int * bits; } ;
struct TYPE_14__ {TYPE_9__ u; } ;
struct TYPE_24__ {int * bits; } ;
struct TYPE_25__ {TYPE_7__ u; } ;
struct TYPE_22__ {int * bits; } ;
struct TYPE_23__ {TYPE_5__ u; } ;
struct TYPE_20__ {int * bits; } ;
struct TYPE_21__ {TYPE_3__ u; } ;
struct TYPE_18__ {int * bits; } ;
struct TYPE_19__ {TYPE_1__ u; } ;
struct kvm_pt_regs {unsigned long cr_iip; unsigned long ar_rsc; unsigned long pr; unsigned long ar_fpsr; unsigned long b7; unsigned long r3; unsigned long r10; unsigned long r13; unsigned long r16; unsigned long r19; unsigned long r22; unsigned long r25; unsigned long r28; unsigned long r31; int r30; int r29; int r27; int r26; int r24; int r23; int r21; int r20; int r18; int r17; int r15; int r14; int r12; int r11; int r9; int r8; int r2; int r1; TYPE_12__ f11; TYPE_10__ f10; TYPE_8__ f9; TYPE_6__ f8; TYPE_4__ f7; TYPE_2__ f6; int b6; int b0; int ar_ssd; int ar_csd; int ar_ccv; int loadrs; int ar_bspstore; int ar_rnat; int ar_pfs; int ar_unat; int cr_ifs; int cr_ipsr; } ;
struct TYPE_17__ {unsigned long ri; } ;


 struct kvm_vcpu* VAR_0 ;
 TYPE_13__* FUNC_0 (struct kvm_pt_regs*) ;
 int FUNC_1 (char*,struct kvm_vcpu*,int ,...) ;

__attribute__((used)) static void FUNC_2(struct kvm_pt_regs *VAR_1)
{
 unsigned long VAR_2 = VAR_1->cr_iip + FUNC_0(VAR_1)->ri;

 struct kvm_vcpu *VAR_3 = VAR_0;
 if (VAR_3 != ((void*)0))
  FUNC_1("vcpu 0x%p vcpu %d\n",
         VAR_3, VAR_3->vcpu_id);

 FUNC_1("psr : %016lx ifs : %016lx ip  : [<%016lx>]\n",
        VAR_1->cr_ipsr, VAR_1->cr_ifs, VAR_2);

 FUNC_1("unat: %016lx pfs : %016lx rsc : %016lx\n",
        VAR_1->ar_unat, VAR_1->ar_pfs, VAR_1->ar_rsc);
 FUNC_1("rnat: %016lx bspstore: %016lx pr  : %016lx\n",
        VAR_1->ar_rnat, VAR_1->ar_bspstore, VAR_1->pr);
 FUNC_1("ldrs: %016lx ccv : %016lx fpsr: %016lx\n",
        VAR_1->loadrs, VAR_1->ar_ccv, VAR_1->ar_fpsr);
 FUNC_1("csd : %016lx ssd : %016lx\n", VAR_1->ar_csd, VAR_1->ar_ssd);
 FUNC_1("b0  : %016lx b6  : %016lx b7  : %016lx\n", VAR_1->b0,
       VAR_1->b6, VAR_1->b7);
 FUNC_1("f6  : %05lx%016lx f7  : %05lx%016lx\n",
        VAR_1->f6.u.bits[1], VAR_1->f6.u.bits[0],
        VAR_1->f7.u.bits[1], VAR_1->f7.u.bits[0]);
 FUNC_1("f8  : %05lx%016lx f9  : %05lx%016lx\n",
        VAR_1->f8.u.bits[1], VAR_1->f8.u.bits[0],
        VAR_1->f9.u.bits[1], VAR_1->f9.u.bits[0]);
 FUNC_1("f10 : %05lx%016lx f11 : %05lx%016lx\n",
        VAR_1->f10.u.bits[1], VAR_1->f10.u.bits[0],
        VAR_1->f11.u.bits[1], VAR_1->f11.u.bits[0]);

 FUNC_1("r1  : %016lx r2  : %016lx r3  : %016lx\n", VAR_1->r1,
       VAR_1->r2, VAR_1->r3);
 FUNC_1("r8  : %016lx r9  : %016lx r10 : %016lx\n", VAR_1->r8,
       VAR_1->r9, VAR_1->r10);
 FUNC_1("r11 : %016lx r12 : %016lx r13 : %016lx\n", VAR_1->r11,
       VAR_1->r12, VAR_1->r13);
 FUNC_1("r14 : %016lx r15 : %016lx r16 : %016lx\n", VAR_1->r14,
       VAR_1->r15, VAR_1->r16);
 FUNC_1("r17 : %016lx r18 : %016lx r19 : %016lx\n", VAR_1->r17,
       VAR_1->r18, VAR_1->r19);
 FUNC_1("r20 : %016lx r21 : %016lx r22 : %016lx\n", VAR_1->r20,
       VAR_1->r21, VAR_1->r22);
 FUNC_1("r23 : %016lx r24 : %016lx r25 : %016lx\n", VAR_1->r23,
       VAR_1->r24, VAR_1->r25);
 FUNC_1("r26 : %016lx r27 : %016lx r28 : %016lx\n", VAR_1->r26,
       VAR_1->r27, VAR_1->r28);
 FUNC_1("r29 : %016lx r30 : %016lx r31 : %016lx\n", VAR_1->r29,
       VAR_1->r30, VAR_1->r31);

}
