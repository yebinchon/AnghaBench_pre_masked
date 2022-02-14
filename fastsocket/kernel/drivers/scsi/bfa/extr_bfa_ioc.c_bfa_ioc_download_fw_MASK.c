
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int smem_page_start; int host_page_num_fn; int smem_pg0; } ;
struct bfa_ioc_s {TYPE_1__ ioc_regs; int port1_mode; int port0_mode; int asic_mode; int asic_gen; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 size_t FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__* FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct bfa_ioc_s*) ;
 int FUNC_9 (int ,scalar_t__,int ) ;
 int FUNC_10 (struct bfa_ioc_s*,scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_14(struct bfa_ioc_s *VAR_3, u32 VAR_4,
      u32 VAR_5)
{
 u32 *VAR_6;
 u32 VAR_7, VAR_8;
 u32 VAR_9 = 0;
 u32 VAR_10 = 0;
 u32 VAR_11;
 u32 VAR_12;

 FUNC_10(VAR_3, FUNC_7(FUNC_8(VAR_3)));
 VAR_6 = FUNC_6(FUNC_8(VAR_3), VAR_10);

 VAR_7 = FUNC_4(VAR_3->ioc_regs.smem_pg0, VAR_9);
 VAR_8 = FUNC_5(VAR_9);

 FUNC_13(VAR_7, VAR_3->ioc_regs.host_page_num_fn);

 for (VAR_11 = 0; VAR_11 < FUNC_7(FUNC_8(VAR_3)); VAR_11++) {

  if (FUNC_1(VAR_11) != VAR_10) {
   VAR_10 = FUNC_1(VAR_11);
   VAR_6 = FUNC_6(FUNC_8(VAR_3),
     FUNC_0(VAR_10));
  }




  FUNC_9(VAR_3->ioc_regs.smem_page_start, VAR_9,
   FUNC_11(VAR_6[FUNC_2(VAR_11)]));

  VAR_9 += sizeof(u32);




  VAR_9 = FUNC_5(VAR_9);
  if (VAR_9 == 0) {
   VAR_7++;
   FUNC_13(VAR_7, VAR_3->ioc_regs.host_page_num_fn);
  }
 }

 FUNC_13(FUNC_4(VAR_3->ioc_regs.smem_pg0, 0),
   VAR_3->ioc_regs.host_page_num_fn);




 VAR_12 = FUNC_3(VAR_3->asic_gen, VAR_3->asic_mode,
    VAR_3->port0_mode, VAR_3->port1_mode);
 FUNC_9(VAR_3->ioc_regs.smem_page_start, VAR_0,
   FUNC_12(VAR_12));
 FUNC_9(VAR_3->ioc_regs.smem_page_start, VAR_2,
   FUNC_12(VAR_4));
 FUNC_9(VAR_3->ioc_regs.smem_page_start, VAR_1,
   FUNC_12(VAR_5));
}
