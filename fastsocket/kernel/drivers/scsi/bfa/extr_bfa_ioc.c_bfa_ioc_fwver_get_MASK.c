
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bfi_ioc_image_hdr_s {int dummy; } ;
struct TYPE_2__ {int smem_page_start; int host_page_num_fn; int smem_pg0; } ;
struct bfa_ioc_s {TYPE_1__ ioc_regs; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int ) ;

void
FUNC_4(struct bfa_ioc_s *VAR_0, struct bfi_ioc_image_hdr_s *VAR_1)
{
 u32 VAR_2, VAR_3;
 u32 VAR_4 = 0;
 int VAR_5;
 u32 *VAR_6 = (u32 *) VAR_1;

 VAR_2 = FUNC_0(VAR_0->ioc_regs.smem_pg0, VAR_4);
 VAR_3 = FUNC_1(VAR_4);
 FUNC_3(VAR_2, VAR_0->ioc_regs.host_page_num_fn);

 for (VAR_5 = 0; VAR_5 < (sizeof(struct bfi_ioc_image_hdr_s) / sizeof(u32));
      VAR_5++) {
  VAR_6[VAR_5] =
   FUNC_2(VAR_0->ioc_regs.smem_page_start, VAR_4);
  VAR_4 += sizeof(u32);
 }
}
