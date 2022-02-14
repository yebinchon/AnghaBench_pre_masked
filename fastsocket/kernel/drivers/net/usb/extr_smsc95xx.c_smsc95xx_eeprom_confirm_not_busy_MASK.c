
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct usbnet*,char*) ;
 unsigned long VAR_4 ;
 int FUNC_1 (struct usbnet*,int ,int*) ;
 int FUNC_2 (unsigned long,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct usbnet *VAR_5)
{
 unsigned long VAR_6 = VAR_4;
 u32 VAR_7;

 do {
  FUNC_1(VAR_5, VAR_0, &VAR_7);

  if (!(VAR_7 & VAR_1))
   return 0;

  FUNC_3(40);
 } while (!FUNC_2(VAR_4, VAR_6 + VAR_3));

 FUNC_0(VAR_5, "EEPROM is busy");
 return -VAR_2;
}
