
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvt_dev {int cir_wake_addr; int cir_wake_irq; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct nvt_dev*,int,int ) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (struct nvt_dev*,int ) ;
 int FUNC_3 (struct nvt_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct nvt_dev *VAR_13)
{

 FUNC_2(VAR_13, VAR_9);
 FUNC_0(VAR_13, VAR_11, VAR_8);


 FUNC_3(VAR_13, VAR_1, VAR_2);


 FUNC_3(VAR_13, VAR_0, VAR_3);


 FUNC_3(VAR_13, VAR_12, VAR_4);


 FUNC_2(VAR_13, VAR_10);
 FUNC_0(VAR_13, VAR_11, VAR_8);

 FUNC_0(VAR_13, VAR_13->cir_wake_addr >> 8, VAR_5);
 FUNC_0(VAR_13, VAR_13->cir_wake_addr & 0xff, VAR_6);

 FUNC_0(VAR_13, VAR_13->cir_wake_irq, VAR_7);

 FUNC_1("CIR Wake initialized, base io port address: 0x%lx, irq: %d",
  VAR_13->cir_wake_addr, VAR_13->cir_wake_irq);
}
