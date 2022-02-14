
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sas_phy_linkrates {int minimum_linkrate; int maximum_linkrate; } ;
struct domain_device {int dummy; } ;
typedef enum phy_func { ____Placeholder_phy_func } phy_func ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* FUNC_0 (int ) ;
 int* FUNC_1 (int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (struct domain_device*,int*,int ,int*,int ) ;

int FUNC_4(struct domain_device *VAR_4, int VAR_5,
   enum phy_func VAR_6,
   struct sas_phy_linkrates *VAR_7)
{
 u8 *VAR_8;
 u8 *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_0(VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_2);
 if (!VAR_9) {
  FUNC_2(VAR_8);
  return -VAR_0;
 }

 VAR_8[1] = VAR_3;
 VAR_8[9] = VAR_5;
 VAR_8[10]= VAR_6;
 if (VAR_7) {
  VAR_8[32] = VAR_7->minimum_linkrate << 4;
  VAR_8[33] = VAR_7->maximum_linkrate << 4;
 }

 VAR_10 = FUNC_3(VAR_4, VAR_8, VAR_1, VAR_9,VAR_2);

 FUNC_2(VAR_9);
 FUNC_2(VAR_8);
 return VAR_10;
}
