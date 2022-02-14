
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgb_hw {int adapter_stopped; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ixgb_hw*,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct ixgb_hw*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct ixgb_hw*) ;
 int FUNC_5 (int ) ;

bool
FUNC_6(struct ixgb_hw *VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;

 FUNC_0("ixgb_adapter_stop");




 if (VAR_8->adapter_stopped) {
  FUNC_1("Exiting because the adapter is already stopped!!!\n");
  return 0;
 }




 VAR_8->adapter_stopped = 1;


 FUNC_1("Masking off all interrupts\n");
 FUNC_3(VAR_8, VAR_1, 0xFFFFFFFF);





 FUNC_3(VAR_8, VAR_6, FUNC_2(VAR_8, VAR_6) & ~VAR_4);
 FUNC_3(VAR_8, VAR_7, FUNC_2(VAR_8, VAR_7) & ~VAR_5);
 FUNC_5(VAR_3);






 FUNC_1("Issuing a global reset to MAC\n");

 VAR_9 = FUNC_4(VAR_8);


 FUNC_1("Masking off all interrupts\n");
 FUNC_3(VAR_8, VAR_1, 0xffffffff);


 VAR_10 = FUNC_2(VAR_8, VAR_0);

 return (VAR_9 & VAR_2);
}
