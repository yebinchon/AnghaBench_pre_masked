
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hw_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (struct hw_data*,int) ;
 int FUNC_2 (struct hw_data*,int) ;
 int FUNC_3 (struct hw_data*) ;
 int FUNC_4 (struct hw_data*,int,int *) ;
 int FUNC_5 (struct hw_data*,int,int*) ;
 int FUNC_6 (struct hw_data*,int,int ) ;
 int FUNC_7 (struct hw_data*,int,int) ;
 int VAR_4 ;
 int FUNC_8 (struct hw_data*) ;
 int VAR_5 ;

void FUNC_9(struct hw_data *VAR_6, u32 VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;

 FUNC_0(("[CAL] -> phy_calibration_winbond()\n"));


 FUNC_4(VAR_6, 0x80, &VAR_4);
 FUNC_4(VAR_6, 0xE4, &VAR_5);
 FUNC_5(VAR_6, 0x58, &VAR_9);



 FUNC_2(VAR_6, VAR_7);



 FUNC_3(VAR_6);
 FUNC_1(VAR_6, VAR_7);


 FUNC_5(VAR_6, VAR_3, &VAR_8);
 VAR_8 &= ~(VAR_2|VAR_1|VAR_0);
 FUNC_7(VAR_6, VAR_3, VAR_8);
 FUNC_0(("[CAL]    MODE_CTRL (write) = 0x%08X\n", VAR_8));


 FUNC_6(VAR_6, 0x80, VAR_4);
 FUNC_6(VAR_6, 0xE4, VAR_5);
 FUNC_7(VAR_6, 0x58, VAR_9);



 FUNC_8(VAR_6);

}
