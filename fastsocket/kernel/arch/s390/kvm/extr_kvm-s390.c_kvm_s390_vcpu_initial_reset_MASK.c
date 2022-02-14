
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ fpc; } ;
struct TYPE_8__ {TYPE_3__* sie_block; TYPE_2__ guest_fpregs; } ;
struct kvm_vcpu {TYPE_4__ arch; } ;
typedef int __u64 ;
struct TYPE_5__ {unsigned long mask; unsigned long addr; } ;
struct TYPE_7__ {unsigned long prefix; int ihcpu; unsigned long cputm; unsigned long ckc; int* gcr; int gbea; scalar_t__ todpr; TYPE_1__ gpsw; } ;


 int FUNC_0 (int*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_0)
{

 VAR_0->arch.sie_block->gpsw.mask = 0UL;
 VAR_0->arch.sie_block->gpsw.addr = 0UL;
 VAR_0->arch.sie_block->prefix = 0UL;
 VAR_0->arch.sie_block->ihcpu = 0xffff;
 VAR_0->arch.sie_block->cputm = 0UL;
 VAR_0->arch.sie_block->ckc = 0UL;
 VAR_0->arch.sie_block->todpr = 0;
 FUNC_0(VAR_0->arch.sie_block->gcr, 0, 16 * sizeof(__u64));
 VAR_0->arch.sie_block->gcr[0] = 0xE0UL;
 VAR_0->arch.sie_block->gcr[14] = 0xC2000000UL;
 VAR_0->arch.guest_fpregs.fpc = 0;
 asm volatile("lfpc %0" : : "Q" (VAR_0->arch.guest_fpregs.fpc));
 VAR_0->arch.sie_block->gbea = 1;
}
