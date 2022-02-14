
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nes_vnic {struct nes_device* nesdev; } ;
struct nes_device {scalar_t__ regs; } ;
struct TYPE_2__ {int cq_number; } ;
struct nes_cq {TYPE_1__ hw_cq; } ;
struct ib_cq {int device; } ;
typedef enum ib_cq_notify_flags { ____Placeholder_ib_cq_notify_flags } ib_cq_notify_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 struct nes_cq* FUNC_3 (struct ib_cq*) ;
 struct nes_vnic* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ib_cq *VAR_8, enum ib_cq_notify_flags VAR_9)
  {
 struct nes_vnic *VAR_10 = FUNC_4(VAR_8->device);
 struct nes_device *VAR_11 = VAR_10->nesdev;
 struct nes_cq *VAR_12 = FUNC_3(VAR_8);
 u32 VAR_13;

 FUNC_0(VAR_7, "Requesting notification for CQ%u.\n",
   VAR_12->hw_cq.cq_number);

 VAR_13 = VAR_12->hw_cq.cq_number;
 if ((VAR_9 & VAR_3) == VAR_1)
  VAR_13 |= VAR_5;
 else if ((VAR_9 & VAR_3) == VAR_2)
  VAR_13 |= VAR_6;
 else
  return -VAR_0;

 FUNC_2(VAR_11->regs+VAR_4, VAR_13);
 FUNC_1(VAR_11->regs+VAR_4);

 return 0;
}
