
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phy_interface_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static phy_interface_t FUNC_1(const char *VAR_10)
{
 if (FUNC_0(VAR_10, "mii") == 0)
  return VAR_1;
 if (FUNC_0(VAR_10, "gmii") == 0)
  return VAR_0;
 if (FUNC_0(VAR_10, "tbi") == 0)
  return VAR_9;
 if (FUNC_0(VAR_10, "rmii") == 0)
  return VAR_6;
 if (FUNC_0(VAR_10, "rgmii") == 0)
  return VAR_2;
 if (FUNC_0(VAR_10, "rgmii-id") == 0)
  return VAR_3;
 if (FUNC_0(VAR_10, "rgmii-txid") == 0)
  return VAR_5;
 if (FUNC_0(VAR_10, "rgmii-rxid") == 0)
  return VAR_4;
 if (FUNC_0(VAR_10, "rtbi") == 0)
  return VAR_7;
 if (FUNC_0(VAR_10, "sgmii") == 0)
  return VAR_8;

 return VAR_1;
}
