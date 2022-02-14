
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct memstick_host {int dev; } ;
struct jmb38x_ms_host {int cmd_flags; TYPE_2__* req; scalar_t__ addr; TYPE_1__* chip; int timer; } ;
struct TYPE_4__ {int int_reg; scalar_t__ data_dir; int error; int sg; } ;
struct TYPE_3__ {int pdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 scalar_t__ FUNC_2 (struct memstick_host*) ;
 int FUNC_3 (struct memstick_host*,TYPE_2__**) ;
 struct jmb38x_ms_host* FUNC_4 (struct memstick_host*) ;
 int FUNC_5 (int ,int *,int,int ) ;
 unsigned int FUNC_6 (scalar_t__) ;
 int FUNC_7 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct memstick_host *VAR_15, int VAR_16)
{
 struct jmb38x_ms_host *VAR_17 = FUNC_4(VAR_15);
 unsigned int VAR_18 = 0;
 int VAR_19;

 FUNC_0(&VAR_17->timer);

 FUNC_1(&VAR_15->dev, "c control %08x\n",
  FUNC_6(VAR_17->addr + VAR_4));
 FUNC_1(&VAR_15->dev, "c status %08x\n",
  FUNC_6(VAR_17->addr + VAR_7));
 FUNC_1(&VAR_15->dev, "c hstatus %08x\n", FUNC_6(VAR_17->addr + VAR_14));

 VAR_17->req->int_reg = FUNC_6(VAR_17->addr + VAR_14) & 0xff;

 FUNC_7(0, VAR_17->addr + VAR_0);
 FUNC_7(0, VAR_17->addr + VAR_1);

 if (VAR_17->cmd_flags & VAR_2) {
  FUNC_5(VAR_17->chip->pdev, &VAR_17->req->sg, 1,
        VAR_17->req->data_dir == VAR_13
        ? VAR_11 : VAR_12);
 } else {
  VAR_18 = FUNC_6(VAR_17->addr + VAR_8);
  if (VAR_17->req->data_dir == VAR_13)
   VAR_18 &= ~VAR_9;
  else
   VAR_18 &= ~VAR_10;

  FUNC_7(VAR_18, VAR_17->addr + VAR_8);
  FUNC_7(VAR_18, VAR_17->addr + VAR_6);
 }

 FUNC_7((~VAR_5) & FUNC_6(VAR_17->addr + VAR_4),
        VAR_17->addr + VAR_4);

 if (!VAR_16) {
  do {
   VAR_19 = FUNC_3(VAR_15, &VAR_17->req);
  } while (!VAR_19 && FUNC_2(VAR_15));
 } else {
  do {
   VAR_19 = FUNC_3(VAR_15, &VAR_17->req);
   if (!VAR_19)
    VAR_17->req->error = -VAR_3;
  } while (!VAR_19);
 }
}
