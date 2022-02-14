
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 () ;

__attribute__((used)) static s32 FUNC_10(struct e1000_hw *VAR_9)
{
 u32 VAR_10;
 s32 VAR_11;




 VAR_11 = FUNC_2(VAR_9);
 if (VAR_11)
  FUNC_0("PCI-E Master disable polling has failed.\n");


 VAR_11 = FUNC_5(VAR_9);
 if (VAR_11) {
  FUNC_0("PCI-E Set completion timeout has failed.\n");
 }

 FUNC_0("Masking off all interrupts\n");
 FUNC_8(VAR_5, 0xffffffff);

 FUNC_8(VAR_6, 0);
 FUNC_8(VAR_7, VAR_8);
 FUNC_9();

 FUNC_6(10);

 VAR_10 = FUNC_7(VAR_0);

 FUNC_0("Issuing a global reset to MAC\n");
 FUNC_8(VAR_0, VAR_10 | VAR_1);

 VAR_11 = FUNC_3(VAR_9);
 if (VAR_11) {




  FUNC_0("Auto Read Done did not complete\n");
 }


 if ((FUNC_7(VAR_2) & VAR_3) == 0)
  FUNC_4(VAR_9);


 FUNC_8(VAR_5, 0xffffffff);
 FUNC_7(VAR_4);


 VAR_11 = FUNC_1(VAR_9);

 return VAR_11;
}
