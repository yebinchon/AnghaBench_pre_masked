
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


struct TYPE_12__ {int masked; int pending; int injected; } ;
struct TYPE_10__ {int soft; int nr; scalar_t__ injected; } ;
struct TYPE_9__ {int error_code; int has_error_code; int nr; int injected; } ;
struct kvm_vcpu_events {int flags; int sipi_vector; TYPE_5__ nmi; TYPE_3__ interrupt; TYPE_2__ exception; } ;
struct TYPE_11__ {scalar_t__ pending; int soft; int nr; } ;
struct TYPE_8__ {int error_code; int has_error_code; int nr; int pending; } ;
struct TYPE_13__ {int sipi_vector; int nmi_pending; int nmi_injected; TYPE_4__ interrupt; TYPE_1__ exception; } ;
struct kvm_vcpu {TYPE_6__ arch; int kvm; } ;
struct TYPE_14__ {int (* set_nmi_mask ) (struct kvm_vcpu*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_7__* VAR_3 ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_4,
           struct kvm_vcpu_events *VAR_5)
{
 if (VAR_5->flags & ~(VAR_1
         | VAR_2))
  return -VAR_0;

 FUNC_3(VAR_4);

 VAR_4->arch.exception.pending = VAR_5->exception.injected;
 VAR_4->arch.exception.nr = VAR_5->exception.nr;
 VAR_4->arch.exception.has_error_code = VAR_5->exception.has_error_code;
 VAR_4->arch.exception.error_code = VAR_5->exception.error_code;

 VAR_4->arch.interrupt.pending = VAR_5->interrupt.injected;
 VAR_4->arch.interrupt.nr = VAR_5->interrupt.nr;
 VAR_4->arch.interrupt.soft = VAR_5->interrupt.soft;
 if (VAR_4->arch.interrupt.pending && FUNC_0(VAR_4->kvm))
  FUNC_1(VAR_4->kvm);

 VAR_4->arch.nmi_injected = VAR_5->nmi.injected;
 if (VAR_5->flags & VAR_1)
  VAR_4->arch.nmi_pending = VAR_5->nmi.pending;
 VAR_3->set_nmi_mask(VAR_4, VAR_5->nmi.masked);

 if (VAR_5->flags & VAR_2)
  VAR_4->arch.sipi_vector = VAR_5->sipi_vector;

 FUNC_4(VAR_4);

 return 0;
}
