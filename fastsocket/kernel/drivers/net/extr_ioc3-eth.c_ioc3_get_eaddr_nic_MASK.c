
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ioc3_private {struct ioc3* regs; } ;
struct ioc3 {int dummy; } ;
struct TYPE_2__ {int * dev_addr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ioc3*) ;
 int FUNC_2 (struct ioc3*) ;
 int FUNC_3 (struct ioc3*,int) ;
 int FUNC_4 (char*) ;
 TYPE_1__* FUNC_5 (struct ioc3_private*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct ioc3_private *VAR_0)
{
 struct ioc3 *VAR_1 = VAR_0->regs;
 u8 VAR_2[14];
 int VAR_3 = 2;
 int VAR_4;

 FUNC_0(1 << 21);

 while (VAR_3--) {
  if (!FUNC_1(VAR_1))
   break;
  FUNC_6(500);
 }

 if (VAR_3 < 0) {
  FUNC_4("Failed to read MAC address\n");
  return;
 }


 FUNC_3(VAR_1, 0xf0);
 FUNC_3(VAR_1, 0x00);
 FUNC_3(VAR_1, 0x00);

 for (VAR_4 = 13; VAR_4 >= 0; VAR_4--)
  VAR_2[VAR_4] = FUNC_2(VAR_1);

 for (VAR_4 = 2; VAR_4 < 8; VAR_4++)
  FUNC_5(VAR_0)->dev_addr[VAR_4 - 2] = VAR_2[VAR_4];
}
