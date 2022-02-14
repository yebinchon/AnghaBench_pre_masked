
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_e500 {int mas0; } ;



__attribute__((used)) static inline unsigned int FUNC_0(
  const struct kvmppc_vcpu_e500 *VAR_0)
{
 return VAR_0->mas0 & 0xfff;
}
