
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct usbnet {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct usbnet*,char*,...) ;
 int FUNC_1 (struct usbnet*,char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct usbnet*) ;
 int FUNC_4 (struct usbnet*,int ,int*) ;
 int FUNC_5 (struct usbnet*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct usbnet *VAR_5, u8 VAR_6,
         u16 VAR_7, u16 VAR_8)
{
 u32 VAR_9, VAR_10 = 0;

 int VAR_11 = FUNC_4(VAR_5, VAR_0, &VAR_10);
 if (VAR_11 < 0) {
  FUNC_1(VAR_5, "error reading AFC_CFG");
  return;
 }

 if (VAR_6 == VAR_1) {
  u8 VAR_12 = FUNC_2(VAR_7, VAR_8);

  if (VAR_12 & VAR_3)
   VAR_9 = 0xFFFF0002;
  else
   VAR_9 = 0;

  if (VAR_12 & VAR_4)
   VAR_10 |= 0xF;
  else
   VAR_10 &= ~0xF;

  if (FUNC_3(VAR_5))
   FUNC_0(VAR_5, "rx pause %s, tx pause %s",
    (VAR_12 & VAR_3 ? "enabled" : "disabled"),
    (VAR_12 & VAR_4 ? "enabled" : "disabled"));
 } else {
  if (FUNC_3(VAR_5))
   FUNC_0(VAR_5, "half duplex");
  VAR_9 = 0;
  VAR_10 |= 0xF;
 }

 FUNC_5(VAR_5, VAR_2, VAR_9);
 FUNC_5(VAR_5, VAR_0, VAR_10);
}
