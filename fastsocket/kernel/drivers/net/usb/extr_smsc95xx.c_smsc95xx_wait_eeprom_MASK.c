
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct usbnet*,char*) ;
 unsigned long VAR_5 ;
 int FUNC_1 (struct usbnet*,int ,int*) ;
 int FUNC_2 (unsigned long,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct usbnet *VAR_6)
{
 unsigned long VAR_7 = VAR_5;
 u32 VAR_8;

 do {
  FUNC_1(VAR_6, VAR_0, &VAR_8);
  if (!(VAR_8 & VAR_1) || (VAR_8 & VAR_2))
   break;
  FUNC_3(40);
 } while (!FUNC_2(VAR_5, VAR_7 + VAR_4));

 if (VAR_8 & (VAR_2 | VAR_1)) {
  FUNC_0(VAR_6, "EEPROM read operation timeout");
  return -VAR_3;
 }

 return 0;
}
