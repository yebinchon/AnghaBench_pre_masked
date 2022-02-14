
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ene_device {scalar_t__ hw_revision; int irq; int rx_enabled; int rdev; int rx_fan_input_inuse; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ene_device*) ;
 int FUNC_1 (struct ene_device*,int ) ;
 int FUNC_2 (struct ene_device*,int) ;
 int FUNC_3 (struct ene_device*,int ) ;
 int FUNC_4 (struct ene_device*,int ,int) ;
 int FUNC_5 (struct ene_device*,int ,int) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void FUNC_7(struct ene_device *VAR_10)
{
 u8 VAR_11;


 if (VAR_10->hw_revision < VAR_5) {
  FUNC_5(VAR_10, VAR_0, VAR_10->irq << 1);
  FUNC_5(VAR_10, VAR_1, 0x01);
 } else {
  VAR_11 = FUNC_1(VAR_10, VAR_6) & 0xF0;
  VAR_11 |= VAR_9;
  VAR_11 &= ~VAR_8;
  VAR_11 |= (VAR_10->irq & VAR_7);
  FUNC_5(VAR_10, VAR_6, VAR_11);
 }


 FUNC_3(VAR_10, VAR_10->rx_fan_input_inuse);
 FUNC_2(VAR_10, !VAR_10->rx_fan_input_inuse);


 FUNC_0(VAR_10);


 FUNC_4(VAR_10, VAR_2, VAR_3 | VAR_4);


 FUNC_6(VAR_10->rdev, 1);
 VAR_10->rx_enabled = 1;
}
