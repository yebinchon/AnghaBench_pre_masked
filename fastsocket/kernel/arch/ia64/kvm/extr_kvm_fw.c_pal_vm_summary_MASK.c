
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct ia64_pal_retval {int v1; int v0; int status; } ;
struct TYPE_5__ {int rid_size; int impl_va_msb; } ;
struct TYPE_7__ {int pvi2_val; TYPE_1__ pal_vm_info_2_s; } ;
typedef TYPE_3__ pal_vm_info_2_u_t ;
struct TYPE_6__ {int max_itr_entry; int max_dtr_entry; } ;
struct TYPE_8__ {int pvi1_val; TYPE_2__ pal_vm_info_1_s; } ;
typedef TYPE_4__ pal_vm_info_1_u_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ia64_pal_retval,int ,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct ia64_pal_retval FUNC_1(struct kvm_vcpu *VAR_3)
{

 pal_vm_info_1_u_t VAR_4;
 pal_vm_info_2_u_t VAR_5;
 struct ia64_pal_retval VAR_6;

 FUNC_0(VAR_6, VAR_2, 0, 0, 0);
 if (!VAR_6.status) {
  VAR_4 = VAR_6.v0;
  VAR_4 = 8;
  VAR_4 = 8;
  VAR_6.v0 = VAR_4;
  VAR_5 = VAR_0;
  VAR_5 = VAR_1;
  VAR_6.v1 = VAR_5;
 }

 return VAR_6;
}
