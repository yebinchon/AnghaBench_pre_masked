
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlbe {int dummy; } ;
struct page {int dummy; } ;
struct kvmppc_vcpu_e500 {int* guest_tlb_size; int* shadow_tlb_size; struct page*** guest_tlb; struct page*** shadow_tlb; struct page*** shadow_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page**) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;

int FUNC_3(struct kvmppc_vcpu_e500 *VAR_5)
{
 VAR_4 = FUNC_2(VAR_3) & 0xFFF;

 VAR_5->guest_tlb_size[0] = VAR_1;
 VAR_5->guest_tlb[0] =
  FUNC_1(sizeof(struct tlbe) * VAR_1, VAR_0);
 if (VAR_5->guest_tlb[0] == ((void*)0))
  goto err_out;

 VAR_5->shadow_tlb_size[0] = VAR_1;
 VAR_5->shadow_tlb[0] =
  FUNC_1(sizeof(struct tlbe) * VAR_1, VAR_0);
 if (VAR_5->shadow_tlb[0] == ((void*)0))
  goto err_out_guest0;

 VAR_5->guest_tlb_size[1] = VAR_2;
 VAR_5->guest_tlb[1] =
  FUNC_1(sizeof(struct tlbe) * VAR_2, VAR_0);
 if (VAR_5->guest_tlb[1] == ((void*)0))
  goto err_out_shadow0;

 VAR_5->shadow_tlb_size[1] = VAR_4;
 VAR_5->shadow_tlb[1] =
  FUNC_1(sizeof(struct tlbe) * VAR_4, VAR_0);
 if (VAR_5->shadow_tlb[1] == ((void*)0))
  goto err_out_guest1;

 VAR_5->shadow_pages[0] = (struct page **)
  FUNC_1(sizeof(struct page *) * VAR_1, VAR_0);
 if (VAR_5->shadow_pages[0] == ((void*)0))
  goto err_out_shadow1;

 VAR_5->shadow_pages[1] = (struct page **)
  FUNC_1(sizeof(struct page *) * VAR_4, VAR_0);
 if (VAR_5->shadow_pages[1] == ((void*)0))
  goto err_out_page0;

 return 0;

err_out_page0:
 FUNC_0(VAR_5->shadow_pages[0]);
err_out_shadow1:
 FUNC_0(VAR_5->shadow_tlb[1]);
err_out_guest1:
 FUNC_0(VAR_5->guest_tlb[1]);
err_out_shadow0:
 FUNC_0(VAR_5->shadow_tlb[0]);
err_out_guest0:
 FUNC_0(VAR_5->guest_tlb[0]);
err_out:
 return -1;
}
