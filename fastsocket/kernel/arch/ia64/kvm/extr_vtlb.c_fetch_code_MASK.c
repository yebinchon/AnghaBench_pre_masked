
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct thash_data {int ppn; int ps; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {int* i64; } ;
typedef TYPE_1__ IA64_BUNDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 struct thash_data* FUNC_5 (int) ;
 int VAR_5 ;
 struct thash_data* FUNC_6 (struct kvm_vcpu*,int,int ) ;

int FUNC_7(struct kvm_vcpu *VAR_6, u64 VAR_7, IA64_BUNDLE *VAR_8)
{
 u64 VAR_9 = 0;
 u64 *VAR_10;
 struct thash_data *VAR_11;
 u64 VAR_12;

 if (!(FUNC_1(VAR_6, VAR_5) & VAR_3)) {

  VAR_9 = VAR_7;
 } else {
  VAR_11 = FUNC_6(VAR_6, VAR_7, VAR_4);
  if (VAR_11)
   VAR_9 = (VAR_11->ppn >> (VAR_11->ps - 12) << VAR_11->ps) |
    (VAR_7 & (FUNC_0(VAR_11->ps) - 1));
 }
 if (VAR_9) {
  VAR_12 = FUNC_4(VAR_9);
 } else {
  VAR_11 = FUNC_5(VAR_7);
  if (VAR_11 == ((void*)0)) {
   FUNC_3(VAR_7, VAR_0 << 2);
   return VAR_1;
  }
  VAR_12 = (VAR_11->ppn >> (VAR_11->ps - 12) << VAR_11->ps)
     | (VAR_7 & (FUNC_0(VAR_11->ps) - 1));
 }
 VAR_10 = (u64 *)FUNC_2(VAR_12);

 VAR_8->i64[0] = *VAR_10++;
 VAR_8->i64[1] = *VAR_10;

 return VAR_2;
}
