
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvt_dev {int cir_addr; int cir_irq; } ;


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
 int FUNC_0 (struct nvt_dev*,int ) ;
 int FUNC_1 (struct nvt_dev*,int,int ) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (struct nvt_dev*,int ) ;

__attribute__((used)) static void FUNC_4(struct nvt_dev *VAR_10)
{
 u8 VAR_11;


 VAR_11 = FUNC_0(VAR_10, VAR_4);
 VAR_11 &= VAR_9;
 VAR_11 |= (VAR_7 | VAR_8);
 FUNC_1(VAR_10, VAR_11, VAR_4);


 FUNC_3(VAR_10, VAR_5);
 FUNC_1(VAR_10, VAR_6, VAR_3);

 FUNC_1(VAR_10, VAR_10->cir_addr >> 8, VAR_0);
 FUNC_1(VAR_10, VAR_10->cir_addr & 0xff, VAR_1);

 FUNC_1(VAR_10, VAR_10->cir_irq, VAR_2);

 FUNC_2("CIR initialized, base io port address: 0x%lx, irq: %d",
  VAR_10->cir_addr, VAR_10->cir_irq);
}
