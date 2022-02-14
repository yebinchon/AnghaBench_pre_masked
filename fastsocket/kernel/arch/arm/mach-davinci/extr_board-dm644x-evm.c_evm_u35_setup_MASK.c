
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(struct i2c_client *VAR_0, int VAR_1, unsigned VAR_2, void *VAR_3)
{

 FUNC_1(VAR_1 + 0, "nDRV_VBUS");
 FUNC_0(VAR_1 + 0, 1);


 FUNC_1(VAR_1 + 1, "VDDIMX_EN");
 FUNC_0(VAR_1 + 1, 1);


 FUNC_1(VAR_1 + 2, "VLYNQ_EN");
 FUNC_0(VAR_1 + 2, 1);


 FUNC_1(VAR_1 + 3, "nCF_RESET");
 FUNC_0(VAR_1 + 3, 0);




 FUNC_1(VAR_1 + 5, "WLAN_RESET");
 FUNC_0(VAR_1 + 5, 1);


 FUNC_1(VAR_1 + 6, "nATA_SEL");
 FUNC_0(VAR_1 + 6, 0);


 FUNC_1(VAR_1 + 7, "nCF_SEL");
 FUNC_0(VAR_1 + 7, 1);




 FUNC_2(500, 8);

 return 0;
}
