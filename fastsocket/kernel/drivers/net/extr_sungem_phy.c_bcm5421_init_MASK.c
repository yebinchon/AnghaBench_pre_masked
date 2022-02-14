
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_phy {scalar_t__ platform_data; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct device_node* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (struct mii_phy*,int) ;
 int FUNC_3 (struct mii_phy*,int,int) ;

__attribute__((used)) static int FUNC_4(struct mii_phy* VAR_2)
{
 u16 VAR_3;
 unsigned int VAR_4;

 VAR_4 = (FUNC_2(VAR_2, VAR_0) << 16 | FUNC_2(VAR_2, VAR_1));


 if (VAR_4 == 0x002060e0) {


  FUNC_3(VAR_2, 0x18, 0x1007);
  VAR_3 = FUNC_2(VAR_2, 0x18);
  FUNC_3(VAR_2, 0x18, VAR_3 | 0x0400);
  FUNC_3(VAR_2, 0x18, 0x0007);
  VAR_3 = FUNC_2(VAR_2, 0x18);
  FUNC_3(VAR_2, 0x18, VAR_3 | 0x0800);
  FUNC_3(VAR_2, 0x17, 0x000a);
  VAR_3 = FUNC_2(VAR_2, 0x15);
  FUNC_3(VAR_2, 0x15, VAR_3 | 0x0200);
 }


 if ((VAR_4 & 0xfffffff0) == 0x002062e0) {
  FUNC_3(VAR_2, 4, 0x01e1);
  FUNC_3(VAR_2, 9, 0x0300);
 }
 return 0;
}
