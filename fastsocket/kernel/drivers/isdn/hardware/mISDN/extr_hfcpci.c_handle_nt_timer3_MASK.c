
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mst_m; scalar_t__ nt_timer; int int_m1; } ;
struct hfc_pci {TYPE_1__ hw; int cfg; } ;
struct TYPE_4__ {int D; } ;
struct dchannel {TYPE_2__ dev; int Flags; struct hfc_pci* hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct hfc_pci*,int ,int ) ;
 int FUNC_1 (int *,int ,int ,int ,int *,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct dchannel *VAR_10) {
 struct hfc_pci *VAR_11 = VAR_10->hw;

 FUNC_2(VAR_1, &VAR_10->Flags);
 VAR_11->hw.int_m1 &= ~VAR_3;
 FUNC_0(VAR_11, VAR_4, VAR_11->hw.int_m1);
 VAR_11->hw.nt_timer = 0;
 FUNC_3(VAR_0, &VAR_10->Flags);
 if (FUNC_4(VAR_7, &VAR_11->cfg))
  VAR_11->hw.mst_m |= VAR_5;
 FUNC_0(VAR_11, VAR_6, VAR_11->hw.mst_m);
 FUNC_1(&VAR_10->dev.D, VAR_9,
     VAR_8, 0, ((void*)0), VAR_2);
}
