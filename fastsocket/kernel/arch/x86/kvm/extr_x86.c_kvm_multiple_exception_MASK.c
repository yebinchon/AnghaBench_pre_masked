
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int pending; int has_error_code; unsigned int nr; scalar_t__ error_code; } ;
struct TYPE_4__ {TYPE_1__ exception; } ;
struct kvm_vcpu {TYPE_2__ arch; int requests; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_5,
  unsigned VAR_6, bool VAR_7, u32 VAR_8)
{
 u32 VAR_9;
 int VAR_10, VAR_11;

 if (!VAR_5->arch.exception.pending) {
 queue:
  VAR_5->arch.exception.pending = 1;
  VAR_5->arch.exception.has_error_code = VAR_7;
  VAR_5->arch.exception.nr = VAR_6;
  VAR_5->arch.exception.error_code = VAR_8;
  return;
 }


 VAR_9 = VAR_5->arch.exception.nr;
 if (VAR_9 == VAR_0) {

  FUNC_1(VAR_4, &VAR_5->requests);
  return;
 }
 VAR_10 = FUNC_0(VAR_9);
 VAR_11 = FUNC_0(VAR_6);
 if ((VAR_10 == VAR_2 && VAR_11 == VAR_2)
  || (VAR_10 == VAR_3 && VAR_11 != VAR_1)) {

  VAR_5->arch.exception.pending = 1;
  VAR_5->arch.exception.has_error_code = 1;
  VAR_5->arch.exception.nr = VAR_0;
  VAR_5->arch.exception.error_code = 0;
 } else



  goto queue;
}
