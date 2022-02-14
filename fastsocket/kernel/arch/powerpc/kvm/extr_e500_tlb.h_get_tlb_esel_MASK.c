
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_e500 {int mas2; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct kvmppc_vcpu_e500 const*) ;

__attribute__((used)) static inline unsigned int FUNC_1(
  const struct kvmppc_vcpu_e500 *VAR_4,
  int VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_4);

 if (VAR_5 == 0) {
  VAR_6 &= VAR_1;
  VAR_6 |= ((VAR_4->mas2 >> 12) & VAR_2)
    << VAR_0;
 } else {
  VAR_6 &= VAR_3 - 1;
 }

 return VAR_6;
}
