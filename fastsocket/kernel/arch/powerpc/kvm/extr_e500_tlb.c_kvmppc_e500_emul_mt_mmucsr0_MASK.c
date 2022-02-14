
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct kvmppc_vcpu_e500 {int* guest_tlb_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct kvmppc_vcpu_e500*,int,int) ;

int FUNC_2(struct kvmppc_vcpu_e500 *VAR_3, ulong VAR_4)
{
 int VAR_5;

 if (VAR_4 & VAR_1)
  for (VAR_5 = 0; VAR_5 < VAR_3->guest_tlb_size[0]; VAR_5++)
   FUNC_1(VAR_3, 0, VAR_5);
 if (VAR_4 & VAR_2)
  for (VAR_5 = 0; VAR_5 < VAR_3->guest_tlb_size[1]; VAR_5++)
   FUNC_1(VAR_3, 1, VAR_5);

 FUNC_0();

 return VAR_0;
}
