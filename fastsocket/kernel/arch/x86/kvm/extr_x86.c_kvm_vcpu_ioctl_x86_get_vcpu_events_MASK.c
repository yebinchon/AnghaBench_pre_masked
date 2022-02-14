
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ pad; int masked; int pending; int injected; } ;
struct TYPE_11__ {scalar_t__ pad; int soft; int nr; int injected; } ;
struct TYPE_8__ {int error_code; scalar_t__ pad; int has_error_code; int nr; int injected; } ;
struct kvm_vcpu_events {int flags; int reserved; int sipi_vector; TYPE_5__ nmi; TYPE_4__ interrupt; TYPE_1__ exception; } ;
struct TYPE_10__ {int soft; int nr; int pending; } ;
struct TYPE_9__ {int error_code; int has_error_code; int nr; int pending; } ;
struct TYPE_13__ {int sipi_vector; int nmi_pending; int nmi_injected; TYPE_3__ interrupt; TYPE_2__ exception; } ;
struct kvm_vcpu {TYPE_6__ arch; } ;
struct TYPE_14__ {int (* get_nmi_mask ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_3,
            struct kvm_vcpu_events *VAR_4)
{
 FUNC_2(VAR_3);

 VAR_4->exception.injected = VAR_3->arch.exception.pending;
 VAR_4->exception.nr = VAR_3->arch.exception.nr;
 VAR_4->exception.has_error_code = VAR_3->arch.exception.has_error_code;
 VAR_4->exception.pad = 0;
 VAR_4->exception.error_code = VAR_3->arch.exception.error_code;

 VAR_4->interrupt.injected = VAR_3->arch.interrupt.pending;
 VAR_4->interrupt.nr = VAR_3->arch.interrupt.nr;
 VAR_4->interrupt.soft = VAR_3->arch.interrupt.soft;
 VAR_4->interrupt.pad = 0;

 VAR_4->nmi.injected = VAR_3->arch.nmi_injected;
 VAR_4->nmi.pending = VAR_3->arch.nmi_pending;
 VAR_4->nmi.masked = VAR_2->get_nmi_mask(VAR_3);
 VAR_4->nmi.pad = 0;

 VAR_4->sipi_vector = VAR_3->arch.sipi_vector;

 VAR_4->flags = (VAR_0
    | VAR_1);

 FUNC_0(&VAR_4->reserved, 0, sizeof(VAR_4->reserved));
 FUNC_3(VAR_3);
}
