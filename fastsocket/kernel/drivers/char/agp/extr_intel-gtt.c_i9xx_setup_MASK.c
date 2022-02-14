
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int gtt_bus_addr; int pcidev; int registers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_5(void)
{
 u32 VAR_5, VAR_6;
 int VAR_7 = FUNC_0(512);

 FUNC_4(VAR_4.pcidev, VAR_1, &VAR_5);

 VAR_5 &= 0xfff80000;

 VAR_4.registers = FUNC_3(VAR_5, VAR_7);
 if (!VAR_4.registers)
  return -VAR_0;

 switch (VAR_3) {
 case 3:
  FUNC_4(VAR_4.pcidev,
          VAR_2, &VAR_6);
  VAR_4.gtt_bus_addr = VAR_6;
  break;
 case 5:
  VAR_4.gtt_bus_addr = VAR_5 + FUNC_1(2);
  break;
 default:
  VAR_4.gtt_bus_addr = VAR_5 + FUNC_0(512);
  break;
 }

 FUNC_2();

 return 0;
}
