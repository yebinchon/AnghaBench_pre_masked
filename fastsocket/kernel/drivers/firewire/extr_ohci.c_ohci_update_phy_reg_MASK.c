
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_ohci {int dummy; } ;
struct fw_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct fw_ohci*) ;
 int FUNC_4 (char*) ;
 struct fw_ohci* FUNC_5 (struct fw_card*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct fw_ohci*,int ) ;
 int FUNC_8 (struct fw_ohci*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct fw_card *VAR_3, int VAR_4,
          int VAR_5, int VAR_6)
{
 struct fw_ohci *VAR_7 = FUNC_5(VAR_3);
 u32 VAR_8, VAR_9;

 FUNC_8(VAR_7, VAR_1, FUNC_0(VAR_4));
 FUNC_3(VAR_7);
 FUNC_6(2);
 VAR_8 = FUNC_7(VAR_7, VAR_1);
 if ((VAR_8 & VAR_2) == 0) {
  FUNC_4("failed to set phy reg bits.\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_1(VAR_8);
 VAR_9 = (VAR_9 & ~VAR_5) | VAR_6;
 FUNC_8(VAR_7, VAR_1,
    FUNC_2(VAR_4, VAR_9));

 return 0;
}
