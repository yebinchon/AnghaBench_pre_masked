
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct nes_device {scalar_t__ regs; struct nes_adapter* nesadapter; } ;
struct nes_adapter {scalar_t__ hw_rev; int* link_interrupt_count; int port_count; scalar_t__ OneG_Mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct nes_device*,scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct nes_device*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct nes_device *VAR_6, u32 VAR_7)
{
 struct nes_adapter *VAR_8 = VAR_6->nesadapter;
 u32 VAR_9;
 u32 VAR_10=0;
 u32 VAR_11;

 if (VAR_8->hw_rev == VAR_0) {
  return;
 }
 VAR_5++;

 VAR_9 = FUNC_0(VAR_6->regs+VAR_4);

 if ((VAR_7 == 0) || ((VAR_7 == 1) && (VAR_8->OneG_Mode)))
  VAR_9 |= 0x0000001d;
 else
  VAR_9 |= 0x0000002d;

 if (4 <= (VAR_8->link_interrupt_count[VAR_7] / ((u16)VAR_3))) {
  if ((!VAR_8->OneG_Mode) && (VAR_8->port_count == 2)) {
   VAR_8->link_interrupt_count[0] = 0;
   VAR_8->link_interrupt_count[1] = 0;
   VAR_11 = FUNC_1(VAR_6, VAR_1);
   if (0x00000040 & VAR_11)
    FUNC_3(VAR_6, VAR_1, 0x0000F088);
   else
    FUNC_3(VAR_6, VAR_1, 0x0000F0C8);

   VAR_9 |= 0x0000003d;
  }
  VAR_8->link_interrupt_count[VAR_7] = 0;
 }

 FUNC_2(VAR_6->regs+VAR_4, VAR_9);

 while (((FUNC_0(VAR_6->regs+VAR_4)
   & 0x00000040) != 0x00000040) && (VAR_10++ < 5000));

 if (0x0000003d == (VAR_9 & 0x0000003d)) {
  u32 VAR_12, VAR_13;

  for (VAR_10 = 0; VAR_10 < 10; VAR_10++) {
   VAR_12 = FUNC_1(VAR_6, VAR_2);
   VAR_13 = FUNC_1(VAR_6, VAR_2 + 0x200);
   if (((0x0F000000 == (VAR_12 & 0x0F000000))
        && (VAR_12 & 0x00100000))
       || ((0x0F000000 == (VAR_13 & 0x0F000000))
    && (VAR_13 & 0x00100000)))
    continue;
   else
    break;
  }
  if (10 == VAR_10) {
   VAR_11 = FUNC_1(VAR_6, VAR_1);
   if (0x00000040 & VAR_11)
    FUNC_3(VAR_6, VAR_1, 0x0000F088);
   else
    FUNC_3(VAR_6, VAR_1, 0x0000F0C8);

   FUNC_2(VAR_6->regs+VAR_4, VAR_9);

   while (((FUNC_0(VAR_6->regs + VAR_4)
     & 0x00000040) != 0x00000040) && (VAR_10++ < 5000));
  }
 }
}
