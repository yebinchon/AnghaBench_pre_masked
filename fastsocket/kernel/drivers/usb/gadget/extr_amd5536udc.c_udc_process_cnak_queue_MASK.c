
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct udc {TYPE_2__* ep; } ;
struct TYPE_4__ {int num; scalar_t__ naking; TYPE_1__* regs; } ;
struct TYPE_3__ {int ctl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct udc*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static void FUNC_5(struct udc *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;


 FUNC_1(VAR_4, "CNAK pending queue processing\n");
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_3 & (1 << VAR_5)) {
   FUNC_1(VAR_4, "CNAK pending for ep%d\n", VAR_5);

   VAR_6 = FUNC_3(&VAR_4->ep[VAR_5].regs->ctl);
   VAR_6 |= FUNC_0(VAR_1);
   FUNC_4(VAR_6, &VAR_4->ep[VAR_5].regs->ctl);
   VAR_4->ep[VAR_5].naking = 0;
   FUNC_2(&VAR_4->ep[VAR_5], VAR_4->ep[VAR_5].num);
  }
 }

 if (VAR_3 & (1 << VAR_0)) {
  FUNC_1(VAR_4, "CNAK pending for ep%d\n", VAR_0);

  VAR_6 = FUNC_3(&VAR_4->ep[VAR_0].regs->ctl);
  VAR_6 |= FUNC_0(VAR_1);
  FUNC_4(VAR_6, &VAR_4->ep[VAR_0].regs->ctl);
  VAR_4->ep[VAR_0].naking = 0;
  FUNC_2(&VAR_4->ep[VAR_0],
    VAR_4->ep[VAR_0].num);
 }
}
