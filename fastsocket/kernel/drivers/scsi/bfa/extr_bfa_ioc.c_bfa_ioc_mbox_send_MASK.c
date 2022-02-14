
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ hfn_mbox_cmd; scalar_t__ hfn_mbox; } ;
struct bfa_ioc_s {TYPE_1__ ioc_regs; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_ioc_s*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

void
FUNC_5(struct bfa_ioc_s *VAR_1, void *VAR_2, int VAR_3)
{
 u32 *VAR_4 = (u32 *) VAR_2;
 u32 VAR_5;

 FUNC_1(VAR_1, VAR_4[0]);
 FUNC_1(VAR_1, VAR_3);

 FUNC_0(VAR_3 > VAR_0);




 for (VAR_5 = 0; VAR_5 < VAR_3 / sizeof(u32); VAR_5++)
  FUNC_4(FUNC_2(VAR_4[VAR_5]),
   VAR_1->ioc_regs.hfn_mbox + VAR_5 * sizeof(u32));

 for (; VAR_5 < VAR_0 / sizeof(u32); VAR_5++)
  FUNC_4(0, VAR_1->ioc_regs.hfn_mbox + VAR_5 * sizeof(u32));




 FUNC_4(1, VAR_1->ioc_regs.hfn_mbox_cmd);
 (void) FUNC_3(VAR_1->ioc_regs.hfn_mbox_cmd);
}
