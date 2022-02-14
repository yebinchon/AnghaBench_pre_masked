
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int kvm; } ;
typedef int gva_t ;
typedef scalar_t__ gpa_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,int,int *) ;
 int FUNC_1 (int ,scalar_t__,void*,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(gva_t VAR_5, void *VAR_6, unsigned int VAR_7,
    struct kvm_vcpu *VAR_8, u32 *VAR_9)
{
 void *VAR_10 = VAR_6;
 int VAR_11 = VAR_2;

 while (VAR_7) {
  gpa_t VAR_12 = FUNC_0(VAR_8, VAR_5, VAR_9);
  unsigned VAR_13 = VAR_5 & (VAR_0-1);
  unsigned VAR_14 = FUNC_2(VAR_7, (unsigned)VAR_0 - VAR_13);
  int VAR_15;

  if (VAR_12 == VAR_1) {
   VAR_11 = VAR_3;
   goto out;
  }
  VAR_15 = FUNC_1(VAR_8->kvm, VAR_12, VAR_10, VAR_14);
  if (VAR_15 < 0) {
   VAR_11 = VAR_4;
   goto out;
  }

  VAR_7 -= VAR_14;
  VAR_10 += VAR_14;
  VAR_5 += VAR_14;
 }
out:
 return VAR_11;
}
