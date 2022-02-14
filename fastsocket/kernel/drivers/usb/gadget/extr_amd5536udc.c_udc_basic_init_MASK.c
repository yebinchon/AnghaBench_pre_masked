
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int speed; } ;
struct udc {scalar_t__ data_ep_queued; scalar_t__ data_ep_enabled; TYPE_2__* regs; TYPE_1__ gadget; } ;
struct TYPE_4__ {int cfg; int ctl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct udc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct udc*) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct udc *VAR_10)
{
 u32 VAR_11;

 FUNC_2(VAR_10, "udc_basic_init()\n");

 VAR_10->gadget.speed = VAR_5;


 if (FUNC_6(&VAR_9)) {
  VAR_7 = 0;
  FUNC_4(&VAR_9, VAR_6 - 1);
 }

 if (FUNC_6(&VAR_8)) {
  FUNC_4(&VAR_8, VAR_6 - 1);
 }

 VAR_11 = FUNC_5(&VAR_10->regs->ctl);
 VAR_11 &= FUNC_1(VAR_3);
 VAR_11 &= FUNC_1(VAR_4);
 FUNC_7(VAR_11, &VAR_10->regs->ctl);


 VAR_11 = FUNC_5(&VAR_10->regs->cfg);
 VAR_11 |= FUNC_0(VAR_0);

 VAR_11 |= FUNC_0(VAR_2);

 VAR_11 |= FUNC_0(VAR_1);
 FUNC_7(VAR_11, &VAR_10->regs->cfg);

 FUNC_3(VAR_10);

 VAR_10->data_ep_enabled = 0;
 VAR_10->data_ep_queued = 0;
}
