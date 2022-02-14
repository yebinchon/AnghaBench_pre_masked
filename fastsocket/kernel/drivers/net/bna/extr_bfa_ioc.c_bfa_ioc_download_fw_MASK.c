
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ host_page_num_fn; scalar_t__ smem_page_start; } ;
struct bfa_ioc {TYPE_1__ ioc_regs; int port1_mode; int port0_mode; int asic_mode; int asic_gen; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 size_t FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__* FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct bfa_ioc*) ;
 scalar_t__ FUNC_8 (struct bfa_ioc*,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_11(struct bfa_ioc *VAR_3, u32 VAR_4,
      u32 VAR_5)
{
 u32 *VAR_6;
 u32 VAR_7;
 u32 VAR_8 = 0;
 u32 VAR_9 = 0;
 u32 VAR_10;
 u32 VAR_11;

 VAR_6 = FUNC_5(FUNC_7(VAR_3), VAR_9);

 VAR_7 = FUNC_8(VAR_3, VAR_8);

 FUNC_10(VAR_7, VAR_3->ioc_regs.host_page_num_fn);

 for (VAR_10 = 0; VAR_10 < FUNC_6(FUNC_7(VAR_3)); VAR_10++) {
  if (FUNC_1(VAR_10) != VAR_9) {
   VAR_9 = FUNC_1(VAR_10);
   VAR_6 = FUNC_5(FUNC_7(VAR_3),
     FUNC_0(VAR_9));
  }




  FUNC_10((FUNC_9(VAR_6[FUNC_2(VAR_10)])),
         ((VAR_3->ioc_regs.smem_page_start) + (VAR_8)));

  VAR_8 += sizeof(u32);




  VAR_8 = FUNC_4(VAR_8);
  if (VAR_8 == 0) {
   VAR_7++;
   FUNC_10(VAR_7,
          VAR_3->ioc_regs.host_page_num_fn);
  }
 }

 FUNC_10(FUNC_8(VAR_3, 0),
        VAR_3->ioc_regs.host_page_num_fn);




 VAR_11 = FUNC_3(VAR_3->asic_gen, VAR_3->asic_mode,
     VAR_3->port0_mode, VAR_3->port1_mode);
 FUNC_10(VAR_11, ((VAR_3->ioc_regs.smem_page_start)
   + VAR_0));
 FUNC_10(VAR_4, ((VAR_3->ioc_regs.smem_page_start)
   + (VAR_2)));
 FUNC_10(VAR_5, ((VAR_3->ioc_regs.smem_page_start)
   + (VAR_1)));
}
